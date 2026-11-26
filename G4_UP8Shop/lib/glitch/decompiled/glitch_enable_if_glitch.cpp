#include "Core/Utils/DecompTypes.h"
#include "glitch_enable_if_glitch.h"

// ----------------------------------------------------------------------------
// Function: glitch::video::IVideoDriver::IFramebuffer::screen2DevicePos_int_id_adebc9  (binary VA: 0xde20c0)
// Original: glitch::video::IVideoDriver::IFramebuffer::screen2DevicePos<int>
// ----------------------------------------------------------------------------
uint32_t * glitch::video::IVideoDriver::IFramebuffer::screen2DevicePos_int_id_adebc9(uint32_t *a1, int *a2, int *a3)
{
  uint32_t *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  result = a1;
  v4 = a1[14];
  v5 = a1[12];
  v6 = a1[13];
  if ( v4 != 0 || v5 != 0 || v6 != 0 )
  {
    v7 = a1[3] + v5;
    v9 = a1[4] + v6;
    *a2 += a1[10];
    v8 = a1[11] + *a3;
    *a3 = v8;
    switch ( v4 )
    {
      case 2:
        *a3 = v9 - v8;
        *a2 = v7 - *a2;
        return (uint32_t *)(v9 - v8);
      case 3:
        *a3 = *a2;
        *a2 = v9 - v8;
        return (uint32_t *)(v9 - v8);
      case 1:
        *a3 = v7 - *a2;
        *a2 = v8;
        break;
      default:
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::IVideoDriver::IFramebuffer::screen2Device_int_id_65d374  (binary VA: 0xde2160)
// Original: glitch::video::IVideoDriver::IFramebuffer::screen2Device<int>
// ----------------------------------------------------------------------------
int glitch::video::IVideoDriver::IFramebuffer::screen2Device_int_id_65d374(uint32_t *a1, int *a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v2 = a1[14];
  if ( v2 != 0 || a1[12] != 0 || (result = a1[13]) != 0 )
  {
    v8 = *a2;
    v9[0] = a2[1];
    glitch::video::IVideoDriver::IFramebuffer::screen2DevicePos_int_id_adebc9(a1, &v8, v9);
    *a2 = v8;
    a2[1] = v9[0];
    v8 = a2[2];
    v9[0] = a2[3];
    glitch::video::IVideoDriver::IFramebuffer::screen2DevicePos_int_id_adebc9(a1, &v8, v9);
    v3 = v9[0];
    result = v8;
    a2[2] = v8;
    a2[3] = v3;
    switch ( v2 )
    {
      case 2:
        v5 = *a2;
        v6 = a2[1];
        *a2 = result;
        a2[1] = v3;
        a2[2] = v5;
        a2[3] = v6;
        break;
      case 3:
        v7 = *a2;
        *a2 = result;
        a2[2] = v7;
        break;
      case 1:
        result = a2[1];
        a2[1] = v3;
        a2[3] = result;
        break;
      default:
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::IVideoDriver::IFramebuffer::screen2DevicePos_float_id_5e4d7f  (binary VA: 0xde2400)
// Original: glitch::video::IVideoDriver::IFramebuffer::screen2DevicePos<float>
// ----------------------------------------------------------------------------
uint32_t * glitch::video::IVideoDriver::IFramebuffer::screen2DevicePos_float_id_5e4d7f(uint32_t *a1, float *a2, float *a3)
{
  uint32_t *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm0_4

  result = a1;
  v4 = a1[14];
  v5 = a1[12];
  v6 = a1[13];
  if ( v4 != 0 || v5 != 0 || v6 != 0 )
  {
    v7 = a1[4] + v6;
    v8 = a1[3] + v5;
    *a2 = (float)(int)a1[10] + *a2;
    v9 = (float)(int)a1[11] + *a3;
    *a3 = v9;
    switch ( v4 )
    {
      case 2:
        *a3 = (float)v7 - v9;
        *a2 = (float)v8 - *a2;
        break;
      case 3:
        result = *(uint32_t **)a2;
        *a3 = *a2;
        *a2 = (float)v7 - v9;
        break;
      case 1:
        *a3 = (float)v8 - *a2;
        *a2 = v9;
        break;
      default:
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::IVideoDriver::IFramebuffer::device2ScreenPos_int_id_c2604a  (binary VA: 0xde24e0)
// Original: glitch::video::IVideoDriver::IFramebuffer::device2ScreenPos<int>
// ----------------------------------------------------------------------------
uint32_t * glitch::video::IVideoDriver::IFramebuffer::device2ScreenPos_int_id_c2604a(uint32_t *a1, int *a2, int *a3)
{
  uint32_t *result;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;

  result = a1;
  v4 = a1[14];
  if ( v4 != 0 )
  {
    v6 = a1[13] + a1[4];
    v7 = a1[12] + a1[3];
    switch ( v4 )
    {
      case 2:
        *a3 = v6 - *a3;
        v5 = v7 - *a2;
        *a2 = v5;
        goto LABEL_4;
      case 3:
        v9 = v6 - *a2;
        *a2 = *a3;
        *a3 = v9;
        break;
      case 1:
        v8 = *a2;
        *a2 = v7 - *a3;
        *a3 = v8;
        v5 = *a2;
        goto LABEL_4;
      default:
        break;
    }
LABEL_3:
    v5 = *a2;
LABEL_4:
    *a2 = v5 - a1[10];
    result = (uint32_t *)a1[11];
    *a3 -= (int)(uintptr_t)(result);
    return result;
  }
  if ( a1[12] != 0 || a1[13] != 0 )
    goto LABEL_3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::IVideoDriver::IFramebuffer::device2Screen_int_id_f42065  (binary VA: 0xde2590)
// Original: glitch::video::IVideoDriver::IFramebuffer::device2Screen<int>
// ----------------------------------------------------------------------------
int glitch::video::IVideoDriver::IFramebuffer::device2Screen_int_id_f42065(uint32_t *a1, int *a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v2 = a1[14];
  if ( v2 != 0 || a1[12] != 0 || (result = a1[13]) != 0 )
  {
    v8 = *a2;
    v9[0] = a2[1];
    glitch::video::IVideoDriver::IFramebuffer::device2ScreenPos_int_id_c2604a(a1, &v8, v9);
    *a2 = v8;
    a2[1] = v9[0];
    v8 = a2[2];
    v9[0] = a2[3];
    glitch::video::IVideoDriver::IFramebuffer::device2ScreenPos_int_id_c2604a(a1, &v8, v9);
    result = v9[0];
    v4 = v8;
    a2[2] = v8;
    a2[3] = result;
    switch ( v2 )
    {
      case 2:
        v5 = *a2;
        v6 = a2[1];
        *a2 = v4;
        a2[1] = result;
        a2[2] = v5;
        a2[3] = v6;
        break;
      case 3:
        v7 = a2[1];
        a2[1] = result;
        a2[3] = v7;
        break;
      case 1:
        result = *a2;
        *a2 = v4;
        a2[2] = result;
        break;
      default:
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::IVideoDriver::IFramebuffer::device2ScreenPos_float_id_f2490e  (binary VA: 0xde26a0)
// Original: glitch::video::IVideoDriver::IFramebuffer::device2ScreenPos<float>
// ----------------------------------------------------------------------------
uint32_t * glitch::video::IVideoDriver::IFramebuffer::device2ScreenPos_float_id_f2490e(uint32_t *a1, float *a2, float *a3)
{
  uint32_t *result;
  int v4;
  float v5; // xmm0_4
  int v6;
  int v7;
  float v8;
  float v9; // xmm0_4

  result = a1;
  v4 = a1[14];
  if ( v4 != 0 )
  {
    v6 = a1[13] + a1[4];
    v7 = a1[12] + a1[3];
    switch ( v4 )
    {
      case 2:
        *a3 = (float)v6 - *a3;
        v5 = (float)v7 - *a2;
        *a2 = v5;
        goto LABEL_4;
      case 3:
        v9 = (float)v6 - *a2;
        *a2 = *a3;
        *a3 = v9;
        break;
      case 1:
        v8 = *a2;
        *a2 = (float)v7 - *a3;
        *a3 = v8;
        v5 = *a2;
        goto LABEL_4;
      default:
        break;
    }
LABEL_3:
    v5 = *a2;
LABEL_4:
    *a2 = v5 - (float)(int)a1[10];
    *a3 = *a3 - (float)(int)a1[11];
    return result;
  }
  if ( a1[12] != 0 || a1[13] != 0 )
    goto LABEL_3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::IVideoDriver::IFramebuffer::screen2Device_float_id_d0b0bd  (binary VA: 0xde2790)
// Original: glitch::video::IVideoDriver::IFramebuffer::screen2Device<float>
// ----------------------------------------------------------------------------
int glitch::video::IVideoDriver::IFramebuffer::screen2Device_float_id_d0b0bd(uint32_t *a1, float *a2)
{
  int v2;
  float v3;
  int result;
  float v5;
  int v6;
  float v7;
  typedef int _g4_t_v8;
  typedef float _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v2 = a1[14];
  if ( v2 != 0 || a1[12] != 0 || (result = a1[13]) != 0 )
  {
    v8 = *(uint32_t *)a2;
    v9[0] = a2[1];
    glitch::video::IVideoDriver::IFramebuffer::screen2DevicePos_float_id_5e4d7f(a1, (float *)&v8, v9);
    *(uint32_t *)a2 = v8;
    a2[1] = v9[0];
    v8 = *((uint32_t *)a2 + 2);
    v9[0] = a2[3];
    glitch::video::IVideoDriver::IFramebuffer::screen2DevicePos_float_id_5e4d7f(a1, (float *)&v8, v9);
    v3 = v9[0];
    result = v8;
    *((uint32_t *)a2 + 2) = v8;
    a2[3] = v3;
    switch ( v2 )
    {
      case 2:
        v5 = *a2;
        v6 = *((uint32_t *)a2 + 1);
        *(uint32_t *)a2 = result;
        a2[1] = v3;
        a2[2] = v5;
        *((uint32_t *)a2 + 3) = v6;
        break;
      case 3:
        v7 = *a2;
        *(uint32_t *)a2 = result;
        a2[2] = v7;
        break;
      case 1:
        result = *((uint32_t *)a2 + 1);
        a2[1] = v3;
        *((uint32_t *)a2 + 3) = result;
        break;
      default:
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::IVideoDriver::IFramebuffer::device2Screen_float_id_a57a1b  (binary VA: 0xde28a0)
// Original: glitch::video::IVideoDriver::IFramebuffer::device2Screen<float>
// ----------------------------------------------------------------------------
int glitch::video::IVideoDriver::IFramebuffer::device2Screen_float_id_a57a1b(uint32_t *a1, int *a2)
{
  int v2;
  int result;
  int v4;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef float _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v2 = a1[14];
  if ( v2 != 0 || a1[12] != 0 || (result = a1[13]) != 0 )
  {
    v8 = *a2;
    LODWORD(v9[0]) = a2[1];
    glitch::video::IVideoDriver::IFramebuffer::device2ScreenPos_float_id_f2490e(a1, (float *)&v8, v9);
    *a2 = v8;
    a2[1] = LODWORD(v9[0]);
    v8 = a2[2];
    LODWORD(v9[0]) = a2[3];
    glitch::video::IVideoDriver::IFramebuffer::device2ScreenPos_float_id_f2490e(a1, (float *)&v8, v9);
    result = LODWORD(v9[0]);
    v4 = v8;
    a2[2] = v8;
    a2[3] = result;
    switch ( v2 )
    {
      case 2:
        v5 = *a2;
        v6 = a2[1];
        *a2 = v4;
        a2[1] = result;
        a2[2] = v5;
        a2[3] = v6;
        break;
      case 3:
        v7 = a2[1];
        a2[1] = result;
        a2[3] = v7;
        break;
      case 1:
        result = *a2;
        *a2 = v4;
        a2[2] = result;
        break;
      default:
        break;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_int_id_16b412  (binary VA: 0xe58bb0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_int_id_16b412(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 1 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    *(uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a3) = *a4;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector2d_int_151610  (binary VA: 0xe58c30)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector2d_int_151610(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 2 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 8 * a3);
    *v6 = *a4;
    v6[1] = a4[1];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector3d_int_e3d2fa  (binary VA: 0xe58cc0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector3d_int_e3d2fa(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 3 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 12 * a3);
    *v6 = *a4;
    v6[1] = a4[1];
    v6[2] = a4[2];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector4d_int_38cb11  (binary VA: 0xe58d50)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector4d_int_38cb11(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 4 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a3);
    *v6 = *a4;
    v6[1] = a4[1];
    v6[2] = a4[2];
    v6[3] = a4[3];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_float_id_ca1afb  (binary VA: 0xe58de0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_float_id_ca1afb(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 5 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    *(uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a3) = *a4;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector2d_float_3d6e87  (binary VA: 0xe58e60)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector2d_float_3d6e87(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 6 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 8 * a3);
    *v6 = *a4;
    v6[1] = a4[1];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector3d_float_99bb32  (binary VA: 0xe58ef0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector3d_float_99bb32(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 7 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 12 * a3);
    *v6 = *a4;
    v6[1] = a4[1];
    v6[2] = a4[2];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector4d_float_a8602d  (binary VA: 0xe58f80)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector4d_float_a8602d(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 8 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a3);
    *v6 = *a4;
    v6[1] = a4[1];
    v6[2] = a4[2];
    v6[3] = a4[3];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_CMatrix2_float_52f061  (binary VA: 0xe59010)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_CMatrix2_float_52f061(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 9 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a3);
    *v6 = *a4;
    v6[1] = a4[1];
    v6[2] = a4[2];
    v6[3] = a4[3];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_CMatrix3_float_049364  (binary VA: 0xe590a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_CMatrix3_float_049364(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 10 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 36 * a3);
    *v6 = *a4;
    v6[1] = a4[1];
    v6[2] = a4[2];
    v6[3] = a4[3];
    v6[4] = a4[4];
    v6[5] = a4[5];
    v6[6] = a4[6];
    v6[7] = a4[7];
    v6[8] = a4[8];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_video_SColor_a8fdc3  (binary VA: 0xe59160)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_video_SColor_a8fdc3(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 17 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    *(uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a3) = *a4;
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_video_SColorf_c9d5a3  (binary VA: 0xe591e0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_video_SColorf_c9d5a3(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 18 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a3);
    *v6 = *a4;
    v6[1] = a4[1];
    v6[2] = a4[2];
    v6[3] = a4[3];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_int_id_6e67d0  (binary VA: 0xe59270)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_int_id_6e67d0(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, float *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  float *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 2) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = (float *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
      if ( v6 == 1 )
      {
        *v7 = *a4;
        return 1;
      }
      else
      {
        if ( v6 == 5 )
          *v7 = (float)*(int *)a4;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector2d_int_fce8c2  (binary VA: 0xe59320)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector2d_int_fce8c2(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  uint32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 4) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v6 == 2 )
      {
        v7 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
        *v7 = *a4;
        v7[1] = a4[1];
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector3d_int_a7c5aa  (binary VA: 0xe593c0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector3d_int_a7c5aa(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  uint32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 8) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v6 == 3 )
      {
        v7 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
        *v7 = *a4;
        v7[1] = a4[1];
        v7[2] = a4[2];
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector4d_int_54da2c  (binary VA: 0xe59470)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector4d_int_54da2c(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  uint32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x10) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v6 == 4 )
      {
        v7 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
        *v7 = *a4;
        v7[1] = a4[1];
        v7[2] = a4[2];
        v7[3] = a4[3];
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_float_id_d97248  (binary VA: 0xe59520)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_float_id_d97248(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, float *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  uint32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x20) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = (uint32_t *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
      if ( v6 == 1 )
      {
        *v7 = (int)*a4;
        return 1;
      }
      else
      {
        if ( v6 == 5 )
          *v7 = *(uint32_t *)a4;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector2d_float_9e9c08  (binary VA: 0xe595d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector2d_float_9e9c08(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  uint32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x40) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v6 == 6 )
      {
        v7 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
        *v7 = *a4;
        v7[1] = a4[1];
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector3d_float_de67e0  (binary VA: 0xe59670)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector3d_float_de67e0(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  uint32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( SLOBYTE(glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6]) < 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v6 == 7 )
      {
        v7 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
        *v7 = *a4;
        v7[1] = a4[1];
        v7[2] = a4[2];
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector4d_float_00488f  (binary VA: 0xe59720)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector4d_float_00488f(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, float *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int v7;
  int v8;
  float v9; // xmm1_4
  float v10; // xmm0_4

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x100) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = ParameterDef[1] + *((uint32_t *)a1 + 11);
      switch ( v6 )
      {
        case 8:
        case 18:
          *(float *)v7 = *a4;
          *(float *)(v7 + 4) = a4[1];
          *(float *)(v7 + 8) = a4[2];
          *(float *)(v7 + 12) = a4[3];
          return 1;
        case 17:
          v8 = (int)(float)(a4[1] * 255.0);
          v9 = a4[3] * 255.0;
          v10 = 255.0 * *a4;
          *(uint8_t *)(v7 + 2) = (int)(float)(a4[2] * 255.0);
          *(uint8_t *)v7 = (int)v10;
          *(uint8_t *)(v7 + 1) = v8;
          *(uint8_t *)(v7 + 3) = (int)v9;
          return 1;
        default:
          return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_CMatrix2_float_d247ae  (binary VA: 0xe59850)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_CMatrix2_float_d247ae(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int v7;
  int v8;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x200) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = *((uint32_t *)a1 + 11);
      v8 = ParameterDef[1];
      if ( v6 == 9 )
      {
        *(uint32_t *)(v7 + v8) = *a4;
        *(uint32_t *)(v7 + v8 + 4) = a4[1];
        *(uint32_t *)(v7 + v8 + 8) = a4[2];
        *(uint32_t *)(v7 + v8 + 12) = a4[3];
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_CMatrix3_float_eabcdd  (binary VA: 0xe59900)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_CMatrix3_float_eabcdd(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int v7;
  int v8;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x400) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = *((uint32_t *)a1 + 11);
      v8 = ParameterDef[1];
      if ( v6 == 10 )
      {
        *(uint32_t *)(v7 + v8) = *a4;
        *(uint32_t *)(v7 + v8 + 4) = a4[1];
        *(uint32_t *)(v7 + v8 + 8) = a4[2];
        *(uint32_t *)(v7 + v8 + 12) = a4[3];
        *(uint32_t *)(v7 + v8 + 16) = a4[4];
        *(uint32_t *)(v7 + v8 + 20) = a4[5];
        *(uint32_t *)(v7 + v8 + 24) = a4[6];
        *(uint32_t *)(v7 + v8 + 28) = a4[7];
        *(uint32_t *)(v7 + v8 + 32) = a4[8];
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_video_SColor_a2a5d9  (binary VA: 0xe599d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_video_SColor_a2a5d9(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint8_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int v7;
  int v8;
  float v9; // xmm2_4
  float v10; // xmm1_4

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x20000) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = ParameterDef[1] + *((uint32_t *)a1 + 11);
      if ( v6 == 17 )
      {
        *(uint32_t *)v7 = *(uint32_t *)a4;
        return 1;
      }
      else if ( v6 == 18 || v6 == 8 )
      {
        v8 = *a4;
        v9 = (float)a4[2] * 0.003921569f;
        v10 = (float)a4[3] * 0.003921569f;
        *(float *)(v7 + 4) = (float)a4[1] * 0.003921569f;
        *(float *)(v7 + 8) = v9;
        *(float *)(v7 + 12) = v10;
        *(float *)v7 = (float)v8 * 0.003921569f;
        return 1;
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_video_SColorf_ea6ba4  (binary VA: 0xe59ad0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_video_SColorf_ea6ba4(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, float *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int v7;
  int v8;
  float v9; // xmm1_4
  float v10; // xmm0_4

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x40000) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = ParameterDef[1] + *((uint32_t *)a1 + 11);
      switch ( v6 )
      {
        case 8:
        case 18:
          *(float *)v7 = *a4;
          *(float *)(v7 + 4) = a4[1];
          *(float *)(v7 + 8) = a4[2];
          *(float *)(v7 + 12) = a4[3];
          return 1;
        case 17:
          v8 = (int)(float)(a4[1] * 255.0);
          v9 = a4[3] * 255.0;
          v10 = 255.0 * *a4;
          *(uint8_t *)(v7 + 2) = (int)(float)(a4[2] * 255.0);
          *(uint8_t *)v7 = (int)v10;
          *(uint8_t *)(v7 + 1) = v8;
          *(uint8_t *)(v7 + 3) = (int)v9;
          return 1;
        default:
          return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_int_id_16b412  (binary VA: 0xe59c00)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_int_id_16b412(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  v9 = a5;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 1 )
  {
    if ( a6 == 4 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a4), src, 4 * a5);
      return 1;
    }
    else
    {
      v10 = ParameterDef[1];
      result = 1;
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)(v10 + *((uint32_t *)a1 + 11) + 4 * a4);
        do
        {
          --v9;
          *v11 = *v8;
          v8 = (uint32_t *)((char *)v8 + a6);
          ++v11;
        }
        while ( v9 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector2d_int_151610  (binary VA: 0xe59ce0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector2d_int_151610(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  uint32_t *ParameterDef;
  int result;
  int v10;
  uint32_t *v11;

  v6 = src;
  v7 = a5;
  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 2 )
  {
    if ( a6 == 8 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 8 * a4), src, 8 * a5);
      return 1;
    }
    else
    {
      v10 = ParameterDef[1];
      result = 1;
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)(v10 + *((uint32_t *)a1 + 11) + 8 * a4);
        do
        {
          --v7;
          *v11 = *v6;
          v11[1] = v6[1];
          v6 = (uint32_t *)((char *)v6 + a6);
          v11 += 2;
        }
        while ( v7 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector3d_int_e3d2fa  (binary VA: 0xe59dc0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector3d_int_e3d2fa(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  uint32_t *ParameterDef;
  int result;
  int v10;
  uint32_t *v11;

  v6 = src;
  v7 = a5;
  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 3 )
  {
    if ( a6 == 12 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 12 * a4), src, 12 * a5);
      return 1;
    }
    else
    {
      v10 = ParameterDef[1];
      result = 1;
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)(*((uint32_t *)a1 + 11) + v10 + 12 * a4);
        do
        {
          --v7;
          *v11 = *v6;
          v11[1] = v6[1];
          v11[2] = v6[2];
          v6 = (uint32_t *)((char *)v6 + a6);
          v11 += 3;
        }
        while ( v7 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector4d_int_38cb11  (binary VA: 0xe59ea0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector4d_int_38cb11(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  uint32_t *ParameterDef;
  int result;
  int v10;
  uint32_t *v11;

  v6 = src;
  v7 = a5;
  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 4 )
  {
    if ( a6 == 16 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a4), src, 16 * a5);
      return 1;
    }
    else
    {
      v10 = ParameterDef[1];
      result = 1;
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)(16 * a4 + *((uint32_t *)a1 + 11) + v10);
        do
        {
          --v7;
          *v11 = *v6;
          v11[1] = v6[1];
          v11[2] = v6[2];
          v11[3] = v6[3];
          v6 = (uint32_t *)((char *)v6 + a6);
          v11 += 4;
        }
        while ( v7 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_float_id_ca1afb  (binary VA: 0xe59f80)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_float_id_ca1afb(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  v9 = a5;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 5 )
  {
    if ( a6 == 4 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a4), src, 4 * a5);
      return 1;
    }
    else
    {
      v10 = ParameterDef[1];
      result = 1;
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)(v10 + *((uint32_t *)a1 + 11) + 4 * a4);
        do
        {
          --v9;
          *v11 = *v8;
          v8 = (uint32_t *)((char *)v8 + a6);
          ++v11;
        }
        while ( v9 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector2d_float_3d6e87  (binary VA: 0xe5a060)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector2d_float_3d6e87(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  uint32_t *ParameterDef;
  int result;
  int v10;
  uint32_t *v11;

  v6 = src;
  v7 = a5;
  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 6 )
  {
    if ( a6 == 8 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 8 * a4), src, 8 * a5);
      return 1;
    }
    else
    {
      v10 = ParameterDef[1];
      result = 1;
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)(v10 + *((uint32_t *)a1 + 11) + 8 * a4);
        do
        {
          --v7;
          *v11 = *v6;
          v11[1] = v6[1];
          v6 = (uint32_t *)((char *)v6 + a6);
          v11 += 2;
        }
        while ( v7 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector3d_float_99bb32  (binary VA: 0xe5a140)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector3d_float_99bb32(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  uint32_t *ParameterDef;
  int result;
  int v10;
  uint32_t *v11;

  v6 = src;
  v7 = a5;
  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 7 )
  {
    if ( a6 == 12 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 12 * a4), src, 12 * a5);
      return 1;
    }
    else
    {
      v10 = ParameterDef[1];
      result = 1;
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)(*((uint32_t *)a1 + 11) + v10 + 12 * a4);
        do
        {
          --v7;
          *v11 = *v6;
          v11[1] = v6[1];
          v11[2] = v6[2];
          v6 = (uint32_t *)((char *)v6 + a6);
          v11 += 3;
        }
        while ( v7 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector4d_float_a8602d  (binary VA: 0xe5a230)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_vector4d_float_a8602d(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  uint32_t *ParameterDef;
  int result;
  int v10;
  uint32_t *v11;

  v6 = src;
  v7 = a5;
  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 8 )
  {
    if ( a6 == 16 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a4), src, 16 * a5);
      return 1;
    }
    else
    {
      v10 = ParameterDef[1];
      result = 1;
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)(16 * a4 + *((uint32_t *)a1 + 11) + v10);
        do
        {
          --v7;
          *v11 = *v6;
          v11[1] = v6[1];
          v11[2] = v6[2];
          v11[3] = v6[3];
          v6 = (uint32_t *)((char *)v6 + a6);
          v11 += 4;
        }
        while ( v7 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_CMatrix2_float_52f061  (binary VA: 0xe5a310)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_CMatrix2_float_52f061(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  uint32_t *ParameterDef;
  int result;
  int v10;
  uint32_t *v11;

  v6 = src;
  v7 = a5;
  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 9 )
  {
    if ( a6 == 16 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a4), src, 16 * a5);
      return 1;
    }
    else
    {
      v10 = ParameterDef[1];
      result = 1;
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)(16 * a4 + *((uint32_t *)a1 + 11) + v10);
        do
        {
          --v7;
          *v11 = *v6;
          v11[1] = v6[1];
          v11[2] = v6[2];
          v11[3] = v6[3];
          v6 = (uint32_t *)((char *)v6 + a6);
          v11 += 4;
        }
        while ( v7 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_CMatrix3_float_049364  (binary VA: 0xe5a3f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_CMatrix3_float_049364(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  uint32_t *ParameterDef;
  int result;
  int v10;
  uint32_t *v11;

  v6 = src;
  v7 = a5;
  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 10 )
  {
    if ( a6 == 36 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 36 * a4), src, 36 * a5);
      return 1;
    }
    else
    {
      v10 = ParameterDef[1];
      result = 1;
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)(*((uint32_t *)a1 + 11) + v10 + 36 * a4);
        do
        {
          --v7;
          *v11 = *v6;
          v11[1] = v6[1];
          v11[2] = v6[2];
          v11[3] = v6[3];
          v11[4] = v6[4];
          v11[5] = v6[5];
          v11[6] = v6[6];
          v11[7] = v6[7];
          v11[8] = v6[8];
          v6 = (uint32_t *)((char *)v6 + a6);
          v11 += 9;
        }
        while ( v7 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_video_SColor_a8fdc3  (binary VA: 0xe5a4f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_video_SColor_a8fdc3(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  v9 = a5;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 17 )
  {
    if ( a6 == 4 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a4), src, 4 * a5);
      return 1;
    }
    else
    {
      v10 = ParameterDef[1];
      result = 1;
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)(v10 + *((uint32_t *)a1 + 11) + 4 * a4);
        do
        {
          --v9;
          *v11 = *v8;
          v8 = (uint32_t *)((char *)v8 + a6);
          ++v11;
        }
        while ( v9 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_video_SColorf_c9d5a3  (binary VA: 0xe5a5d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_video_SColorf_c9d5a3(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  uint32_t *ParameterDef;
  int result;
  int v10;
  uint32_t *v11;

  v6 = src;
  v7 = a5;
  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 18 )
  {
    if ( a6 == 16 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a4), src, 16 * a5);
      return 1;
    }
    else
    {
      v10 = ParameterDef[1];
      result = 1;
      if ( a5 != 0 )
      {
        v11 = (uint32_t *)(16 * a4 + *((uint32_t *)a1 + 11) + v10);
        do
        {
          --v7;
          *v11 = *v6;
          v11[1] = v6[1];
          v11[2] = v6[2];
          v11[3] = v6[3];
          v6 = (uint32_t *)((char *)v6 + a6);
          v11 += 4;
        }
        while ( v7 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_int_id_6e67d0  (binary VA: 0xe5a6b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_int_id_6e67d0(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  int v10;
  float *v11;
  float v12; // xmm0_4
  uint32_t *v13;
  int v14;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  v9 = a5;
  if ( ParameterDef != nullptr )
  {
    v14 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v14] & 2) != 0 )
    {
      if ( a6 != 4 && a6 != 0 )
        goto LABEL_5;
      if ( v14 == 1 )
      {
        memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a4), src, 4 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_5:
        v10 = ParameterDef[1] + *((uint32_t *)a1 + 11);
        if ( v14 == 1 )
        {
          result = 1;
          if ( a5 != 0 )
          {
            v13 = (uint32_t *)(v10 + 4 * a4);
            do
            {
              --v9;
              *v13 = *v8;
              v8 = (uint32_t *)((char *)v8 + a6);
              ++v13;
            }
            while ( v9 != 0 );
            return 1;
          }
        }
        else
        {
          if ( v14 != 5 )
            return 1;
          result = 1;
          if ( a5 != 0 )
          {
            v11 = (float *)(v10 + 4 * a4);
            do
            {
              v12 = (float)(int)*v8;
              --v9;
              v8 = (uint32_t *)((char *)v8 + a6);
              *v11++ = v12;
            }
            while ( v9 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector2d_int_fce8c2  (binary VA: 0xe5a800)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector2d_int_fce8c2(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  v9 = a5;
  if ( ParameterDef != nullptr )
  {
    v12 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v12] & 4) != 0 )
    {
      if ( a6 != 8 && a6 != 0 )
        goto LABEL_8;
      if ( v12 == 2 )
      {
        memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 8 * a4), src, 8 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_8:
        v10 = ParameterDef[1];
        result = 1;
        if ( v12 == 2 && a5 != 0 )
        {
          v11 = (uint32_t *)(*((uint32_t *)a1 + 11) + v10 + 8 * a4);
          do
          {
            --v9;
            *v11 = *v8;
            v11[1] = v8[1];
            v8 = (uint32_t *)((char *)v8 + a6);
            v11 += 2;
          }
          while ( v9 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector3d_int_a7c5aa  (binary VA: 0xe5a920)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector3d_int_a7c5aa(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  v9 = a5;
  if ( ParameterDef != nullptr )
  {
    v12 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v12] & 8) != 0 )
    {
      if ( a6 != 12 && a6 != 0 )
        goto LABEL_8;
      if ( v12 == 3 )
      {
        memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 12 * a4), src, 12 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_8:
        v10 = ParameterDef[1];
        result = 1;
        if ( v12 == 3 && a5 != 0 )
        {
          v11 = (uint32_t *)(*((uint32_t *)a1 + 11) + v10 + 12 * a4);
          do
          {
            --v9;
            *v11 = *v8;
            v11[1] = v8[1];
            v11[2] = v8[2];
            v8 = (uint32_t *)((char *)v8 + a6);
            v11 += 3;
          }
          while ( v9 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector4d_int_54da2c  (binary VA: 0xe5aa50)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector4d_int_54da2c(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  v9 = a5;
  if ( ParameterDef != nullptr )
  {
    v12 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v12] & 0x10) != 0 )
    {
      if ( a6 != 16 && a6 != 0 )
        goto LABEL_8;
      if ( v12 == 4 )
      {
        memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a4), src, 16 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_8:
        v10 = ParameterDef[1];
        result = 1;
        if ( v12 == 4 && a5 != 0 )
        {
          v11 = (uint32_t *)(16 * a4 + *((uint32_t *)a1 + 11) + v10);
          do
          {
            --v9;
            *v11 = *v8;
            v11[1] = v8[1];
            v11[2] = v8[2];
            v11[3] = v8[3];
            v8 = (uint32_t *)((char *)v8 + a6);
            v11 += 4;
          }
          while ( v9 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_float_id_d97248  (binary VA: 0xe5ab80)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_float_id_d97248(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, float *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  float *v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  v9 = a5;
  if ( ParameterDef != nullptr )
  {
    v13 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v13] & 0x20) != 0 )
    {
      if ( a6 != 4 && a6 != 0 )
        goto LABEL_5;
      if ( v13 == 5 )
      {
        memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a4), src, 4 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_5:
        v10 = ParameterDef[1] + *((uint32_t *)a1 + 11);
        if ( v13 == 1 )
        {
          result = 1;
          if ( a5 != 0 )
          {
            v12 = (uint32_t *)(v10 + 4 * a4);
            do
            {
              --v9;
              *v12 = (int)*v8;
              v8 = (float *)((char *)v8 + a6);
              ++v12;
            }
            while ( v9 != 0 );
            return 1;
          }
        }
        else
        {
          if ( v13 != 5 )
            return 1;
          result = 1;
          if ( a5 != 0 )
          {
            v11 = (uint32_t *)(v10 + 4 * a4);
            do
            {
              --v9;
              *v11 = *(uint32_t *)v8;
              v8 = (float *)((char *)v8 + a6);
              ++v11;
            }
            while ( v9 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector2d_float_9e9c08  (binary VA: 0xe5acd0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector2d_float_9e9c08(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  v9 = a5;
  if ( ParameterDef != nullptr )
  {
    v12 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v12] & 0x40) != 0 )
    {
      if ( a6 != 8 && a6 != 0 )
        goto LABEL_8;
      if ( v12 == 6 )
      {
        memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 8 * a4), src, 8 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_8:
        v10 = ParameterDef[1];
        result = 1;
        if ( v12 == 6 && a5 != 0 )
        {
          v11 = (uint32_t *)(*((uint32_t *)a1 + 11) + v10 + 8 * a4);
          do
          {
            --v9;
            *v11 = *v8;
            v11[1] = v8[1];
            v8 = (uint32_t *)((char *)v8 + a6);
            v11 += 2;
          }
          while ( v9 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector3d_float_de67e0  (binary VA: 0xe5adf0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector3d_float_de67e0(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  v9 = a5;
  if ( ParameterDef != nullptr )
  {
    v12 = *((uint8_t *)ParameterDef + 9);
    if ( SLOBYTE(glitch::video::detail::SShaderParameterTypeInspection::Convertions[v12]) < 0 )
    {
      if ( a6 != 12 && a6 != 0 )
        goto LABEL_8;
      if ( v12 == 7 )
      {
        memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 12 * a4), src, 12 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_8:
        v10 = ParameterDef[1];
        result = 1;
        if ( v12 == 7 && a5 != 0 )
        {
          v11 = (uint32_t *)(*((uint32_t *)a1 + 11) + v10 + 12 * a4);
          do
          {
            --v9;
            *v11 = *v8;
            v11[1] = v8[1];
            v11[2] = v8[2];
            v8 = (uint32_t *)((char *)v8 + a6);
            v11 += 3;
          }
          while ( v9 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector4d_float_00488f  (binary VA: 0xe5af20)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_vector4d_float_00488f(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  if ( ParameterDef != nullptr )
  {
    v14 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v14] & 0x100) != 0 )
    {
      if ( a6 != 16 && a6 != 0 )
        goto LABEL_5;
      if ( v14 == 8 )
      {
        memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a4), src, 16 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_5:
        v9 = ParameterDef[1] + *((uint32_t *)a1 + 11);
        if ( v14 == 17 )
        {
          sub_DFF070(v9, (float *)src, a4, a5, a6);
          return 1;
        }
        if ( v14 == 18 )
        {
          v10 = (uint32_t *)(16 * a4 + v9);
          result = 1;
          v11 = &v10[4 * a5];
          if ( v10 != v11 )
          {
            do
            {
              *v10 = *v8;
              v10[1] = v8[1];
              v10[2] = v8[2];
              v10[3] = v8[3];
              v10 += 4;
              v8 = (uint32_t *)((char *)v8 + a6);
            }
            while ( v11 != v10 );
            return 1;
          }
        }
        else
        {
          result = 1;
          if ( v14 == 8 && a5 != 0 )
          {
            v12 = (uint32_t *)(16 * a4 + v9);
            v13 = a5;
            do
            {
              --v13;
              *v12 = *v8;
              v12[1] = v8[1];
              v12[2] = v8[2];
              v12[3] = v8[3];
              v8 = (uint32_t *)((char *)v8 + a6);
              v12 += 4;
            }
            while ( v13 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_CMatrix2_float_d247ae  (binary VA: 0xe5b0d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_CMatrix2_float_d247ae(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  v9 = a5;
  if ( ParameterDef != nullptr )
  {
    v12 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v12] & 0x200) != 0 )
    {
      if ( a6 != 16 && a6 != 0 )
        goto LABEL_8;
      if ( v12 == 9 )
      {
        memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a4), src, 16 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_8:
        v10 = ParameterDef[1];
        result = 1;
        if ( v12 == 9 && a5 != 0 )
        {
          v11 = (uint32_t *)(16 * a4 + *((uint32_t *)a1 + 11) + v10);
          do
          {
            --v9;
            *v11 = *v8;
            v11[1] = v8[1];
            v11[2] = v8[2];
            v11[3] = v8[3];
            v8 = (uint32_t *)((char *)v8 + a6);
            v11 += 4;
          }
          while ( v9 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_video_SColor_a2a5d9  (binary VA: 0xe5b200)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_video_SColor_a2a5d9(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  if ( ParameterDef != nullptr )
  {
    v9 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v9] & 0x20000) != 0 )
    {
      if ( a6 != 4 && a6 != 0 )
        goto LABEL_5;
      if ( v9 == 17 )
      {
        memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a4), src, 4 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_5:
        if ( v9 != 17 )
        {
          if ( v9 == 18 )
          {
            sub_DFF230(ParameterDef[1] + *((uint32_t *)a1 + 11), (uint8_t *)src, a4, a5, a6);
            return 1;
          }
          if ( v9 == 8 )
          {
            sub_DFF1B0(ParameterDef[1] + *((uint32_t *)a1 + 11), (uint8_t *)src, a4, a5, a6);
            return 1;
          }
          return 1;
        }
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)(ParameterDef[1] + *((uint32_t *)a1 + 11) + 4 * a4);
          v11 = a5;
          do
          {
            --v11;
            *v10 = *v8;
            v8 = (uint32_t *)((char *)v8 + a6);
            ++v10;
          }
          while ( v11 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_video_SColorf_ea6ba4  (binary VA: 0xe5b370)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_video_SColorf_ea6ba4(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = src;
  if ( ParameterDef != nullptr )
  {
    v14 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v14] & 0x40000) != 0 )
    {
      if ( a6 != 16 && a6 != 0 )
        goto LABEL_5;
      if ( v14 == 18 )
      {
        memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a4), src, 16 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_5:
        v9 = ParameterDef[1] + *((uint32_t *)a1 + 11);
        switch ( v14 )
        {
          case 8:
            v12 = (uint32_t *)(16 * a4 + v9);
            result = 1;
            v13 = &v12[4 * a5];
            if ( v12 != v13 )
            {
              do
              {
                *v12 = *v8;
                v12[1] = v8[1];
                v12[2] = v8[2];
                v12[3] = v8[3];
                v12 += 4;
                v8 = (uint32_t *)((char *)v8 + a6);
              }
              while ( v13 != v12 );
              return 1;
            }
            break;
          case 17:
            sub_DFF110(v9, (float *)src, a4, a5, a6);
            return 1;
          case 18:
            result = 1;
            if ( a5 != 0 )
            {
              v10 = (uint32_t *)(16 * a4 + v9);
              v11 = a5;
              do
              {
                --v11;
                *v10 = *v8;
                v10[1] = v8[1];
                v10[2] = v8[2];
                v10[3] = v8[3];
                v8 = (uint32_t *)((char *)v8 + a6);
                v10 += 4;
              }
              while ( v11 != 0 );
              return 1;
            }
            break;
          default:
            return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterElement_unsigned_char_b1e886  (binary VA: 0xe5b530)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterElement<unsigned char>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterElement_unsigned_char_b1e886(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint8_t a4, uint8_t a5)
{
  uint32_t *ParameterDef;
  int result;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint16_t *v11;
  unsigned int v12;
  uint16_t *v13;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v7 = *((uint8_t *)ParameterDef + 9);
    if ( glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[v7] == 0
      && glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[v7] > a4
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v7 == 11 )
      {
        v8 = (uint32_t *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
        v9 = (uint32_t *)*v8;
        if ( *v8 == 0 )
        {
          v10 = sub_DFF370();
          v9 = v10;
          v11 = (uint16_t *)(v10);
          v12 = 64;
          if ( ((uint8_t)(uintptr_t)v10 & 1) != 0 )
          {
            *(uint8_t *)v10 = 0;
            v11 = (uint16_t *)((char *)v10 + 1);
            LOWORD(v12) = 63;
          }
          if ( ((uint8_t)(uintptr_t)v11 & 2) != 0 )
          {
            *v11 = 0;
            v12 -= 2;
            ++v11;
          }
          memset(v11, 0, 4 * (v12 >> 2));
          v13 = &v11[2 * (v12 >> 2)];
          if ( (v12 & 2) != 0 )
            *v13++ = 0;
          if ( (v12 & 1) != 0 )
            *(uint8_t *)v13 = 0;
          *v10 = 1065353216;
          v10[5] = 1065353216;
          v10[10] = 1065353216;
          v10[15] = 1065353216;
          *v8 = (uint32_t)(uintptr_t)(v10);
        }
        *(float *)&v9[a4] = (float)((float)0 * 65536.0) + (float)a5;
        return 1;
      }
      else
      {
        *(uint8_t *)(ParameterDef[1] + a3 + *((uint32_t *)a1 + 11) + a4) = a5;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterElement_int_id_85a0f1  (binary VA: 0xe5b6b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterElement<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterElement_int_id_85a0f1(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint8_t a4, int a5)
{
  uint32_t *ParameterDef;
  int result;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint16_t *v11;
  unsigned int v12;
  uint16_t *v13;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v7 = *((uint8_t *)ParameterDef + 9);
    if ( glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[v7] == 1
      && glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[v7] > a4
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v7 == 11 )
      {
        v8 = (uint32_t *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
        v9 = (uint32_t *)*v8;
        if ( *v8 == 0 )
        {
          v10 = sub_DFF370();
          v9 = v10;
          v11 = (uint16_t *)(v10);
          v12 = 64;
          if ( ((uint8_t)(uintptr_t)v10 & 1) != 0 )
          {
            *(uint8_t *)v10 = 0;
            v11 = (uint16_t *)((char *)v10 + 1);
            LOWORD(v12) = 63;
          }
          if ( ((uint8_t)(uintptr_t)v11 & 2) != 0 )
          {
            *v11 = 0;
            v12 -= 2;
            ++v11;
          }
          memset(v11, 0, 4 * (v12 >> 2));
          v13 = &v11[2 * (v12 >> 2)];
          if ( (v12 & 2) != 0 )
            *v13++ = 0;
          if ( (v12 & 1) != 0 )
            *(uint8_t *)v13 = 0;
          *v10 = 1065353216;
          v10[5] = 1065353216;
          v10[10] = 1065353216;
          v10[15] = 1065353216;
          *v8 = (uint32_t)(uintptr_t)(v10);
        }
        *(float *)&v9[a4] = (float)a5;
        return 1;
      }
      else
      {
        *(uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * (a3 + a4)) = a5;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterElement_float_id_f195e7  (binary VA: 0xe5b810)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterElement<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterElement_float_id_f195e7(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint8_t a4, int a5)
{
  uint32_t *ParameterDef;
  int result;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint16_t *v11;
  unsigned int v12;
  uint16_t *v13;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v7 = *((uint8_t *)ParameterDef + 9);
    if ( glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[v7] == 5
      && glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[v7] > a4
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v7 == 11 )
      {
        v8 = (uint32_t *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
        v9 = (uint32_t *)*v8;
        if ( *v8 == 0 )
        {
          v10 = sub_DFF370();
          v9 = v10;
          v11 = (uint16_t *)(v10);
          v12 = 64;
          if ( ((uint8_t)(uintptr_t)v10 & 1) != 0 )
          {
            *(uint8_t *)v10 = 0;
            v11 = (uint16_t *)((char *)v10 + 1);
            LOWORD(v12) = 63;
          }
          if ( ((uint8_t)(uintptr_t)v11 & 2) != 0 )
          {
            *v11 = 0;
            v12 -= 2;
            ++v11;
          }
          memset(v11, 0, 4 * (v12 >> 2));
          v13 = &v11[2 * (v12 >> 2)];
          if ( (v12 & 2) != 0 )
            *v13++ = 0;
          if ( (v12 & 1) != 0 )
            *(uint8_t *)v13 = 0;
          *v10 = 1065353216;
          v10[5] = 1065353216;
          v10[10] = 1065353216;
          v10[15] = 1065353216;
          *v8 = (uint32_t)(uintptr_t)(v10);
        }
        v9[a4] = a5;
        return 1;
      }
      else
      {
        *(uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * (a3 + a4)) = a5;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_int_id_1312f9  (binary VA: 0xe5b970)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_int_id_1312f9(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 1 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    *a4 = *(uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a3);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector2d_int_a96c77  (binary VA: 0xe5b9f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector2d_int_a96c77(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 2 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 8 * a3);
    *a4 = *v6;
    a4[1] = v6[1];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector3d_int_9639cc  (binary VA: 0xe5ba80)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector3d_int_9639cc(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 3 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 12 * a3);
    *a4 = *v6;
    a4[1] = v6[1];
    a4[2] = v6[2];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector4d_int_919deb  (binary VA: 0xe5bb10)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector4d_int_919deb(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 4 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a3);
    *a4 = *v6;
    a4[1] = v6[1];
    a4[2] = v6[2];
    a4[3] = v6[3];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_float_id_7a7507  (binary VA: 0xe5bba0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_float_id_7a7507(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 5 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    *a4 = *(uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a3);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector2d_float_5a50a3  (binary VA: 0xe5bc20)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector2d_float_5a50a3(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 6 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 8 * a3);
    *a4 = *v6;
    a4[1] = v6[1];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector3d_float_ee07cf  (binary VA: 0xe5bcb0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector3d_float_ee07cf(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 7 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 12 * a3);
    *a4 = *v6;
    a4[1] = v6[1];
    a4[2] = v6[2];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector4d_float_151dd6  (binary VA: 0xe5bd40)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector4d_float_151dd6(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 8 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a3);
    *a4 = *v6;
    a4[1] = v6[1];
    a4[2] = v6[2];
    a4[3] = v6[3];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_CMatrix2_float_e82e17  (binary VA: 0xe5bdd0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_CMatrix2_float_e82e17(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 9 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a3);
    *a4 = *v6;
    a4[1] = v6[1];
    a4[2] = v6[2];
    a4[3] = v6[3];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_CMatrix3_float_4a1266  (binary VA: 0xe5be60)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_CMatrix3_float_4a1266(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 10 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 36 * a3);
    *a4 = *v6;
    a4[1] = v6[1];
    a4[2] = v6[2];
    a4[3] = v6[3];
    a4[4] = v6[4];
    a4[5] = v6[5];
    a4[6] = v6[6];
    a4[7] = v6[7];
    a4[8] = v6[8];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_video_ITexture_d2b90c  (binary VA: 0xe5bf20)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_video_ITexture_d2b90c(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr
    && (unsigned int)*((uint8_t *)ParameterDef + 9) - 12 <= 4
    && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    *a4 = *(uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a3);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_video_SColor_13ebcf  (binary VA: 0xe5bfa0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_video_SColor_13ebcf(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 17 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    *a4 = *(uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a3);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_video_SColorf_ccc399  (binary VA: 0xe5c020)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_video_SColorf_ccc399(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 18 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 16 * a3);
    *a4 = *v6;
    a4[1] = v6[1];
    a4[2] = v6[2];
    a4[3] = v6[3];
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_int_id_29a806  (binary VA: 0xe5c0b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_int_id_29a806(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  uint32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 2) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = (uint32_t *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
      if ( v6 == 1 )
      {
        *a4 = *v7;
        return 1;
      }
      else
      {
        if ( v6 == 5 )
          *a4 = (int)*(float *)v7;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector2d_int_d23811  (binary VA: 0xe5c160)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector2d_int_d23811(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  uint32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 4) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v6 == 2 )
      {
        v7 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
        *a4 = *v7;
        a4[1] = v7[1];
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector3d_int_fe3636  (binary VA: 0xe5c200)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector3d_int_fe3636(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  uint32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 8) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v6 == 3 )
      {
        v7 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
        *a4 = *v7;
        a4[1] = v7[1];
        a4[2] = v7[2];
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector4d_int_6b3724  (binary VA: 0xe5c2b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector4d_int_6b3724(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  uint32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x10) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v6 == 4 )
      {
        v7 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
        *a4 = *v7;
        a4[1] = v7[1];
        a4[2] = v7[2];
        a4[3] = v7[3];
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_float_id_3558c8  (binary VA: 0xe5c360)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_float_id_3558c8(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, float *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x20) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = (int *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
      if ( v6 == 1 )
      {
        *a4 = (float)*v7;
        return 1;
      }
      else
      {
        if ( v6 == 5 )
          *(uint32_t *)a4 = *v7;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector2d_float_6937bb  (binary VA: 0xe5c410)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector2d_float_6937bb(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  uint32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x40) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v6 == 6 )
      {
        v7 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
        *a4 = *v7;
        a4[1] = v7[1];
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector3d_float_29deee  (binary VA: 0xe5c4b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector3d_float_29deee(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  uint32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( SLOBYTE(glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6]) < 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v6 == 7 )
      {
        v7 = (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
        *a4 = *v7;
        a4[1] = v7[1];
        a4[2] = v7[2];
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector4d_float_81b044  (binary VA: 0xe5c560)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector4d_float_81b044(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, float *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  float *v7;
  float v8; // xmm2_4
  int v9;
  float v10; // xmm4_4

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x100) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = (float *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
      if ( v6 == 17 )
      {
        v8 = (float)*((uint8_t *)v7 + 2);
        v9 = *((uint8_t *)v7 + 3);
        v10 = (float)*(uint8_t *)v7;
        a4[1] = (float)*((uint8_t *)v7 + 1) * 0.003921569f;
        a4[2] = v8 * 0.003921569f;
        a4[3] = (float)v9 * 0.003921569f;
        *a4 = v10 * 0.003921569f;
        return 1;
      }
      else if ( v6 == 18 || v6 == 8 )
      {
        *a4 = *v7;
        a4[1] = v7[1];
        a4[2] = v7[2];
        a4[3] = v7[3];
        return 1;
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_CMatrix2_float_d5ce21  (binary VA: 0xe5c670)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_CMatrix2_float_d5ce21(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int v7;
  int v8;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x200) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = *((uint32_t *)a1 + 11);
      v8 = ParameterDef[1];
      if ( v6 == 9 )
      {
        *a4 = *(uint32_t *)(v7 + v8);
        a4[1] = *(uint32_t *)(v7 + v8 + 4);
        a4[2] = *(uint32_t *)(v7 + v8 + 8);
        a4[3] = *(uint32_t *)(v7 + v8 + 12);
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_CMatrix3_float_f6afa1  (binary VA: 0xe5c720)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_CMatrix3_float_f6afa1(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int v7;
  int v8;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x400) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = *((uint32_t *)a1 + 11);
      v8 = ParameterDef[1];
      if ( v6 == 10 )
      {
        *a4 = *(uint32_t *)(v7 + v8);
        a4[1] = *(uint32_t *)(v7 + v8 + 4);
        a4[2] = *(uint32_t *)(v7 + v8 + 8);
        a4[3] = *(uint32_t *)(v7 + v8 + 12);
        a4[4] = *(uint32_t *)(v7 + v8 + 16);
        a4[5] = *(uint32_t *)(v7 + v8 + 20);
        a4[6] = *(uint32_t *)(v7 + v8 + 24);
        a4[7] = *(uint32_t *)(v7 + v8 + 28);
        a4[8] = *(uint32_t *)(v7 + v8 + 32);
      }
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_video_ITexture_b9ea82  (binary VA: 0xe5c7f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_video_ITexture_b9ea82(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  uint32_t *ParameterDef;
  int result;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr
    && (unsigned int)*((uint8_t *)ParameterDef + 9) - 12 <= 4
    && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    *a4 = *(uint32_t *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_video_SColor_444eab  (binary VA: 0xe5c870)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_video_SColor_444eab(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, int a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int v7;
  int v8;
  float v9; // xmm1_4
  float v10; // xmm0_4

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x20000) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = ParameterDef[1] + *((uint32_t *)a1 + 11);
      if ( v6 == 17 )
      {
        *(uint32_t *)a4 = *(uint32_t *)v7;
        return 1;
      }
      else if ( v6 == 18 || v6 == 8 )
      {
        v8 = (int)(float)(*(float *)(v7 + 4) * 255.0);
        v9 = *(float *)(v7 + 12) * 255.0;
        v10 = 255.0 * *(float *)v7;
        *(uint8_t *)(a4 + 2) = (int)(float)(*(float *)(v7 + 8) * 255.0);
        *(uint8_t *)a4 = (int)v10;
        *(uint8_t *)(a4 + 1) = v8;
        *(uint8_t *)(a4 + 3) = (int)v9;
        return 1;
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_video_SColorf_052537  (binary VA: 0xe5c960)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_video_SColorf_052537(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, float *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  float *v7;
  float v8; // xmm2_4
  int v9;
  float v10; // xmm4_4

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x40000) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = (float *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
      if ( v6 == 17 )
      {
        v8 = (float)*((uint8_t *)v7 + 2);
        v9 = *((uint8_t *)v7 + 3);
        v10 = (float)*(uint8_t *)v7;
        a4[1] = (float)*((uint8_t *)v7 + 1) * 0.003921569f;
        a4[2] = v8 * 0.003921569f;
        a4[3] = (float)v9 * 0.003921569f;
        *a4 = v10 * 0.003921569f;
        return 1;
      }
      else if ( v6 == 18 || v6 == 8 )
      {
        *a4 = *v7;
        a4[1] = v7[1];
        a4[2] = v7[2];
        a4[3] = v7[3];
        return 1;
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_int_id_1312f9  (binary VA: 0xe5ca70)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_int_id_1312f9(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 1 )
  {
    if ( a4 == 4 || a4 == 0 )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 4 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
    else
    {
      v7 = ParameterDef[1];
      v8 = *((uint16_t *)ParameterDef + 6);
      result = 1;
      if ( v8 != 0 )
      {
        v9 = (uint32_t *)(*((uint32_t *)a1 + 11) + v7);
        do
        {
          --v8;
          *v6 = *v9++;
          v6 = (uint32_t *)((char *)v6 + a4);
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector2d_int_a96c77  (binary VA: 0xe5cb30)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector2d_int_a96c77(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 2 )
  {
    if ( a4 == 8 || a4 == 0 )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 8 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
    else
    {
      v7 = ParameterDef[1];
      v8 = *((uint16_t *)ParameterDef + 6);
      result = 1;
      if ( v8 != 0 )
      {
        v9 = (uint32_t *)(*((uint32_t *)a1 + 11) + v7);
        do
        {
          --v8;
          *v6 = *v9;
          v6[1] = v9[1];
          v9 += 2;
          v6 = (uint32_t *)((char *)v6 + a4);
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector3d_int_9639cc  (binary VA: 0xe5cc00)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector3d_int_9639cc(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 3 )
  {
    if ( a4 == 12 || a4 == 0 )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 12 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
    else
    {
      v7 = ParameterDef[1];
      v8 = *((uint16_t *)ParameterDef + 6);
      result = 1;
      if ( v8 != 0 )
      {
        v9 = (uint32_t *)(*((uint32_t *)a1 + 11) + v7);
        do
        {
          --v8;
          *v6 = *v9;
          v6[1] = v9[1];
          v6[2] = v9[2];
          v9 += 3;
          v6 = (uint32_t *)((char *)v6 + a4);
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector4d_int_919deb  (binary VA: 0xe5ccd0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector4d_int_919deb(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 4 )
  {
    if ( a4 == 16 || a4 == 0 )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 16 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
    else
    {
      v7 = ParameterDef[1];
      v8 = *((uint16_t *)ParameterDef + 6);
      result = 1;
      if ( v8 != 0 )
      {
        v9 = (uint32_t *)(*((uint32_t *)a1 + 11) + v7);
        do
        {
          --v8;
          *v6 = *v9;
          v6[1] = v9[1];
          v6[2] = v9[2];
          v6[3] = v9[3];
          v9 += 4;
          v6 = (uint32_t *)((char *)v6 + a4);
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_float_id_7a7507  (binary VA: 0xe5cda0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_float_id_7a7507(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 5 )
  {
    if ( a4 == 4 || a4 == 0 )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 4 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
    else
    {
      v7 = ParameterDef[1];
      v8 = *((uint16_t *)ParameterDef + 6);
      result = 1;
      if ( v8 != 0 )
      {
        v9 = (uint32_t *)(*((uint32_t *)a1 + 11) + v7);
        do
        {
          --v8;
          *v6 = *v9++;
          v6 = (uint32_t *)((char *)v6 + a4);
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector2d_float_5a50a3  (binary VA: 0xe5ce60)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector2d_float_5a50a3(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 6 )
  {
    if ( a4 == 8 || a4 == 0 )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 8 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
    else
    {
      v7 = ParameterDef[1];
      v8 = *((uint16_t *)ParameterDef + 6);
      result = 1;
      if ( v8 != 0 )
      {
        v9 = (uint32_t *)(*((uint32_t *)a1 + 11) + v7);
        do
        {
          --v8;
          *v6 = *v9;
          v6[1] = v9[1];
          v9 += 2;
          v6 = (uint32_t *)((char *)v6 + a4);
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector3d_float_ee07cf  (binary VA: 0xe5cf30)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector3d_float_ee07cf(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 7 )
  {
    if ( a4 == 12 || a4 == 0 )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 12 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
    else
    {
      v7 = ParameterDef[1];
      v8 = *((uint16_t *)ParameterDef + 6);
      result = 1;
      if ( v8 != 0 )
      {
        v9 = (uint32_t *)(*((uint32_t *)a1 + 11) + v7);
        do
        {
          --v8;
          *v6 = *v9;
          v6[1] = v9[1];
          v6[2] = v9[2];
          v9 += 3;
          v6 = (uint32_t *)((char *)v6 + a4);
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector4d_float_151dd6  (binary VA: 0xe5d000)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_vector4d_float_151dd6(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 8 )
  {
    if ( a4 == 16 || a4 == 0 )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 16 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
    else
    {
      v7 = ParameterDef[1];
      v8 = *((uint16_t *)ParameterDef + 6);
      result = 1;
      if ( v8 != 0 )
      {
        v9 = (uint32_t *)(*((uint32_t *)a1 + 11) + v7);
        do
        {
          --v8;
          *v6 = *v9;
          v6[1] = v9[1];
          v6[2] = v9[2];
          v6[3] = v9[3];
          v9 += 4;
          v6 = (uint32_t *)((char *)v6 + a4);
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_CMatrix2_float_e82e17  (binary VA: 0xe5d0d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_CMatrix2_float_e82e17(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 9 )
  {
    if ( a4 == 16 || a4 == 0 )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 16 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
    else
    {
      v7 = ParameterDef[1];
      v8 = *((uint16_t *)ParameterDef + 6);
      result = 1;
      if ( v8 != 0 )
      {
        v9 = (uint32_t *)(*((uint32_t *)a1 + 11) + v7);
        do
        {
          --v8;
          *v6 = *v9;
          v6[1] = v9[1];
          v6[2] = v9[2];
          v6[3] = v9[3];
          v9 += 4;
          v6 = (uint32_t *)((char *)v6 + a4);
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_CMatrix3_float_4a1266  (binary VA: 0xe5d1a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_CMatrix3_float_4a1266(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 10 )
  {
    if ( a4 == 36 || a4 == 0 )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 36 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
    else
    {
      v7 = ParameterDef[1];
      v8 = *((uint16_t *)ParameterDef + 6);
      result = 1;
      if ( v8 != 0 )
      {
        v9 = (uint32_t *)(*((uint32_t *)a1 + 11) + v7);
        do
        {
          --v8;
          *v6 = *v9;
          v6[1] = v9[1];
          v6[2] = v9[2];
          v6[3] = v9[3];
          v6[4] = v9[4];
          v6[5] = v9[5];
          v6[6] = v9[6];
          v6[7] = v9[7];
          v6[8] = v9[8];
          v9 += 9;
          v6 = (uint32_t *)((char *)v6 + a4);
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_video_ITexture_d2b90c  (binary VA: 0xe5d290)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_video_ITexture_d2b90c(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *a3, int a4)
{
  uint32_t *ParameterDef;
  int result;
  int *v7;
  int *v8;
  int v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && (unsigned int)*((uint8_t *)ParameterDef + 9) - 12 <= 4 )
  {
    v7 = (int *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
    v8 = &v7[*((uint16_t *)ParameterDef + 6)];
    result = 1;
    if ( v7 != v8 )
    {
      do
      {
        v9 = *v7++;
        *a3 = v9;
        a3 = (uint32_t *)((char *)a3 + a4);
      }
      while ( v8 != v7 );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_video_SColor_13ebcf  (binary VA: 0xe5d320)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_video_SColor_13ebcf(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 17 )
  {
    if ( a4 == 4 || a4 == 0 )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 4 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
    else
    {
      v7 = ParameterDef[1];
      v8 = *((uint16_t *)ParameterDef + 6);
      result = 1;
      if ( v8 != 0 )
      {
        v9 = (uint32_t *)(*((uint32_t *)a1 + 11) + v7);
        do
        {
          --v8;
          *v6 = *v9++;
          v6 = (uint32_t *)((char *)v6 + a4);
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_video_SColorf_ccc399  (binary VA: 0xe5d3e0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_video_SColorf_ccc399(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 18 )
  {
    if ( a4 == 16 || a4 == 0 )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 16 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
    else
    {
      v7 = ParameterDef[1];
      v8 = *((uint16_t *)ParameterDef + 6);
      result = 1;
      if ( v8 != 0 )
      {
        v9 = (uint32_t *)(*((uint32_t *)a1 + 11) + v7);
        do
        {
          --v8;
          *v6 = *v9;
          v6[1] = v9[1];
          v6[2] = v9[2];
          v6[3] = v9[3];
          v9 += 4;
          v6 = (uint32_t *)((char *)v6 + a4);
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_int_id_29a806  (binary VA: 0xe5d4b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_int_id_29a806(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr )
  {
    v10 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v10] & 2) != 0 )
    {
      if ( a4 != 4 && a4 != 0 )
        goto LABEL_5;
      if ( v10 == 1 )
      {
        memcpy(
          dest,
          (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)),
          4 * *((uint16_t *)ParameterDef + 6));
        return 1;
      }
      result = 1;
      if ( a4 != 0 )
      {
LABEL_5:
        v7 = ParameterDef[1];
        if ( v10 != 1 )
          return 1;
        v8 = *((uint16_t *)ParameterDef + 6);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(v7 + *((uint32_t *)a1 + 11));
          do
          {
            --v8;
            *v6 = *v9++;
            v6 = (uint32_t *)((char *)v6 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector2d_int_d23811  (binary VA: 0xe5d5c0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector2d_int_d23811(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr )
  {
    v10 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v10] & 4) != 0 )
    {
      if ( a4 != 8 && a4 != 0 )
        goto LABEL_5;
      if ( v10 == 2 )
      {
        memcpy(
          dest,
          (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)),
          8 * *((uint16_t *)ParameterDef + 6));
        return 1;
      }
      result = 1;
      if ( a4 != 0 )
      {
LABEL_5:
        v7 = ParameterDef[1];
        if ( v10 != 2 )
          return 1;
        v8 = *((uint16_t *)ParameterDef + 6);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(v7 + *((uint32_t *)a1 + 11));
          do
          {
            --v8;
            *v6 = *v9;
            v6[1] = v9[1];
            v9 += 2;
            v6 = (uint32_t *)((char *)v6 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector3d_int_fe3636  (binary VA: 0xe5d6d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector3d_int_fe3636(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr )
  {
    v10 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v10] & 8) != 0 )
    {
      if ( a4 != 12 && a4 != 0 )
        goto LABEL_5;
      if ( v10 == 3 )
      {
        memcpy(
          dest,
          (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)),
          12 * *((uint16_t *)ParameterDef + 6));
        return 1;
      }
      result = 1;
      if ( a4 != 0 )
      {
LABEL_5:
        v7 = ParameterDef[1];
        if ( v10 != 3 )
          return 1;
        v8 = *((uint16_t *)ParameterDef + 6);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(v7 + *((uint32_t *)a1 + 11));
          do
          {
            --v8;
            *v6 = *v9;
            v6[1] = v9[1];
            v6[2] = v9[2];
            v9 += 3;
            v6 = (uint32_t *)((char *)v6 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector4d_int_6b3724  (binary VA: 0xe5d7e0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector4d_int_6b3724(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr )
  {
    v10 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v10] & 0x10) != 0 )
    {
      if ( a4 != 16 && a4 != 0 )
        goto LABEL_5;
      if ( v10 == 4 )
      {
        memcpy(
          dest,
          (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)),
          16 * *((uint16_t *)ParameterDef + 6));
        return 1;
      }
      result = 1;
      if ( a4 != 0 )
      {
LABEL_5:
        v7 = ParameterDef[1];
        if ( v10 != 4 )
          return 1;
        v8 = *((uint16_t *)ParameterDef + 6);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(v7 + *((uint32_t *)a1 + 11));
          do
          {
            --v8;
            *v6 = *v9;
            v6[1] = v9[1];
            v6[2] = v9[2];
            v6[3] = v9[3];
            v9 += 4;
            v6 = (uint32_t *)((char *)v6 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_float_id_3558c8  (binary VA: 0xe5d900)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_float_id_3558c8(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, float *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  float *v6;
  int *v7;
  int v8;
  int v9;
  float v10; // xmm0_4
  int v11;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr )
  {
    v11 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v11] & 0x20) != 0 )
    {
      if ( a4 != 4 && a4 != 0 )
        goto LABEL_5;
      if ( v11 == 5 )
      {
        memcpy(
          dest,
          (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)),
          4 * *((uint16_t *)ParameterDef + 6));
        return 1;
      }
      result = 1;
      if ( a4 != 0 )
      {
LABEL_5:
        v7 = (int *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
        if ( v11 == 1 )
        {
          v9 = *((uint16_t *)ParameterDef + 6);
          result = 1;
          if ( v9 != 0 )
          {
            do
            {
              v10 = (float)*v7;
              --v9;
              ++v7;
              *v6 = v10;
              v6 = (float *)((char *)v6 + a4);
            }
            while ( v9 != 0 );
            return 1;
          }
        }
        else
        {
          if ( v11 != 5 )
            return 1;
          v8 = *((uint16_t *)ParameterDef + 6);
          result = 1;
          if ( v8 != 0 )
          {
            do
            {
              --v8;
              *(uint32_t *)v6 = *v7++;
              v6 = (float *)((char *)v6 + a4);
            }
            while ( v8 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector2d_float_6937bb  (binary VA: 0xe5da40)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector2d_float_6937bb(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr )
  {
    v10 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v10] & 0x40) != 0 )
    {
      if ( a4 != 8 && a4 != 0 )
        goto LABEL_5;
      if ( v10 == 6 )
      {
        memcpy(
          dest,
          (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)),
          8 * *((uint16_t *)ParameterDef + 6));
        return 1;
      }
      result = 1;
      if ( a4 != 0 )
      {
LABEL_5:
        v7 = ParameterDef[1];
        if ( v10 != 6 )
          return 1;
        v8 = *((uint16_t *)ParameterDef + 6);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(v7 + *((uint32_t *)a1 + 11));
          do
          {
            --v8;
            *v6 = *v9;
            v6[1] = v9[1];
            v9 += 2;
            v6 = (uint32_t *)((char *)v6 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector3d_float_29deee  (binary VA: 0xe5db50)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector3d_float_29deee(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr )
  {
    v10 = *((uint8_t *)ParameterDef + 9);
    if ( SLOBYTE(glitch::video::detail::SShaderParameterTypeInspection::Convertions[v10]) < 0 )
    {
      if ( a4 != 12 && a4 != 0 )
        goto LABEL_5;
      if ( v10 == 7 )
      {
        memcpy(
          dest,
          (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)),
          12 * *((uint16_t *)ParameterDef + 6));
        return 1;
      }
      result = 1;
      if ( a4 != 0 )
      {
LABEL_5:
        v7 = ParameterDef[1];
        if ( v10 != 7 )
          return 1;
        v8 = *((uint16_t *)ParameterDef + 6);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(v7 + *((uint32_t *)a1 + 11));
          do
          {
            --v8;
            *v6 = *v9;
            v6[1] = v9[1];
            v6[2] = v9[2];
            v9 += 3;
            v6 = (uint32_t *)((char *)v6 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_CMatrix2_float_d5ce21  (binary VA: 0xe5dc60)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_CMatrix2_float_d5ce21(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr )
  {
    v10 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v10] & 0x200) != 0 )
    {
      if ( a4 != 16 && a4 != 0 )
        goto LABEL_5;
      if ( v10 == 9 )
      {
        memcpy(
          dest,
          (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)),
          16 * *((uint16_t *)ParameterDef + 6));
        return 1;
      }
      result = 1;
      if ( a4 != 0 )
      {
LABEL_5:
        v7 = ParameterDef[1];
        if ( v10 != 9 )
          return 1;
        v8 = *((uint16_t *)ParameterDef + 6);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(v7 + *((uint32_t *)a1 + 11));
          do
          {
            --v8;
            *v6 = *v9;
            v6[1] = v9[1];
            v6[2] = v9[2];
            v6[3] = v9[3];
            v9 += 4;
            v6 = (uint32_t *)((char *)v6 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_video_ITexture_b9ea82  (binary VA: 0xe5dd80)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_video_ITexture_b9ea82(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, void *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && (unsigned int)*((uint8_t *)ParameterDef + 9) - 12 <= 4 )
  {
    if ( a4 == 4 || (result = 1, a4 == 0) )
    {
      memcpy(dest, (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)), 4 * *((uint16_t *)ParameterDef + 6));
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_int_id_16b412  (binary VA: 0xe5ed70)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_int_id_16b412(uint32_t *a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 1 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = *a4;
      v8 = (uint32_t *)((char *)&a1[a3 + 12] + *(uint32_t *)(v6 + 4));
      if ( *v8 != *a4 )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
        v7 = *a4;
      }
      *v8 = v7;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector2d_int_151610  (binary VA: 0xe5ee10)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector2d_int_151610(uint32_t *a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 2 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = *(uint32_t *)(v6 + 4) + 8 * a3;
      v8 = (int *)((uint32_t *)((char *)a1 + v7 + 48));
      v9 = *v8;
      if ( *v8 != *a4 || *(uint32_t *)((char *)a1 + v7 + 52) != a4[1] )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
        v9 = *a4;
      }
      *v8 = v9;
      *(uint32_t *)((char *)a1 + v7 + 52) = a4[1];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector3d_int_e3d2fa  (binary VA: 0xe5eed0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector3d_int_e3d2fa(uint32_t *a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int *v7;
  int v8;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 3 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = (int *)((uint32_t *)((char *)&a1[3 * a3 + 12] + *(uint32_t *)(v6 + 4)));
      v8 = *v7;
      if ( *v7 != *a4
        || *(uint32_t *)((char *)&a1[3 * a3 + 13] + *(uint32_t *)(v6 + 4)) != a4[1]
        || *(uint32_t *)((char *)&a1[3 * a3 + 14] + *(uint32_t *)(v6 + 4)) != a4[2] )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
        v8 = *a4;
      }
      *v7 = v8;
      v7[1] = a4[1];
      v7[2] = a4[2];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector4d_int_38cb11  (binary VA: 0xe5efa0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector4d_int_38cb11(uint32_t *a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 4 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = *(uint32_t *)(v6 + 4) + 16 * a3;
      v8 = (int *)((uint32_t *)((char *)a1 + v7 + 48));
      v9 = *v8;
      if ( *v8 != *a4
        || *(uint32_t *)((char *)a1 + v7 + 52) != a4[1]
        || *(uint32_t *)((char *)a1 + v7 + 56) != a4[2]
        || *(uint32_t *)((char *)a1 + v7 + 60) != a4[3] )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
        v9 = *a4;
      }
      *v8 = v9;
      *(uint32_t *)((char *)a1 + v7 + 52) = a4[1];
      *(uint32_t *)((char *)a1 + v7 + 56) = a4[2];
      *(uint32_t *)((char *)a1 + v7 + 60) = a4[3];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_float_id_ca1afb  (binary VA: 0xe5f070)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_float_id_ca1afb(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  float v7; // xmm0_4
  float *v8;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 5 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = *a4;
      v8 = (float *)((char *)&a1[a3 + 12] + *(uint32_t *)(v6 + 4));
      if ( *a4 != *v8 )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
        v7 = *a4;
      }
      *v8 = v7;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector2d_float_3d6e87  (binary VA: 0xe5f120)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector2d_float_3d6e87(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float *v8;
  float v9; // xmm0_4

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 6 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = *(uint32_t *)(v6 + 4) + 8 * a3;
      v8 = (float *)((char *)a1 + v7 + 48);
      v9 = *v8;
      if ( *v8 != *a4 || *(float *)((char *)a1 + v7 + 52) != a4[1] )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
        v9 = *a4;
      }
      *v8 = v9;
      *(uint32_t *)((char *)a1 + v7 + 52) = *((uint32_t *)a4 + 1);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector3d_float_99bb32  (binary VA: 0xe5f1e0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector3d_float_99bb32(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float *v8;
  float v9; // xmm0_4

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 7 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = *(uint32_t *)(v6 + 4);
      v8 = (float *)((char *)&a1[3 * a3 + 12] + v7);
      v9 = *v8;
      if ( *v8 != *a4
        || *(float *)((char *)&a1[3 * a3 + 13] + v7) != a4[1]
        || *(float *)((char *)&a1[3 * a3 + 14] + v7) != a4[2] )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
        v9 = *a4;
      }
      *v8 = v9;
      *(uint32_t *)((char *)&a1[3 * a3 + 13] + v7) = *((uint32_t *)a4 + 1);
      *(uint32_t *)((char *)&a1[3 * a3 + 14] + v7) = *((uint32_t *)a4 + 2);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector4d_float_a8602d  (binary VA: 0xe5f2b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector4d_float_a8602d(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float *v8;
  float v9; // xmm0_4

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 8 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = *(uint32_t *)(v6 + 4) + 16 * a3;
      v8 = (float *)((char *)a1 + v7 + 48);
      v9 = *v8;
      if ( *v8 != *a4
        || *(float *)((char *)a1 + v7 + 52) != a4[1]
        || *(float *)((char *)a1 + v7 + 56) != a4[2]
        || *(float *)((char *)a1 + v7 + 60) != a4[3] )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
        v9 = *a4;
      }
      *v8 = v9;
      *(uint32_t *)((char *)a1 + v7 + 52) = *((uint32_t *)a4 + 1);
      *(uint32_t *)((char *)a1 + v7 + 56) = *((uint32_t *)a4 + 2);
      *(uint32_t *)((char *)a1 + v7 + 60) = *((uint32_t *)a4 + 3);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_CMatrix2_float_52f061  (binary VA: 0xe5f390)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_CMatrix2_float_52f061(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float *v8;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 9 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = *(uint32_t *)(v6 + 4) + 16 * a3;
      v8 = (float *)((char *)a1 + v7 + 48);
      if ( *v8 != *a4
        || *(float *)((char *)a1 + v7 + 52) != a4[1]
        || *(float *)((char *)a1 + v7 + 56) != a4[2]
        || *(float *)((char *)a1 + v7 + 60) != a4[3] )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
      }
      *v8 = *a4;
      *(uint32_t *)((char *)a1 + v7 + 52) = *((uint32_t *)a4 + 1);
      *(uint32_t *)((char *)a1 + v7 + 56) = *((uint32_t *)a4 + 2);
      *(uint32_t *)((char *)a1 + v7 + 60) = *((uint32_t *)a4 + 3);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_CMatrix3_float_049364  (binary VA: 0xe5f470)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_CMatrix3_float_049364(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 10 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = (int)(uintptr_t)(&a1[9 * a3 + 12]) + *(uint32_t *)(v6 + 4);
      if ( *(float *)v7 != *a4
        || *(float *)((char *)&a1[9 * a3 + 13] + *(uint32_t *)(v6 + 4)) != a4[1]
        || *(float *)((char *)&a1[9 * a3 + 14] + *(uint32_t *)(v6 + 4)) != a4[2]
        || *(float *)((char *)&a1[9 * a3 + 15] + *(uint32_t *)(v6 + 4)) != a4[3]
        || *(float *)((char *)&a1[9 * a3 + 16] + *(uint32_t *)(v6 + 4)) != a4[4]
        || *(float *)((char *)&a1[9 * a3 + 17] + *(uint32_t *)(v6 + 4)) != a4[5]
        || *(float *)((char *)&a1[9 * a3 + 18] + *(uint32_t *)(v6 + 4)) != a4[6]
        || *(float *)((char *)&a1[9 * a3 + 19] + *(uint32_t *)(v6 + 4)) != a4[7]
        || *(float *)((char *)&a1[9 * a3 + 20] + *(uint32_t *)(v6 + 4)) != a4[8] )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
      }
      *(float *)v7 = *a4;
      *(float *)(v7 + 4) = a4[1];
      *(float *)(v7 + 8) = a4[2];
      *(float *)(v7 + 12) = a4[3];
      *(float *)(v7 + 16) = a4[4];
      *(float *)(v7 + 20) = a4[5];
      *(float *)(v7 + 24) = a4[6];
      *(float *)(v7 + 28) = a4[7];
      *(float *)(v7 + 32) = a4[8];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_video_SColor_a8fdc3  (binary VA: 0xe5f5c0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_video_SColor_a8fdc3(uint32_t *a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 17 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = (uint32_t *)((char *)&a1[a3 + 12] + *(uint32_t *)(v6 + 4));
      if ( *v7 != *a4 )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
      }
      *v7 = *a4;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_video_SColorf_c9d5a3  (binary VA: 0xe5f660)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_video_SColorf_c9d5a3(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float *v8;
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 18 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = *(uint32_t *)(v6 + 4) + 16 * a3;
      v8 = (float *)((char *)a1 + v7 + 48);
      if ( (float)(*v8 + 0.000001f) < *a4
        || *a4 < (float)(*v8 - 0.000001f)
        || (v9 = a4[1], (float)(*(float *)((char *)a1 + v7 + 52) + 0.000001f) < v9)
        || v9 < (float)(*(float *)((char *)a1 + v7 + 52) - 0.000001f)
        || (v10 = a4[2], (float)(*(float *)((char *)a1 + v7 + 56) + 0.000001f) < v10)
        || v10 < (float)(*(float *)((char *)a1 + v7 + 56) - 0.000001f)
        || (v11 = a4[3], (float)(*(float *)((char *)a1 + v7 + 60) + 0.000001f) < v11)
        || v11 < (float)(*(float *)((char *)a1 + v7 + 60) - 0.000001f) )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
      }
      *v8 = *a4;
      *(uint32_t *)((char *)a1 + v7 + 52) = *((uint32_t *)a4 + 1);
      *(uint32_t *)((char *)a1 + v7 + 56) = *((uint32_t *)a4 + 2);
      *(uint32_t *)((char *)a1 + v7 + 60) = *((uint32_t *)a4 + 3);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_int_id_6e67d0  (binary VA: 0xe5f7a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_int_id_6e67d0(uint32_t *a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  float v10; // xmm0_4

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 2) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = (int *)((uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 48));
        if ( v7 == 1 )
        {
          v9 = *a4;
          if ( *v8 != *a4 )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
            v9 = *a4;
          }
          *v8 = v9;
          return 1;
        }
        else if ( v7 == 5 )
        {
          v10 = (float)*a4;
          if ( v10 != *(float *)v8 )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
          }
          *(float *)v8 = v10;
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector2d_int_fce8c2  (binary VA: 0xe5f890)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector2d_int_fce8c2(uint32_t *a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 4) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 2 )
        {
          v8 = (int *)((uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 48));
          v9 = *v8;
          if ( *v8 != *a4 || *(uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 52) != a4[1] )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
            v9 = *a4;
          }
          *v8 = v9;
          v8[1] = a4[1];
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_int_a7c5aa  (binary VA: 0xe5f960)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_int_a7c5aa(uint32_t *a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 8) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 3 )
        {
          v8 = (int *)((uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 48));
          v9 = *v8;
          if ( *v8 != *a4
            || *(uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 52) != a4[1]
            || *(uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 56) != a4[2] )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
            v9 = *a4;
          }
          *v8 = v9;
          v8[1] = a4[1];
          v8[2] = a4[2];
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_int_54da2c  (binary VA: 0xe5fa40)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_int_54da2c(uint32_t *a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x10) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 4 )
        {
          v8 = (int *)((uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 48));
          v9 = *v8;
          if ( *v8 != *a4
            || *(uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 52) != a4[1]
            || *(uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 56) != a4[2]
            || *(uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 60) != a4[3] )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
            v9 = *a4;
          }
          *v8 = v9;
          v8[1] = a4[1];
          v8[2] = a4[2];
          v8[3] = a4[3];
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_float_id_d97248  (binary VA: 0xe5fb30)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_float_id_d97248(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int *v8;
  int v9;
  float v10; // xmm0_4

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x20) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = (int *)((uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 48));
        if ( v7 == 1 )
        {
          v9 = (int)*a4;
          if ( v9 != *v8 )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
          }
          *v8 = v9;
          return 1;
        }
        else if ( v7 == 5 )
        {
          v10 = *a4;
          if ( *a4 != *(float *)v8 )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
            v10 = *a4;
          }
          *(float *)v8 = v10;
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector2d_float_9e9c08  (binary VA: 0xe5fc30)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector2d_float_9e9c08(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float *v8;
  float v9; // xmm0_4

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x40) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 6 )
        {
          v8 = (float *)((char *)a1 + *(uint32_t *)(v6 + 4) + 48);
          v9 = *v8;
          if ( *v8 != *a4 || *(float *)((char *)a1 + *(uint32_t *)(v6 + 4) + 52) != a4[1] )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
            v9 = *a4;
          }
          *v8 = v9;
          v8[1] = a4[1];
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_float_de67e0  (binary VA: 0xe5fd10)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_float_de67e0(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float *v8;
  float v9; // xmm0_4

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( SLOBYTE(glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7]) < 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 7 )
        {
          v8 = (float *)((char *)a1 + *(uint32_t *)(v6 + 4) + 48);
          v9 = *v8;
          if ( *v8 != *a4
            || *(float *)((char *)a1 + *(uint32_t *)(v6 + 4) + 52) != a4[1]
            || *(float *)((char *)a1 + *(uint32_t *)(v6 + 4) + 56) != a4[2] )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
            v9 = *a4;
          }
          *v8 = v9;
          v8[1] = a4[1];
          v8[2] = a4[2];
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f  (binary VA: 0xe5fe00)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint16_t v9;
  int v10;
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4

  v4 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x100) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = (int)(uintptr_t)(a1) + *(uint32_t *)(v6 + 4) + 48;
        switch ( v7 )
        {
          case 8:
            v11 = *(float *)v8;
            if ( *(float *)v8 != *a4
              || *(float *)(v8 + 4) != a4[1]
              || *(float *)(v8 + 8) != a4[2]
              || *(float *)(v8 + 12) != a4[3] )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
              v11 = *a4;
            }
            *(float *)v8 = v11;
            *(float *)(v8 + 4) = a4[1];
            *(float *)(v8 + 8) = a4[2];
            *(float *)(v8 + 12) = a4[3];
            return 1;
          case 17:
            LOBYTE(v9) = (int)(float)(255.0 * *a4);
            HIBYTE(v9) = (int)(float)(a4[1] * 255.0);
            v10 = ((int)(float)(a4[3] * 255.0) << 24) | ((uint8_t)(int)(float)(a4[2] * 255.0) << 16) | v9;
            if ( *(uint32_t *)v8 != v10 )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
            }
            *(uint32_t *)v8 = v10;
            return 1;
          case 18:
            if ( (float)(*(float *)v8 + 0.000001f) < *a4
              || *a4 < (float)(*(float *)v8 - 0.000001f)
              || (v12 = a4[1], (float)(*(float *)(v8 + 4) + 0.000001f) < v12)
              || v12 < (float)(*(float *)(v8 + 4) - 0.000001f)
              || (v13 = a4[2], (float)(*(float *)(v8 + 8) + 0.000001f) < v13)
              || v13 < (float)(*(float *)(v8 + 8) - 0.000001f)
              || (v14 = a4[3], (float)(*(float *)(v8 + 12) + 0.000001f) < v14)
              || v14 < (float)(*(float *)(v8 + 12) - 0.000001f) )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
            }
            *(float *)v8 = *a4;
            *(float *)(v8 + 4) = a4[1];
            *(float *)(v8 + 8) = a4[2];
            *(float *)(v8 + 12) = a4[3];
            return 1;
          default:
            return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_CMatrix2_float_d247ae  (binary VA: 0xe60080)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_CMatrix2_float_d247ae(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float *v8;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x200) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = (float *)((char *)a1 + *(uint32_t *)(v6 + 4) + 48);
        if ( v7 == 9 )
        {
          if ( *v8 != *a4 || v8[1] != a4[1] || v8[2] != a4[2] || v8[3] != a4[3] )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
          }
          *v8 = *a4;
          v8[1] = a4[1];
          v8[2] = a4[2];
          v8[3] = a4[3];
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_CMatrix3_float_eabcdd  (binary VA: 0xe60170)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_CMatrix3_float_eabcdd(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float *v8;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x400) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = (float *)((char *)a1 + *(uint32_t *)(v6 + 4) + 48);
        if ( v7 == 10 )
        {
          if ( *v8 != *a4
            || v8[1] != a4[1]
            || v8[2] != a4[2]
            || v8[3] != a4[3]
            || v8[4] != a4[4]
            || v8[5] != a4[5]
            || v8[6] != a4[6]
            || v8[7] != a4[7]
            || v8[8] != a4[8] )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
          }
          *v8 = *a4;
          v8[1] = a4[1];
          v8[2] = a4[2];
          v8[3] = a4[3];
          v8[4] = a4[4];
          v8[5] = a4[5];
          v8[6] = a4[6];
          v8[7] = a4[7];
          v8[8] = a4[8];
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9  (binary VA: 0xe602d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(uint32_t *a1, uint16_t a2, unsigned int a3, uint8_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float *v8;
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm4_4

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x20000) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = (float *)((char *)a1 + *(uint32_t *)(v6 + 4) + 48);
        if ( v7 != 17 )
        {
          if ( v7 == 18 )
          {
            v9 = (float)*a4 * 0.003921569f;
            v10 = (float)a4[1] * 0.003921569f;
            v11 = (float)a4[2] * 0.003921569f;
            v12 = (float)a4[3] * 0.003921569f;
            if ( (float)(*v8 + 0.000001f) >= v9
              && v9 >= (float)(*v8 - 0.000001f)
              && (float)(v8[1] + 0.000001f) >= v10
              && v10 >= (float)(v8[1] - 0.000001f)
              && (float)(v8[2] + 0.000001f) >= v11
              && v11 >= (float)(v8[2] - 0.000001f)
              && (float)(v8[3] + 0.000001f) >= v12
              && v12 >= (float)(v8[3] - 0.000001f) )
            {
              goto LABEL_16;
            }
          }
          else
          {
            if ( v7 != 8 )
              return 1;
            v9 = (float)*a4 * 0.003921569f;
            v10 = (float)a4[1] * 0.003921569f;
            v11 = (float)a4[2] * 0.003921569f;
            v12 = (float)a4[3] * 0.003921569f;
            if ( v9 == *v8 && v10 == v8[1] && v11 == v8[2] && v12 == v8[3] )
            {
LABEL_16:
              *v8 = v9;
              v8[1] = v10;
              v8[2] = v11;
              v8[3] = v12;
              return 1;
            }
          }
          a1[5] = -1;
          a1[6] = 15;
          a1[3] = -1;
          a1[4] = 15;
          goto LABEL_16;
        }
        if ( *(uint32_t *)v8 != *(uint32_t *)a4 )
        {
          a1[5] = -1;
          a1[6] = 15;
          a1[3] = -1;
          a1[4] = 15;
        }
        *v8 = *(float *)a4;
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColorf_ea6ba4  (binary VA: 0xe60510)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColorf_ea6ba4(uint32_t *a1, uint16_t a2, unsigned int a3, float *a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint16_t v9;
  int v10;
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4

  v4 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x40000) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = (int)(uintptr_t)(a1) + *(uint32_t *)(v6 + 4) + 48;
        switch ( v7 )
        {
          case 8:
            v11 = *(float *)v8;
            if ( *(float *)v8 != *a4
              || *(float *)(v8 + 4) != a4[1]
              || *(float *)(v8 + 8) != a4[2]
              || *(float *)(v8 + 12) != a4[3] )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
              v11 = *a4;
            }
            *(float *)v8 = v11;
            *(float *)(v8 + 4) = a4[1];
            *(float *)(v8 + 8) = a4[2];
            *(float *)(v8 + 12) = a4[3];
            return 1;
          case 17:
            LOBYTE(v9) = (int)(float)(255.0 * *a4);
            HIBYTE(v9) = (int)(float)(a4[1] * 255.0);
            v10 = ((int)(float)(a4[3] * 255.0) << 24) | ((uint8_t)(int)(float)(a4[2] * 255.0) << 16) | v9;
            if ( *(uint32_t *)v8 != v10 )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
            }
            *(uint32_t *)v8 = v10;
            return 1;
          case 18:
            if ( (float)(*(float *)v8 + 0.000001f) < *a4
              || *a4 < (float)(*(float *)v8 - 0.000001f)
              || (v12 = a4[1], (float)(*(float *)(v8 + 4) + 0.000001f) < v12)
              || v12 < (float)(*(float *)(v8 + 4) - 0.000001f)
              || (v13 = a4[2], (float)(*(float *)(v8 + 8) + 0.000001f) < v13)
              || v13 < (float)(*(float *)(v8 + 8) - 0.000001f)
              || (v14 = a4[3], (float)(*(float *)(v8 + 12) + 0.000001f) < v14)
              || v14 < (float)(*(float *)(v8 + 12) - 0.000001f) )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
            }
            *(float *)v8 = *a4;
            *(float *)(v8 + 4) = a4[1];
            *(float *)(v8 + 8) = a4[2];
            *(float *)(v8 + 12) = a4[3];
            return 1;
          default:
            return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_int_id_16b412  (binary VA: 0xe60790)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_int_id_16b412(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int v6;
  int result;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  v6 = a5;
  v12 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v12 + 14) )
  {
    v8 = *(uint32_t *)(v12 + 32) + 16 * a2;
    if ( v8 != 0 && *(uint8_t *)(v8 + 9) == 1 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 == 4 || a6 == 0 )
      {
        memcpy((char *)&a1[a4 + 12] + *(uint32_t *)(v8 + 4), src, 4 * a5);
        return 1;
      }
      else
      {
        v9 = *(uint32_t *)(v8 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)((char *)&a1[a4 + 12] + v9);
          v11 = (uint32_t *)(src);
          do
          {
            --v6;
            *v10 = *v11;
            v11 = (uint32_t *)((char *)v11 + a6);
            ++v10;
          }
          while ( v6 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector2d_int_151610  (binary VA: 0xe60890)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector2d_int_151610(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int v6;
  int result;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  v6 = a5;
  v12 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v12 + 14) )
  {
    v8 = *(uint32_t *)(v12 + 32) + 16 * a2;
    if ( v8 != 0 && *(uint8_t *)(v8 + 9) == 2 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 == 8 || a6 == 0 )
      {
        memcpy((char *)&a1[2 * a4 + 12] + *(uint32_t *)(v8 + 4), src, 8 * a5);
        return 1;
      }
      else
      {
        v9 = *(uint32_t *)(v8 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)((char *)&a1[2 * a4 + 12] + v9);
          v11 = (uint32_t *)(src);
          do
          {
            --v6;
            *v10 = *v11;
            v10[1] = v11[1];
            v11 = (uint32_t *)((char *)v11 + a6);
            v10 += 2;
          }
          while ( v6 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector3d_int_e3d2fa  (binary VA: 0xe60990)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector3d_int_e3d2fa(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int v6;
  int result;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  v6 = a5;
  v12 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v12 + 14) )
  {
    v8 = *(uint32_t *)(v12 + 32) + 16 * a2;
    if ( v8 != 0 && *(uint8_t *)(v8 + 9) == 3 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 == 12 || a6 == 0 )
      {
        memcpy((char *)&a1[3 * a4 + 12] + *(uint32_t *)(v8 + 4), src, 12 * a5);
        return 1;
      }
      else
      {
        v9 = *(uint32_t *)(v8 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)(src);
          v11 = (uint32_t *)((char *)&a1[3 * a4 + 12] + v9);
          do
          {
            --v6;
            *v11 = *v10;
            v11[1] = v10[1];
            v11[2] = v10[2];
            v10 = (uint32_t *)((char *)v10 + a6);
            v11 += 3;
          }
          while ( v6 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector4d_int_38cb11  (binary VA: 0xe60aa0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector4d_int_38cb11(uint32_t *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  int v8;
  int result;
  int v10;
  uint32_t *v11;

  v6 = src;
  v7 = a5;
  v8 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v8 + 14) )
  {
    v10 = *(uint32_t *)(v8 + 32) + 16 * a2;
    if ( v10 != 0 && *(uint8_t *)(v10 + 9) == 4 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 == 16 || a6 == 0 )
      {
        memcpy((char *)&a1[4 * a4 + 12] + *(uint32_t *)(v10 + 4), src, 16 * a5);
        return 1;
      }
      else
      {
        result = 1;
        if ( a5 != 0 )
        {
          v11 = (uint32_t *)((char *)&a1[4 * a4 + 12] + *(uint32_t *)(v10 + 4));
          do
          {
            --v7;
            *v11 = *v6;
            v11[1] = v6[1];
            v11[2] = v6[2];
            v11[3] = v6[3];
            v6 = (uint32_t *)((char *)v6 + a6);
            v11 += 4;
          }
          while ( v7 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_float_id_ca1afb  (binary VA: 0xe60ba0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_float_id_ca1afb(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int v6;
  int result;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  v6 = a5;
  v12 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v12 + 14) )
  {
    v8 = *(uint32_t *)(v12 + 32) + 16 * a2;
    if ( v8 != 0 && *(uint8_t *)(v8 + 9) == 5 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 == 4 || a6 == 0 )
      {
        memcpy((char *)&a1[a4 + 12] + *(uint32_t *)(v8 + 4), src, 4 * a5);
        return 1;
      }
      else
      {
        v9 = *(uint32_t *)(v8 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)((char *)&a1[a4 + 12] + v9);
          v11 = (uint32_t *)(src);
          do
          {
            --v6;
            *v10 = *v11;
            v11 = (uint32_t *)((char *)v11 + a6);
            ++v10;
          }
          while ( v6 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector2d_float_3d6e87  (binary VA: 0xe60ca0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector2d_float_3d6e87(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int v6;
  int result;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  v6 = a5;
  v12 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v12 + 14) )
  {
    v8 = *(uint32_t *)(v12 + 32) + 16 * a2;
    if ( v8 != 0 && *(uint8_t *)(v8 + 9) == 6 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 == 8 || a6 == 0 )
      {
        memcpy((char *)&a1[2 * a4 + 12] + *(uint32_t *)(v8 + 4), src, 8 * a5);
        return 1;
      }
      else
      {
        v9 = *(uint32_t *)(v8 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)((char *)&a1[2 * a4 + 12] + v9);
          v11 = (uint32_t *)(src);
          do
          {
            --v6;
            *v10 = *v11;
            v10[1] = v11[1];
            v11 = (uint32_t *)((char *)v11 + a6);
            v10 += 2;
          }
          while ( v6 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector3d_float_99bb32  (binary VA: 0xe60da0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector3d_float_99bb32(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int v6;
  int result;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  v6 = a5;
  v12 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v12 + 14) )
  {
    v8 = *(uint32_t *)(v12 + 32) + 16 * a2;
    if ( v8 != 0 && *(uint8_t *)(v8 + 9) == 7 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 == 12 || a6 == 0 )
      {
        memcpy((char *)&a1[3 * a4 + 12] + *(uint32_t *)(v8 + 4), src, 12 * a5);
        return 1;
      }
      else
      {
        v9 = *(uint32_t *)(v8 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)(src);
          v11 = (uint32_t *)((char *)&a1[3 * a4 + 12] + v9);
          do
          {
            --v6;
            *v11 = *v10;
            v11[1] = v10[1];
            v11[2] = v10[2];
            v10 = (uint32_t *)((char *)v10 + a6);
            v11 += 3;
          }
          while ( v6 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector4d_float_a8602d  (binary VA: 0xe60eb0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_vector4d_float_a8602d(uint32_t *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *v6;
  int v7;
  int v8;
  int result;
  int v10;
  uint32_t *v11;

  v6 = src;
  v7 = a5;
  v8 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v8 + 14) )
  {
    v10 = *(uint32_t *)(v8 + 32) + 16 * a2;
    if ( v10 != 0 && *(uint8_t *)(v10 + 9) == 8 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 == 16 || a6 == 0 )
      {
        memcpy((char *)&a1[4 * a4 + 12] + *(uint32_t *)(v10 + 4), src, 16 * a5);
        return 1;
      }
      else
      {
        result = 1;
        if ( a5 != 0 )
        {
          v11 = (uint32_t *)((char *)&a1[4 * a4 + 12] + *(uint32_t *)(v10 + 4));
          do
          {
            --v7;
            *v11 = *v6;
            v11[1] = v6[1];
            v11[2] = v6[2];
            v11[3] = v6[3];
            v6 = (uint32_t *)((char *)v6 + a6);
            v11 += 4;
          }
          while ( v7 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_CMatrix2_float_52f061  (binary VA: 0xe60fb0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_CMatrix2_float_52f061(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int v6;
  int result;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  v6 = a5;
  v12 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v12 + 14) )
  {
    v8 = *(uint32_t *)(v12 + 32) + 16 * a2;
    if ( v8 != 0 && *(uint8_t *)(v8 + 9) == 9 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 == 16 || a6 == 0 )
      {
        memcpy((char *)&a1[4 * a4 + 12] + *(uint32_t *)(v8 + 4), src, 16 * a5);
        return 1;
      }
      else
      {
        v9 = *(uint32_t *)(v8 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)(src);
          v11 = (uint32_t *)((char *)&a1[4 * a4 + 12] + v9);
          do
          {
            --v6;
            *v11 = *v10;
            v11[1] = v10[1];
            v11[2] = v10[2];
            v11[3] = v10[3];
            v10 = (uint32_t *)((char *)v10 + a6);
            v11 += 4;
          }
          while ( v6 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_CMatrix3_float_049364  (binary VA: 0xe610c0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_CMatrix3_float_049364(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int v6;
  int result;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  v6 = a5;
  v12 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v12 + 14) )
  {
    v8 = *(uint32_t *)(v12 + 32) + 16 * a2;
    if ( v8 != 0 && *(uint8_t *)(v8 + 9) == 10 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 == 36 || a6 == 0 )
      {
        memcpy((char *)&a1[9 * a4 + 12] + *(uint32_t *)(v8 + 4), src, 36 * a5);
        return 1;
      }
      else
      {
        v9 = *(uint32_t *)(v8 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)(src);
          v11 = (uint32_t *)((char *)&a1[9 * a4 + 12] + v9);
          do
          {
            --v6;
            *v11 = *v10;
            v11[1] = v10[1];
            v11[2] = v10[2];
            v11[3] = v10[3];
            v11[4] = v10[4];
            v11[5] = v10[5];
            v11[6] = v10[6];
            v11[7] = v10[7];
            v11[8] = v10[8];
            v10 = (uint32_t *)((char *)v10 + a6);
            v11 += 9;
          }
          while ( v6 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_video_SColor_a8fdc3  (binary VA: 0xe611f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_video_SColor_a8fdc3(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int v6;
  int result;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  v6 = a5;
  v12 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v12 + 14) )
  {
    v8 = *(uint32_t *)(v12 + 32) + 16 * a2;
    if ( v8 != 0 && *(uint8_t *)(v8 + 9) == 17 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 == 4 || a6 == 0 )
      {
        memcpy((char *)&a1[a4 + 12] + *(uint32_t *)(v8 + 4), src, 4 * a5);
        return 1;
      }
      else
      {
        v9 = *(uint32_t *)(v8 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)((char *)&a1[a4 + 12] + v9);
          v11 = (uint32_t *)(src);
          do
          {
            --v6;
            *v10 = *v11;
            v11 = (uint32_t *)((char *)v11 + a6);
            ++v10;
          }
          while ( v6 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_video_SColorf_c9d5a3  (binary VA: 0xe612f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_video_SColorf_c9d5a3(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int v6;
  int result;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  v6 = a5;
  v12 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v12 + 14) )
  {
    v8 = *(uint32_t *)(v12 + 32) + 16 * a2;
    if ( v8 != 0 && *(uint8_t *)(v8 + 9) == 18 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 == 16 || a6 == 0 )
      {
        memcpy((char *)&a1[4 * a4 + 12] + *(uint32_t *)(v8 + 4), src, 16 * a5);
        return 1;
      }
      else
      {
        v9 = *(uint32_t *)(v8 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)(src);
          v11 = (uint32_t *)((char *)&a1[4 * a4 + 12] + v9);
          do
          {
            --v6;
            *v11 = *v10;
            v11[1] = v10[1];
            v11[2] = v10[2];
            v11[3] = v10[3];
            v10 = (uint32_t *)((char *)v10 + a6);
            v11 += 4;
          }
          while ( v6 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_int_id_6e67d0  (binary VA: 0xe61400)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_int_id_6e67d0(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  float *v13;
  float v14; // xmm0_4
  uint32_t *v15;
  uint32_t *v16;

  result = 0;
  v7 = a1[1];
  v8 = a5;
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v9 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v9 != 0
      && (glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v9 + 9)] & 2) != 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 4 && a6 != 0 )
        goto LABEL_6;
      if ( *(uint8_t *)(v9 + 9) == 1 )
      {
        memcpy((char *)&a1[a4 + 12] + *(uint32_t *)(v9 + 4), src, 4 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_6:
        v10 = (int)(uintptr_t)(a1) + *(uint32_t *)(v9 + 4) + 48;
        v11 = *(uint8_t *)(v9 + 9);
        if ( v11 == 1 )
        {
          result = 1;
          if ( a5 != 0 )
          {
            v15 = (uint32_t *)(v10 + 4 * a4);
            v16 = (uint32_t *)(src);
            do
            {
              --v8;
              *v15 = *v16;
              v16 = (uint32_t *)((char *)v16 + a6);
              ++v15;
            }
            while ( v8 != 0 );
            return 1;
          }
        }
        else
        {
          if ( v11 != 5 )
            return 1;
          result = 1;
          if ( a5 != 0 )
          {
            v12 = (int *)src;
            v13 = (float *)(v10 + 4 * a4);
            do
            {
              v14 = (float)*v12;
              --v8;
              v12 = (int *)((char *)v12 + a6);
              *v13++ = v14;
            }
            while ( v8 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector2d_int_fce8c2  (binary VA: 0xe61570)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector2d_int_fce8c2(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;

  result = 0;
  v7 = a1[1];
  v8 = a5;
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v9 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v9 != 0
      && (glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v9 + 9)] & 4) != 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 8 && a6 != 0 )
        goto LABEL_9;
      if ( *(uint8_t *)(v9 + 9) == 2 )
      {
        memcpy((char *)&a1[2 * a4 + 12] + *(uint32_t *)(v9 + 4), src, 8 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_9:
        result = 1;
        if ( *(uint8_t *)(v9 + 9) == 2 && a5 != 0 )
        {
          v10 = (uint32_t *)((char *)&a1[2 * a4 + 12] + *(uint32_t *)(v9 + 4));
          v11 = (uint32_t *)(src);
          do
          {
            --v8;
            *v10 = *v11;
            v10[1] = v11[1];
            v11 = (uint32_t *)((char *)v11 + a6);
            v10 += 2;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_int_a7c5aa  (binary VA: 0xe616b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_int_a7c5aa(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;

  result = 0;
  v7 = a1[1];
  v8 = a5;
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v9 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v9 != 0
      && (glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v9 + 9)] & 8) != 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 12 && a6 != 0 )
        goto LABEL_9;
      if ( *(uint8_t *)(v9 + 9) == 3 )
      {
        memcpy((char *)&a1[3 * a4 + 12] + *(uint32_t *)(v9 + 4), src, 12 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_9:
        result = 1;
        if ( *(uint8_t *)(v9 + 9) == 3 && a5 != 0 )
        {
          v10 = (uint32_t *)(src);
          v11 = (uint32_t *)((char *)&a1[3 * a4 + 12] + *(uint32_t *)(v9 + 4));
          do
          {
            --v8;
            *v11 = *v10;
            v11[1] = v10[1];
            v11[2] = v10[2];
            v10 = (uint32_t *)((char *)v10 + a6);
            v11 += 3;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_int_54da2c  (binary VA: 0xe61800)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_int_54da2c(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;

  result = 0;
  v7 = a1[1];
  v8 = a5;
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v9 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v9 != 0
      && (glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v9 + 9)] & 0x10) != 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 16 && a6 != 0 )
        goto LABEL_9;
      if ( *(uint8_t *)(v9 + 9) == 4 )
      {
        memcpy((char *)&a1[4 * a4 + 12] + *(uint32_t *)(v9 + 4), src, 16 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_9:
        result = 1;
        if ( *(uint8_t *)(v9 + 9) == 4 && a5 != 0 )
        {
          v10 = (uint32_t *)(src);
          v11 = (uint32_t *)((char *)&a1[4 * a4 + 12] + *(uint32_t *)(v9 + 4));
          do
          {
            --v8;
            *v11 = *v10;
            v11[1] = v10[1];
            v11[2] = v10[2];
            v11[3] = v10[3];
            v10 = (uint32_t *)((char *)v10 + a6);
            v11 += 4;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_float_id_d97248  (binary VA: 0xe61940)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_float_id_d97248(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  float *v15;

  result = 0;
  v7 = a1[1];
  v8 = a5;
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v9 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v9 != 0
      && (glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v9 + 9)] & 0x20) != 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 4 && a6 != 0 )
        goto LABEL_6;
      if ( *(uint8_t *)(v9 + 9) == 5 )
      {
        memcpy((char *)&a1[a4 + 12] + *(uint32_t *)(v9 + 4), src, 4 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_6:
        v10 = (int)(uintptr_t)(a1) + *(uint32_t *)(v9 + 4) + 48;
        v11 = *(uint8_t *)(v9 + 9);
        if ( v11 == 1 )
        {
          result = 1;
          if ( a5 != 0 )
          {
            v14 = (uint32_t *)(v10 + 4 * a4);
            v15 = (float *)src;
            do
            {
              --v8;
              *v14 = (int)*v15;
              v15 = (float *)((char *)v15 + a6);
              ++v14;
            }
            while ( v8 != 0 );
            return 1;
          }
        }
        else
        {
          if ( v11 != 5 )
            return 1;
          result = 1;
          if ( a5 != 0 )
          {
            v12 = (uint32_t *)(src);
            v13 = (uint32_t *)(v10 + 4 * a4);
            do
            {
              --v8;
              *v13 = *v12;
              v12 = (uint32_t *)((char *)v12 + a6);
              ++v13;
            }
            while ( v8 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector2d_float_9e9c08  (binary VA: 0xe61ab0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector2d_float_9e9c08(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;

  result = 0;
  v7 = a1[1];
  v8 = a5;
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v9 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v9 != 0
      && (glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v9 + 9)] & 0x40) != 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 8 && a6 != 0 )
        goto LABEL_9;
      if ( *(uint8_t *)(v9 + 9) == 6 )
      {
        memcpy((char *)&a1[2 * a4 + 12] + *(uint32_t *)(v9 + 4), src, 8 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_9:
        result = 1;
        if ( *(uint8_t *)(v9 + 9) == 6 && a5 != 0 )
        {
          v10 = (uint32_t *)((char *)&a1[2 * a4 + 12] + *(uint32_t *)(v9 + 4));
          v11 = (uint32_t *)(src);
          do
          {
            --v8;
            *v10 = *v11;
            v10[1] = v11[1];
            v11 = (uint32_t *)((char *)v11 + a6);
            v10 += 2;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_float_de67e0  (binary VA: 0xe61bf0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector3d_float_de67e0(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;

  result = 0;
  v7 = a1[1];
  v8 = a5;
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v9 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v9 != 0
      && SLOBYTE(glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v9 + 9)]) < 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 12 && a6 != 0 )
        goto LABEL_9;
      if ( *(uint8_t *)(v9 + 9) == 7 )
      {
        memcpy((char *)&a1[3 * a4 + 12] + *(uint32_t *)(v9 + 4), src, 12 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_9:
        result = 1;
        if ( *(uint8_t *)(v9 + 9) == 7 && a5 != 0 )
        {
          v10 = (uint32_t *)(src);
          v11 = (uint32_t *)((char *)&a1[3 * a4 + 12] + *(uint32_t *)(v9 + 4));
          do
          {
            --v8;
            *v11 = *v10;
            v11[1] = v10[1];
            v11[2] = v10[2];
            v10 = (uint32_t *)((char *)v10 + a6);
            v11 += 3;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f  (binary VA: 0xe61d40)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_vector4d_float_00488f(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  bool v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;

  result = 0;
  v7 = a1[1];
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v8 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v8 != 0
      && (glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v8 + 9)] & 0x100) != 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 16 && a6 != 0 )
        goto LABEL_6;
      if ( *(uint8_t *)(v8 + 9) == 8 )
      {
        memcpy((char *)&a1[4 * a4 + 12] + *(uint32_t *)(v8 + 4), src, 16 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_6:
        v9 = *(uint8_t *)(v8 + 9);
        v10 = (int)(uintptr_t)(a1) + *(uint32_t *)(v8 + 4) + 48;
        if ( v9 == 17 )
        {
          sub_DFF070(v10, (float *)src, a4, a5, a6);
          return 1;
        }
        if ( v9 == 18 )
        {
          v12 = (uint32_t *)(16 * a4 + v10);
          result = 1;
          v13 = &v12[4 * a5];
          if ( v12 != v13 )
          {
            v14 = (uint32_t *)(src);
            do
            {
              *v12 = *v14;
              v12[1] = v14[1];
              v12[2] = v14[2];
              v12[3] = v14[3];
              v12 += 4;
              v14 = (uint32_t *)((char *)v14 + a6);
            }
            while ( v13 != v12 );
            return 1;
          }
        }
        else
        {
          v11 = v9 == 8;
          result = 1;
          if ( v11 && a5 != 0 )
          {
            v15 = (uint32_t *)(src);
            v16 = (uint32_t *)(16 * a4 + v10);
            v17 = a5;
            do
            {
              --v17;
              *v16 = *v15;
              v16[1] = v15[1];
              v16[2] = v15[2];
              v16[3] = v15[3];
              v15 = (uint32_t *)((char *)v15 + a6);
              v16 += 4;
            }
            while ( v17 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_CMatrix2_float_d247ae  (binary VA: 0xe61f20)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_CMatrix2_float_d247ae(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;

  result = 0;
  v7 = a1[1];
  v8 = a5;
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v9 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v9 != 0
      && (glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v9 + 9)] & 0x200) != 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 16 && a6 != 0 )
        goto LABEL_9;
      if ( *(uint8_t *)(v9 + 9) == 9 )
      {
        memcpy((char *)&a1[4 * a4 + 12] + *(uint32_t *)(v9 + 4), src, 16 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_9:
        result = 1;
        if ( *(uint8_t *)(v9 + 9) == 9 && a5 != 0 )
        {
          v10 = (uint32_t *)(src);
          v11 = (uint32_t *)((char *)&a1[4 * a4 + 12] + *(uint32_t *)(v9 + 4));
          do
          {
            --v8;
            *v11 = *v10;
            v11[1] = v10[1];
            v11[2] = v10[2];
            v11[3] = v10[3];
            v10 = (uint32_t *)((char *)v10 + a6);
            v11 += 4;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9  (binary VA: 0xe62060)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColor_a2a5d9(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;

  result = 0;
  v7 = a1[1];
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v8 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v8 != 0
      && (glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v8 + 9)] & 0x20000) != 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 4 && a6 != 0 )
        goto LABEL_6;
      if ( *(uint8_t *)(v8 + 9) == 17 )
      {
        memcpy((char *)&a1[a4 + 12] + *(uint32_t *)(v8 + 4), src, 4 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_6:
        v9 = *(uint8_t *)(v8 + 9);
        v10 = (int)(uintptr_t)(a1) + *(uint32_t *)(v8 + 4) + 48;
        switch ( v9 )
        {
          case 8:
            sub_DFF1B0(v10, (uint8_t *)src, a4, a5, a6);
            return 1;
          case 17:
            result = 1;
            if ( a5 != 0 )
            {
              v11 = (uint32_t *)(src);
              v12 = (uint32_t *)(v10 + 4 * a4);
              v13 = a5;
              do
              {
                --v13;
                *v12 = *v11;
                v11 = (uint32_t *)((char *)v11 + a6);
                ++v12;
              }
              while ( v13 != 0 );
              return 1;
            }
            break;
          case 18:
            sub_DFF230(v10, (uint8_t *)src, a4, a5, a6);
            return 1;
          default:
            return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColorf_ea6ba4  (binary VA: 0xe62210)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_SColorf_ea6ba4(uint32_t *a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;

  result = 0;
  v7 = a1[1];
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v8 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v8 != 0
      && (glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v8 + 9)] & 0x40000) != 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 16 && a6 != 0 )
        goto LABEL_6;
      if ( *(uint8_t *)(v8 + 9) == 18 )
      {
        memcpy((char *)&a1[4 * a4 + 12] + *(uint32_t *)(v8 + 4), src, 16 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_6:
        v9 = *(uint8_t *)(v8 + 9);
        v10 = (int)(uintptr_t)(a1) + *(uint32_t *)(v8 + 4) + 48;
        switch ( v9 )
        {
          case 8:
            v14 = (uint32_t *)(16 * a4 + v10);
            result = 1;
            v15 = &v14[4 * a5];
            if ( v14 != v15 )
            {
              v16 = (uint32_t *)(src);
              do
              {
                *v14 = *v16;
                v14[1] = v16[1];
                v14[2] = v16[2];
                v14[3] = v16[3];
                v14 += 4;
                v16 = (uint32_t *)((char *)v16 + a6);
              }
              while ( v15 != v14 );
              return 1;
            }
            break;
          case 17:
            sub_DFF110(v10, (float *)src, a4, a5, a6);
            return 1;
          case 18:
            result = 1;
            if ( a5 != 0 )
            {
              v11 = (uint32_t *)(src);
              v12 = (uint32_t *)(16 * a4 + v10);
              v13 = a5;
              do
              {
                --v13;
                *v12 = *v11;
                v12[1] = v11[1];
                v12[2] = v11[2];
                v12[3] = v11[3];
                v11 = (uint32_t *)((char *)v11 + a6);
                v12 += 4;
              }
              while ( v13 != 0 );
              return 1;
            }
            break;
          default:
            return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterElement_unsigned_char_b1e886  (binary VA: 0xe623f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterElement<unsigned char>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterElement_unsigned_char_b1e886(uint32_t *a1, uint16_t a2, unsigned int a3, uint8_t a4, uint8_t a5)
{
  int v5;
  int result;
  int v7;
  int v8;
  uint8_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  uint16_t *v14;
  uint16_t *v15;
  unsigned int v16;
  float v17;

  v5 = a1[1];
  LOBYTE(v17) = a5;
  result = 0;
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v7 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v7 != 0 )
    {
      v8 = *(uint8_t *)(v7 + 9);
      if ( glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[v8] == 0
        && glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[v8] > a4
        && *(uint16_t *)(v7 + 12) > a3 )
      {
        if ( v8 == 11 )
        {
          v10 = (uint32_t *)((char *)a1 + *(uint32_t *)(v7 + 4) + 48);
          v11 = (uint32_t *)*v10;
          if ( *v10 == 0 )
          {
            v13 = sub_DFF370();
            v11 = v13;
            v14 = (uint16_t *)(v13);
            v16 = 64;
            if ( ((uint8_t)(uintptr_t)(v13) & 1) != 0 )
            {
              *(uint8_t *)v13 = 0;
              v14 = (uint16_t *)((char *)v13 + 1);
              v16 = 63;
            }
            if ( ((uint8_t)(uintptr_t)(v14) & 2) != 0 )
            {
              *v14++ = 0;
              v16 -= 2;
            }
            memset(v14, 0, 4 * (v16 >> 2));
            v15 = &v14[2 * (v16 >> 2)];
            if ( (v16 & 2) != 0 )
              *v15++ = 0;
            if ( (v16 & 1) != 0 )
              *(uint8_t *)v15 = 0;
            *v13 = 1065353216;
            v13[5] = 1065353216;
            v13[10] = 1065353216;
            v13[15] = 1065353216;
            *v10 = (uint32_t)(uintptr_t)(v13);
          }
          v12 = a4;
          if ( *(float *)&v11[a4] != v17 )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
            v12 = a4;
          }
          *(float *)&v11[v12] = (float)((float)0 * 65536.0) + (float)a5;
          return 1;
        }
        else
        {
          v9 = (uint8_t *)a1 + *(uint32_t *)(v7 + 4) + a3 + a4 + 48;
          if ( *v9 != a5 )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
          }
          *v9 = a5;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterElement_int_id_85a0f1  (binary VA: 0xe625c0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterElement<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterElement_int_id_85a0f1(uint32_t *a1, uint16_t a2, unsigned int a3, uint8_t a4, float a5)
{
  int v5;
  int result;
  int v7;
  int v8;
  float *v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;
  uint32_t *v13;
  uint16_t *v14;
  uint16_t *v15;
  unsigned int v16;

  v5 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v7 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v7 != 0 )
    {
      v8 = *(uint8_t *)(v7 + 9);
      if ( glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[v8] == 1
        && glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[v8] > a4
        && *(uint16_t *)(v7 + 12) > a3 )
      {
        if ( v8 == 11 )
        {
          v10 = (uint32_t *)((char *)a1 + *(uint32_t *)(v7 + 4) + 48);
          v11 = (uint32_t *)*v10;
          if ( *v10 == 0 )
          {
            v13 = sub_DFF370();
            v11 = v13;
            v14 = (uint16_t *)(v13);
            v16 = 64;
            if ( ((uint8_t)(uintptr_t)(v13) & 1) != 0 )
            {
              *(uint8_t *)v13 = 0;
              v14 = (uint16_t *)((char *)v13 + 1);
              v16 = 63;
            }
            if ( ((uint8_t)(uintptr_t)(v14) & 2) != 0 )
            {
              *v14++ = 0;
              v16 -= 2;
            }
            memset(v14, 0, 4 * (v16 >> 2));
            v15 = &v14[2 * (v16 >> 2)];
            if ( (v16 & 2) != 0 )
              *v15++ = 0;
            if ( (v16 & 1) != 0 )
              *(uint8_t *)v15 = 0;
            *v13 = 1065353216;
            v13[5] = 1065353216;
            v13[10] = 1065353216;
            v13[15] = 1065353216;
            *v10 = (uint32_t)(uintptr_t)(v13);
          }
          v12 = a4;
          if ( a5 != *(float *)&v11[a4] )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
            v12 = a4;
          }
          *(float *)&v11[v12] = (float)SLODWORD(a5);
          return 1;
        }
        else
        {
          v9 = (float *)((char *)&a1[a3 + 12 + a4] + *(uint32_t *)(v7 + 4));
          if ( *(uint32_t *)v9 != LODWORD(a5) )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
          }
          *v9 = a5;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterElement_float_id_f195e7  (binary VA: 0xe62790)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterElement<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterElement_float_id_f195e7(uint32_t *a1, uint16_t a2, unsigned int a3, uint8_t a4, float a5)
{
  int v5;
  int result;
  float v7; // xmm0_4
  int v8;
  int v9;
  float *v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  uint32_t *v14;
  uint16_t *v15;
  uint16_t *v16;
  unsigned int v17;

  v5 = a1[1];
  result = 0;
  v7 = a5;
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v8 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v8 != 0 )
    {
      v9 = *(uint8_t *)(v8 + 9);
      if ( glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[v9] == 5
        && glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[v9] > a4
        && *(uint16_t *)(v8 + 12) > a3 )
      {
        if ( v9 == 11 )
        {
          v11 = (uint32_t *)((char *)a1 + *(uint32_t *)(v8 + 4) + 48);
          v12 = (uint32_t *)*v11;
          if ( *v11 == 0 )
          {
            v14 = sub_DFF370();
            v12 = v14;
            v15 = (uint16_t *)(v14);
            v17 = 64;
            v7 = a5;
            if ( ((uint8_t)(uintptr_t)(v14) & 1) != 0 )
            {
              *(uint8_t *)v14 = 0;
              v15 = (uint16_t *)((char *)v14 + 1);
              v17 = 63;
            }
            if ( ((uint8_t)(uintptr_t)(v15) & 2) != 0 )
            {
              *v15++ = 0;
              v17 -= 2;
            }
            memset(v15, 0, 4 * (v17 >> 2));
            v16 = &v15[2 * (v17 >> 2)];
            if ( (v17 & 2) != 0 )
              *v16++ = 0;
            if ( (v17 & 1) != 0 )
              *(uint8_t *)v16 = 0;
            *v14 = 1065353216;
            v14[5] = 1065353216;
            v14[10] = 1065353216;
            v14[15] = 1065353216;
            *v11 = (uint32_t)(uintptr_t)(v14);
          }
          v13 = a4;
          if ( v7 != *(float *)&v12[a4] )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
            v13 = a4;
          }
          *(float *)&v12[v13] = v7;
          return 1;
        }
        else
        {
          v10 = (float *)((char *)&a1[a3 + 12 + a4] + *(uint32_t *)(v8 + 4));
          if ( a5 != *v10 )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
          }
          *v10 = a5;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_int_id_1312f9  (binary VA: 0xe62950)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_int_id_1312f9(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 1 && *(uint16_t *)(v6 + 12) > a3 )
    {
      *a4 = *(uint32_t *)(*(uint32_t *)(v6 + 4) + a1 + 4 * a3 + 48);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector2d_int_a96c77  (binary VA: 0xe629c0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector2d_int_a96c77(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 2 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 8 * a3 + 48);
      *a4 = *v7;
      a4[1] = v7[1];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector3d_int_9639cc  (binary VA: 0xe62a50)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector3d_int_9639cc(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 3 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 12 * a3 + 48);
      *a4 = *v7;
      a4[1] = v7[1];
      a4[2] = v7[2];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector4d_int_919deb  (binary VA: 0xe62ae0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector4d_int_919deb(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 4 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 16 * a3 + 48);
      *a4 = *v7;
      a4[1] = v7[1];
      a4[2] = v7[2];
      a4[3] = v7[3];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_float_id_7a7507  (binary VA: 0xe62b70)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_float_id_7a7507(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 5 && *(uint16_t *)(v6 + 12) > a3 )
    {
      *a4 = *(uint32_t *)(*(uint32_t *)(v6 + 4) + a1 + 4 * a3 + 48);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector2d_float_5a50a3  (binary VA: 0xe62be0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector2d_float_5a50a3(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 6 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 8 * a3 + 48);
      *a4 = *v7;
      a4[1] = v7[1];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector3d_float_ee07cf  (binary VA: 0xe62c70)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector3d_float_ee07cf(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 7 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 12 * a3 + 48);
      *a4 = *v7;
      a4[1] = v7[1];
      a4[2] = v7[2];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector4d_float_151dd6  (binary VA: 0xe62d00)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector4d_float_151dd6(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 8 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 16 * a3 + 48);
      *a4 = *v7;
      a4[1] = v7[1];
      a4[2] = v7[2];
      a4[3] = v7[3];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_CMatrix2_float_e82e17  (binary VA: 0xe62d90)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_CMatrix2_float_e82e17(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 9 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = (uint32_t *)(*(uint32_t *)(v6 + 4) + 16 * a3 + a1);
      *a4 = v7[12];
      a4[1] = v7[13];
      a4[2] = v7[14];
      a4[3] = v7[15];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_CMatrix3_float_4a1266  (binary VA: 0xe62e20)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_CMatrix3_float_4a1266(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 10 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = (uint32_t *)(*(uint32_t *)(v6 + 4) + a1 + 36 * a3 + 48);
      *a4 = *v7;
      a4[1] = v7[1];
      a4[2] = v7[2];
      a4[3] = v7[3];
      a4[4] = v7[4];
      a4[5] = v7[5];
      a4[6] = v7[6];
      a4[7] = v7[7];
      a4[8] = v7[8];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_video_ITexture_d2b90c  (binary VA: 0xe62ed0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_video_ITexture_d2b90c(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && (unsigned int)*(uint8_t *)(v6 + 9) - 12 <= 4 && *(uint16_t *)(v6 + 12) > a3 )
    {
      *a4 = *(uint32_t *)(*(uint32_t *)(v6 + 4) + a1 + 4 * a3 + 48);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_video_SColor_13ebcf  (binary VA: 0xe62f40)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_video_SColor_13ebcf(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 17 && *(uint16_t *)(v6 + 12) > a3 )
    {
      *a4 = *(uint32_t *)(*(uint32_t *)(v6 + 4) + a1 + 4 * a3 + 48);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_video_SColorf_ccc399  (binary VA: 0xe62fb0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_video_SColorf_ccc399(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 18 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = (uint32_t *)(*(uint32_t *)(v6 + 4) + 16 * a3 + a1);
      *a4 = v7[12];
      a4[1] = v7[13];
      a4[2] = v7[14];
      a4[3] = v7[15];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_int_id_29a806  (binary VA: 0xe63040)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_int_id_29a806(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 2) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = (uint32_t *)(*(uint32_t *)(v6 + 4) + a1 + 48);
        if ( v7 == 1 )
        {
          *a4 = *v8;
          return 1;
        }
        else
        {
          result = 1;
          if ( v7 == 5 )
          {
            *a4 = (int)*(float *)v8;
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector2d_int_d23811  (binary VA: 0xe630f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector2d_int_d23811(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 4) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 2 )
        {
          v8 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48);
          *a4 = *v8;
          a4[1] = v8[1];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector3d_int_fe3636  (binary VA: 0xe63190)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector3d_int_fe3636(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 8) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 3 )
        {
          v8 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48);
          *a4 = *v8;
          a4[1] = v8[1];
          a4[2] = v8[2];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector4d_int_6b3724  (binary VA: 0xe63240)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector4d_int_6b3724(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x10) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 4 )
        {
          v8 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48);
          *a4 = *v8;
          a4[1] = v8[1];
          a4[2] = v8[2];
          a4[3] = v8[3];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_float_id_3558c8  (binary VA: 0xe632f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_float_id_3558c8(int a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int *v8;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x20) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = (int *)(*(uint32_t *)(v6 + 4) + a1 + 48);
        if ( v7 == 1 )
        {
          *a4 = (float)*v8;
          return 1;
        }
        else
        {
          result = 1;
          if ( v7 == 5 )
          {
            *(uint32_t *)a4 = *v8;
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector2d_float_6937bb  (binary VA: 0xe633a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector2d_float_6937bb(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x40) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 6 )
        {
          v8 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48);
          *a4 = *v8;
          a4[1] = v8[1];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector3d_float_29deee  (binary VA: 0xe63440)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector3d_float_29deee(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( SLOBYTE(glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7]) < 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 7 )
        {
          v8 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48);
          *a4 = *v8;
          a4[1] = v8[1];
          a4[2] = v8[2];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector4d_float_81b044  (binary VA: 0xe634f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector4d_float_81b044(int a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float *v8;
  float v9; // xmm3_4
  float v10; // xmm2_4
  int v11;
  float v12; // xmm4_4

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x100) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = (float *)(*(uint32_t *)(v6 + 4) + a1 + 48);
        if ( v7 == 17 )
        {
          v9 = (float)*((uint8_t *)v8 + 1);
          v10 = (float)*((uint8_t *)v8 + 2);
          v11 = *((uint8_t *)v8 + 3);
          v12 = (float)*(uint8_t *)v8;
          a4[1] = v9 * 0.003921569f;
          a4[2] = v10 * 0.003921569f;
          a4[3] = (float)v11 * 0.003921569f;
          *a4 = v12 * 0.003921569f;
          return 1;
        }
        else if ( v7 == 18 || v7 == 8 )
        {
          *a4 = *v8;
          a4[1] = v8[1];
          a4[2] = v8[2];
          a4[3] = v8[3];
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_CMatrix2_float_d5ce21  (binary VA: 0xe63600)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_CMatrix2_float_d5ce21(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x200) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = *(uint32_t *)(v6 + 4);
        if ( v7 == 9 )
        {
          *a4 = *(uint32_t *)(a1 + v8 + 48);
          a4[1] = *(uint32_t *)(a1 + v8 + 52);
          a4[2] = *(uint32_t *)(a1 + v8 + 56);
          a4[3] = *(uint32_t *)(a1 + v8 + 60);
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_CMatrix3_float_f6afa1  (binary VA: 0xe636b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_CMatrix3_float_f6afa1(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x400) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = *(uint32_t *)(v6 + 4);
        if ( v7 == 10 )
        {
          *a4 = *(uint32_t *)(a1 + v8 + 48);
          a4[1] = *(uint32_t *)(a1 + v8 + 52);
          a4[2] = *(uint32_t *)(a1 + v8 + 56);
          a4[3] = *(uint32_t *)(a1 + v8 + 60);
          a4[4] = *(uint32_t *)(a1 + v8 + 64);
          a4[5] = *(uint32_t *)(a1 + v8 + 68);
          a4[6] = *(uint32_t *)(a1 + v8 + 72);
          a4[7] = *(uint32_t *)(a1 + v8 + 76);
          a4[8] = *(uint32_t *)(a1 + v8 + 80);
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_video_ITexture_b9ea82  (binary VA: 0xe63780)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_video_ITexture_b9ea82(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && (unsigned int)*(uint8_t *)(v6 + 9) - 12 <= 4 && *(uint16_t *)(v6 + 12) > a3 )
    {
      *a4 = *(uint32_t *)(*(uint32_t *)(v6 + 4) + a1 + 48);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_video_SColor_444eab  (binary VA: 0xe637f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_video_SColor_444eab(int a1, uint16_t a2, unsigned int a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  float v10; // xmm1_4
  float v11; // xmm0_4

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x20000) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = *(uint32_t *)(v6 + 4) + a1 + 48;
        if ( v7 == 17 )
        {
          *(uint32_t *)a4 = *(uint32_t *)v8;
          return 1;
        }
        else if ( v7 == 18 || (result = 1, v7 == 8) )
        {
          v9 = (int)(float)(*(float *)(v8 + 8) * 255.0);
          v10 = *(float *)(v8 + 12) * 255.0;
          v11 = 255.0 * *(float *)v8;
          *(uint8_t *)(a4 + 1) = (int)(float)(*(float *)(v8 + 4) * 255.0);
          *(uint8_t *)(a4 + 2) = v9;
          *(uint8_t *)a4 = (int)v11;
          *(uint8_t *)(a4 + 3) = (int)v10;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_video_SColorf_052537  (binary VA: 0xe638e0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_video_SColorf_052537(int a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  float *v8;
  float v9; // xmm3_4
  float v10; // xmm2_4
  int v11;
  float v12; // xmm4_4

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x40000) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = (float *)(*(uint32_t *)(v6 + 4) + a1 + 48);
        if ( v7 == 17 )
        {
          v9 = (float)*((uint8_t *)v8 + 1);
          v10 = (float)*((uint8_t *)v8 + 2);
          v11 = *((uint8_t *)v8 + 3);
          v12 = (float)*(uint8_t *)v8;
          a4[1] = v9 * 0.003921569f;
          a4[2] = v10 * 0.003921569f;
          a4[3] = (float)v11 * 0.003921569f;
          *a4 = v12 * 0.003921569f;
          return 1;
        }
        else if ( v7 == 18 || v7 == 8 )
        {
          *a4 = *v8;
          a4[1] = v8[1];
          a4[2] = v8[2];
          a4[3] = v8[3];
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_int_id_1312f9  (binary VA: 0xe639f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_int_id_1312f9(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  v6 = dest;
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v7 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 1 )
    {
      if ( a4 == 4 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v7 + 4) + a1 + 48), 4 * *(uint16_t *)(v7 + 12));
        return 1;
      }
      else
      {
        v8 = *(uint16_t *)(v7 + 12);
        v9 = *(uint32_t *)(v7 + 4);
        result = 1;
        if ( v8 != 0 )
        {
          v10 = (uint32_t *)(a1 + v9 + 48);
          do
          {
            --v8;
            *v6 = *v10++;
            v6 = (uint32_t *)((char *)v6 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector2d_int_a96c77  (binary VA: 0xe63ac0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector2d_int_a96c77(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  v6 = dest;
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v7 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 2 )
    {
      if ( a4 == 8 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v7 + 4) + a1 + 48), 8 * *(uint16_t *)(v7 + 12));
        return 1;
      }
      else
      {
        v8 = *(uint16_t *)(v7 + 12);
        v9 = *(uint32_t *)(v7 + 4);
        result = 1;
        if ( v8 != 0 )
        {
          v10 = (uint32_t *)(a1 + v9 + 48);
          do
          {
            --v8;
            *v6 = *v10;
            v6[1] = v10[1];
            v10 += 2;
            v6 = (uint32_t *)((char *)v6 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector3d_int_9639cc  (binary VA: 0xe63b90)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector3d_int_9639cc(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v5 = dest;
  v6 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v6 + 14) )
  {
    v7 = *(uint32_t *)(v6 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 3 )
    {
      if ( a4 == 12 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v7 + 4) + a1 + 48), 12 * *(uint16_t *)(v7 + 12));
        return 1;
      }
      else
      {
        v8 = *(uint16_t *)(v7 + 12);
        v9 = *(uint32_t *)(v7 + 4);
        result = 1;
        if ( v8 != 0 )
        {
          v10 = (uint32_t *)(a1 + v9 + 48);
          do
          {
            --v8;
            *v5 = *v10;
            v5[1] = v10[1];
            v5[2] = v10[2];
            v10 += 3;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector4d_int_919deb  (binary VA: 0xe63c60)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector4d_int_919deb(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v5 = dest;
  v6 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v6 + 14) )
  {
    v7 = *(uint32_t *)(v6 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 4 )
    {
      if ( a4 == 16 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v7 + 4) + a1 + 48), 16 * *(uint16_t *)(v7 + 12));
        return 1;
      }
      else
      {
        v8 = *(uint16_t *)(v7 + 12);
        v9 = *(uint32_t *)(v7 + 4);
        result = 1;
        if ( v8 != 0 )
        {
          v10 = (uint32_t *)(a1 + v9 + 48);
          do
          {
            --v8;
            *v5 = *v10;
            v5[1] = v10[1];
            v5[2] = v10[2];
            v5[3] = v10[3];
            v10 += 4;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_float_id_7a7507  (binary VA: 0xe63d30)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_float_id_7a7507(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  v6 = dest;
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v7 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 5 )
    {
      if ( a4 == 4 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v7 + 4) + a1 + 48), 4 * *(uint16_t *)(v7 + 12));
        return 1;
      }
      else
      {
        v8 = *(uint16_t *)(v7 + 12);
        v9 = *(uint32_t *)(v7 + 4);
        result = 1;
        if ( v8 != 0 )
        {
          v10 = (uint32_t *)(a1 + v9 + 48);
          do
          {
            --v8;
            *v6 = *v10++;
            v6 = (uint32_t *)((char *)v6 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector2d_float_5a50a3  (binary VA: 0xe63e00)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector2d_float_5a50a3(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  v6 = dest;
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v7 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 6 )
    {
      if ( a4 == 8 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v7 + 4) + a1 + 48), 8 * *(uint16_t *)(v7 + 12));
        return 1;
      }
      else
      {
        v8 = *(uint16_t *)(v7 + 12);
        v9 = *(uint32_t *)(v7 + 4);
        result = 1;
        if ( v8 != 0 )
        {
          v10 = (uint32_t *)(a1 + v9 + 48);
          do
          {
            --v8;
            *v6 = *v10;
            v6[1] = v10[1];
            v10 += 2;
            v6 = (uint32_t *)((char *)v6 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector3d_float_ee07cf  (binary VA: 0xe63ed0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector3d_float_ee07cf(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v5 = dest;
  v6 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v6 + 14) )
  {
    v7 = *(uint32_t *)(v6 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 7 )
    {
      if ( a4 == 12 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v7 + 4) + a1 + 48), 12 * *(uint16_t *)(v7 + 12));
        return 1;
      }
      else
      {
        v8 = *(uint16_t *)(v7 + 12);
        v9 = *(uint32_t *)(v7 + 4);
        result = 1;
        if ( v8 != 0 )
        {
          v10 = (uint32_t *)(a1 + v9 + 48);
          do
          {
            --v8;
            *v5 = *v10;
            v5[1] = v10[1];
            v5[2] = v10[2];
            v10 += 3;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector4d_float_151dd6  (binary VA: 0xe63fa0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_vector4d_float_151dd6(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v5 = dest;
  v6 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v6 + 14) )
  {
    v7 = *(uint32_t *)(v6 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 8 )
    {
      if ( a4 == 16 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v7 + 4) + a1 + 48), 16 * *(uint16_t *)(v7 + 12));
        return 1;
      }
      else
      {
        v8 = *(uint16_t *)(v7 + 12);
        v9 = *(uint32_t *)(v7 + 4);
        result = 1;
        if ( v8 != 0 )
        {
          v10 = (uint32_t *)(a1 + v9 + 48);
          do
          {
            --v8;
            *v5 = *v10;
            v5[1] = v10[1];
            v5[2] = v10[2];
            v5[3] = v10[3];
            v10 += 4;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_CMatrix2_float_e82e17  (binary VA: 0xe64070)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_CMatrix2_float_e82e17(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v5 = dest;
  v6 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v6 + 14) )
  {
    v7 = *(uint32_t *)(v6 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 9 )
    {
      if ( a4 == 16 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v7 + 4) + a1 + 48), 16 * *(uint16_t *)(v7 + 12));
        return 1;
      }
      else
      {
        v8 = *(uint16_t *)(v7 + 12);
        v9 = *(uint32_t *)(v7 + 4);
        result = 1;
        if ( v8 != 0 )
        {
          v10 = (uint32_t *)(a1 + v9 + 48);
          do
          {
            --v8;
            *v5 = *v10;
            v5[1] = v10[1];
            v5[2] = v10[2];
            v5[3] = v10[3];
            v10 += 4;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_CMatrix3_float_4a1266  (binary VA: 0xe64140)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_CMatrix3_float_4a1266(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v5 = dest;
  v6 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v6 + 14) )
  {
    v7 = *(uint32_t *)(v6 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 10 )
    {
      if ( a4 == 36 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v7 + 4) + a1 + 48), 36 * *(uint16_t *)(v7 + 12));
        return 1;
      }
      else
      {
        v8 = *(uint16_t *)(v7 + 12);
        v9 = *(uint32_t *)(v7 + 4);
        result = 1;
        if ( v8 != 0 )
        {
          v10 = (uint32_t *)(a1 + v9 + 48);
          do
          {
            --v8;
            *v5 = *v10;
            v5[1] = v10[1];
            v5[2] = v10[2];
            v5[3] = v10[3];
            v5[4] = v10[4];
            v5[5] = v10[5];
            v5[6] = v10[6];
            v5[7] = v10[7];
            v5[8] = v10[8];
            v10 += 9;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_video_ITexture_d2b90c  (binary VA: 0xe64230)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_video_ITexture_d2b90c(int a1, uint16_t a2, uint32_t *a3, int a4)
{
  int result;
  int v6;
  int v7;
  int *v8;
  int *v9;
  int v10;

  result = 0;
  v6 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v6 + 14) )
  {
    v7 = *(uint32_t *)(v6 + 32) + 16 * a2;
    if ( v7 != 0 && (unsigned int)*(uint8_t *)(v7 + 9) - 12 <= 4 )
    {
      v8 = (int *)(*(uint32_t *)(v7 + 4) + a1 + 48);
      v9 = &v8[*(uint16_t *)(v7 + 12)];
      result = 1;
      if ( v8 != v9 )
      {
        do
        {
          v10 = *v8++;
          *a3 = v10;
          a3 = (uint32_t *)((char *)a3 + a4);
        }
        while ( v9 != v8 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_video_SColor_13ebcf  (binary VA: 0xe642a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_video_SColor_13ebcf(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  v6 = dest;
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v7 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 17 )
    {
      if ( a4 == 4 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v7 + 4) + a1 + 48), 4 * *(uint16_t *)(v7 + 12));
        return 1;
      }
      else
      {
        v8 = *(uint16_t *)(v7 + 12);
        v9 = *(uint32_t *)(v7 + 4);
        result = 1;
        if ( v8 != 0 )
        {
          v10 = (uint32_t *)(a1 + v9 + 48);
          do
          {
            --v8;
            *v6 = *v10++;
            v6 = (uint32_t *)((char *)v6 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_video_SColorf_ccc399  (binary VA: 0xe64370)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_video_SColorf_ccc399(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v5 = dest;
  v6 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v6 + 14) )
  {
    v7 = *(uint32_t *)(v6 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 18 )
    {
      if ( a4 == 16 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v7 + 4) + a1 + 48), 16 * *(uint16_t *)(v7 + 12));
        return 1;
      }
      else
      {
        v8 = *(uint16_t *)(v7 + 12);
        v9 = *(uint32_t *)(v7 + 4);
        result = 1;
        if ( v8 != 0 )
        {
          v10 = (uint32_t *)(a1 + v9 + 48);
          do
          {
            --v8;
            *v5 = *v10;
            v5[1] = v10[1];
            v5[2] = v10[2];
            v5[3] = v10[3];
            v10 += 4;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_int_id_29a806  (binary VA: 0xe64440)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_int_id_29a806(int a1, uint16_t a2, void *dest, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 2) != 0 )
      {
        if ( a4 != 4 && a4 != 0 )
          goto LABEL_6;
        if ( v7 == 1 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 4 * *(uint16_t *)(v6 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v7 != 1 )
            return 1;
          v8 = *(uint16_t *)(v6 + 12);
          result = 1;
          if ( *(uint16_t *)(v6 + 12) != 0 )
          {
            v9 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48);
            v10 = (uint32_t *)(dest);
            do
            {
              --v8;
              *v10 = *v9++;
              v10 = (uint32_t *)((char *)v10 + a4);
            }
            while ( v8 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector2d_int_d23811  (binary VA: 0xe64550)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector2d_int_d23811(int a1, uint16_t a2, void *dest, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 4) != 0 )
      {
        if ( a4 != 8 && a4 != 0 )
          goto LABEL_6;
        if ( v7 == 2 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 8 * *(uint16_t *)(v6 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v7 != 2 )
            return 1;
          v8 = *(uint16_t *)(v6 + 12);
          result = 1;
          if ( *(uint16_t *)(v6 + 12) != 0 )
          {
            v9 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48);
            v10 = (uint32_t *)(dest);
            do
            {
              --v8;
              *v10 = *v9;
              v10[1] = v9[1];
              v9 += 2;
              v10 = (uint32_t *)((char *)v10 + a4);
            }
            while ( v8 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector3d_int_fe3636  (binary VA: 0xe64660)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector3d_int_fe3636(int a1, uint16_t a2, void *dest, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 8) != 0 )
      {
        if ( a4 != 12 && a4 != 0 )
          goto LABEL_6;
        if ( v7 == 3 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 12 * *(uint16_t *)(v6 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v7 != 3 )
            return 1;
          v8 = *(uint16_t *)(v6 + 12);
          result = 1;
          if ( *(uint16_t *)(v6 + 12) != 0 )
          {
            v9 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48);
            v10 = (uint32_t *)(dest);
            do
            {
              --v8;
              *v10 = *v9;
              v10[1] = v9[1];
              v10[2] = v9[2];
              v9 += 3;
              v10 = (uint32_t *)((char *)v10 + a4);
            }
            while ( v8 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector4d_int_6b3724  (binary VA: 0xe64780)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector4d_int_6b3724(int a1, uint16_t a2, void *dest, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x10) != 0 )
      {
        if ( a4 != 16 && a4 != 0 )
          goto LABEL_6;
        if ( v7 == 4 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 16 * *(uint16_t *)(v6 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v7 != 4 )
            return 1;
          v8 = *(uint16_t *)(v6 + 12);
          result = 1;
          if ( *(uint16_t *)(v6 + 12) != 0 )
          {
            v9 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48);
            v10 = (uint32_t *)(dest);
            do
            {
              --v8;
              *v10 = *v9;
              v10[1] = v9[1];
              v10[2] = v9[2];
              v10[3] = v9[3];
              v9 += 4;
              v10 = (uint32_t *)((char *)v10 + a4);
            }
            while ( v8 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_float_id_3558c8  (binary VA: 0xe648a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_float_id_3558c8(int a1, uint16_t a2, void *dest, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int *v8;
  int v9;
  uint32_t *v10;
  int v11;
  float *v12;
  float v13; // xmm0_4

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x20) != 0 )
      {
        if ( a4 != 4 && a4 != 0 )
          goto LABEL_6;
        if ( v7 == 5 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 4 * *(uint16_t *)(v6 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          v8 = (int *)(*(uint32_t *)(v6 + 4) + a1 + 48);
          if ( v7 == 1 )
          {
            v11 = *(uint16_t *)(v6 + 12);
            result = 1;
            if ( *(uint16_t *)(v6 + 12) != 0 )
            {
              v12 = (float *)dest;
              do
              {
                v13 = (float)*v8;
                --v11;
                ++v8;
                *v12 = v13;
                v12 = (float *)((char *)v12 + a4);
              }
              while ( v11 != 0 );
              return 1;
            }
          }
          else
          {
            if ( v7 != 5 )
              return 1;
            v9 = *(uint16_t *)(v6 + 12);
            result = 1;
            if ( *(uint16_t *)(v6 + 12) != 0 )
            {
              v10 = (uint32_t *)(dest);
              do
              {
                --v9;
                *v10 = *v8++;
                v10 = (uint32_t *)((char *)v10 + a4);
              }
              while ( v9 != 0 );
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector2d_float_6937bb  (binary VA: 0xe649f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector2d_float_6937bb(int a1, uint16_t a2, void *dest, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x40) != 0 )
      {
        if ( a4 != 8 && a4 != 0 )
          goto LABEL_6;
        if ( v7 == 6 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 8 * *(uint16_t *)(v6 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v7 != 6 )
            return 1;
          v8 = *(uint16_t *)(v6 + 12);
          result = 1;
          if ( *(uint16_t *)(v6 + 12) != 0 )
          {
            v9 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48);
            v10 = (uint32_t *)(dest);
            do
            {
              --v8;
              *v10 = *v9;
              v10[1] = v9[1];
              v9 += 2;
              v10 = (uint32_t *)((char *)v10 + a4);
            }
            while ( v8 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector3d_float_29deee  (binary VA: 0xe64b00)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector3d_float_29deee(int a1, uint16_t a2, void *dest, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( SLOBYTE(glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7]) < 0 )
      {
        if ( a4 != 12 && a4 != 0 )
          goto LABEL_6;
        if ( v7 == 7 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 12 * *(uint16_t *)(v6 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v7 != 7 )
            return 1;
          v8 = *(uint16_t *)(v6 + 12);
          result = 1;
          if ( *(uint16_t *)(v6 + 12) != 0 )
          {
            v9 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48);
            v10 = (uint32_t *)(dest);
            do
            {
              --v8;
              *v10 = *v9;
              v10[1] = v9[1];
              v10[2] = v9[2];
              v9 += 3;
              v10 = (uint32_t *)((char *)v10 + a4);
            }
            while ( v8 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_CMatrix2_float_d5ce21  (binary VA: 0xe64c20)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_CMatrix2_float_d5ce21(int a1, uint16_t a2, void *dest, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x200) != 0 )
      {
        if ( a4 != 16 && a4 != 0 )
          goto LABEL_6;
        if ( v7 == 9 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 16 * *(uint16_t *)(v6 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v7 != 9 )
            return 1;
          v8 = *(uint16_t *)(v6 + 12);
          result = 1;
          if ( *(uint16_t *)(v6 + 12) != 0 )
          {
            v9 = (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48);
            v10 = (uint32_t *)(dest);
            do
            {
              --v8;
              *v10 = *v9;
              v10[1] = v9[1];
              v10[2] = v9[2];
              v10[3] = v9[3];
              v9 += 4;
              v10 = (uint32_t *)((char *)v10 + a4);
            }
            while ( v8 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_video_ITexture_b9ea82  (binary VA: 0xe64d40)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_video_ITexture_b9ea82(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;
  int v6;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && (unsigned int)*(uint8_t *)(v6 + 9) - 12 <= 4 )
    {
      if ( a4 == 4 || (result = 1, a4 == 0) )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 4 * *(uint16_t *)(v6 + 12));
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_int_id_16b412  (binary VA: 0xe65450)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_int_id_16b412(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 1 && *(uint16_t *)(v5 + 12) > a3 )
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 4 * a3) = *a4;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector2d_int_151610  (binary VA: 0xe654c0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector2d_int_151610(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 2 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 8 * a3);
      *v6 = *a4;
      v6[1] = a4[1];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector3d_int_e3d2fa  (binary VA: 0xe65550)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector3d_int_e3d2fa(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 3 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 12 * a3);
      *v6 = *a4;
      v6[1] = a4[1];
      v6[2] = a4[2];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector4d_int_38cb11  (binary VA: 0xe655e0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector4d_int_38cb11(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 4 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 16 * a3);
      *v6 = *a4;
      v6[1] = a4[1];
      v6[2] = a4[2];
      v6[3] = a4[3];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_float_id_ca1afb  (binary VA: 0xe65670)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_float_id_ca1afb(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 5 && *(uint16_t *)(v5 + 12) > a3 )
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 4 * a3) = *a4;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector2d_float_3d6e87  (binary VA: 0xe656e0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector2d_float_3d6e87(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 6 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 8 * a3);
      *v6 = *a4;
      v6[1] = a4[1];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector3d_float_99bb32  (binary VA: 0xe65770)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector3d_float_99bb32(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 7 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 12 * a3);
      *v6 = *a4;
      v6[1] = a4[1];
      v6[2] = a4[2];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector4d_float_a8602d  (binary VA: 0xe65800)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector4d_float_a8602d(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 8 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 16 * a3);
      *v6 = *a4;
      v6[1] = a4[1];
      v6[2] = a4[2];
      v6[3] = a4[3];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_CMatrix2_float_52f061  (binary VA: 0xe65890)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_CMatrix2_float_52f061(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 9 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 16 * a3);
      *v6 = *a4;
      v6[1] = a4[1];
      v6[2] = a4[2];
      v6[3] = a4[3];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_CMatrix3_float_049364  (binary VA: 0xe65920)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_CMatrix3_float_049364(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 10 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 36 * a3);
      *v6 = *a4;
      v6[1] = a4[1];
      v6[2] = a4[2];
      v6[3] = a4[3];
      v6[4] = a4[4];
      v6[5] = a4[5];
      v6[6] = a4[6];
      v6[7] = a4[7];
      v6[8] = a4[8];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_video_SColor_a8fdc3  (binary VA: 0xe659d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_video_SColor_a8fdc3(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 17 && *(uint16_t *)(v5 + 12) > a3 )
    {
      *(uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 4 * a3) = *a4;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_video_SColorf_c9d5a3  (binary VA: 0xe65a40)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_video_SColorf_c9d5a3(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 18 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 16 * a3);
      *v6 = *a4;
      v6[1] = a4[1];
      v6[2] = a4[2];
      v6[3] = a4[3];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_int_id_6e67d0  (binary VA: 0xe65ad0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_int_id_6e67d0(int a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  float *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 2) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = (float *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
        if ( v6 == 1 )
        {
          *v7 = *a4;
          return 1;
        }
        else
        {
          if ( v6 == 5 )
            *v7 = (float)*(int *)a4;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector2d_int_fce8c2  (binary VA: 0xe65b80)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector2d_int_fce8c2(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 4) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        if ( v6 == 2 )
        {
          v7 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4));
          *v7 = *a4;
          v7[1] = a4[1];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector3d_int_a7c5aa  (binary VA: 0xe65c20)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector3d_int_a7c5aa(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 8) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        if ( v6 == 3 )
        {
          v7 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4));
          *v7 = *a4;
          v7[1] = a4[1];
          v7[2] = a4[2];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector4d_int_54da2c  (binary VA: 0xe65cd0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector4d_int_54da2c(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x10) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        if ( v6 == 4 )
        {
          v7 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4));
          *v7 = *a4;
          v7[1] = a4[1];
          v7[2] = a4[2];
          v7[3] = a4[3];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_float_id_d97248  (binary VA: 0xe65d80)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_float_id_d97248(int a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x20) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = (uint32_t *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
        if ( v6 == 1 )
        {
          *v7 = (int)*a4;
          return 1;
        }
        else
        {
          if ( v6 == 5 )
            *v7 = *(uint32_t *)a4;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector2d_float_9e9c08  (binary VA: 0xe65e30)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector2d_float_9e9c08(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x40) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        if ( v6 == 6 )
        {
          v7 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4));
          *v7 = *a4;
          v7[1] = a4[1];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector3d_float_de67e0  (binary VA: 0xe65ed0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector3d_float_de67e0(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( SLOBYTE(glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6]) < 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        if ( v6 == 7 )
        {
          v7 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4));
          *v7 = *a4;
          v7[1] = a4[1];
          v7[2] = a4[2];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector4d_float_00488f  (binary VA: 0xe65f80)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector4d_float_00488f(int a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x100) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = *(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36);
        switch ( v6 )
        {
          case 8:
          case 18:
            *(float *)v7 = *a4;
            *(float *)(v7 + 4) = a4[1];
            *(float *)(v7 + 8) = a4[2];
            *(float *)(v7 + 12) = a4[3];
            return 1;
          case 17:
            v8 = (int)(float)(a4[2] * 255.0);
            v9 = (int)(float)(a4[1] * 255.0);
            v10 = (int)(float)(a4[3] * 255.0);
            *(uint8_t *)v7 = (int)(float)(255.0 * *a4);
            *(uint8_t *)(v7 + 1) = v9;
            *(uint8_t *)(v7 + 2) = v8;
            *(uint8_t *)(v7 + 3) = v10;
            return 1;
          default:
            return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_CMatrix2_float_d247ae  (binary VA: 0xe660a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_CMatrix2_float_d247ae(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x200) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = *(uint32_t *)(a1 + 36);
        v8 = *(uint32_t *)(v5 + 4);
        if ( v6 == 9 )
        {
          *(uint32_t *)(v7 + v8) = *a4;
          *(uint32_t *)(v7 + v8 + 4) = a4[1];
          *(uint32_t *)(v7 + v8 + 8) = a4[2];
          *(uint32_t *)(v7 + v8 + 12) = a4[3];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_CMatrix3_float_eabcdd  (binary VA: 0xe66150)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_CMatrix3_float_eabcdd(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x400) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = *(uint32_t *)(a1 + 36);
        v8 = *(uint32_t *)(v5 + 4);
        if ( v6 == 10 )
        {
          *(uint32_t *)(v7 + v8) = *a4;
          *(uint32_t *)(v7 + v8 + 4) = a4[1];
          *(uint32_t *)(v7 + v8 + 8) = a4[2];
          *(uint32_t *)(v7 + v8 + 12) = a4[3];
          *(uint32_t *)(v7 + v8 + 16) = a4[4];
          *(uint32_t *)(v7 + v8 + 20) = a4[5];
          *(uint32_t *)(v7 + v8 + 24) = a4[6];
          *(uint32_t *)(v7 + v8 + 28) = a4[7];
          *(uint32_t *)(v7 + v8 + 32) = a4[8];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_video_SColor_a2a5d9  (binary VA: 0xe66220)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_video_SColor_a2a5d9(int a1, uint16_t a2, unsigned int a3, uint8_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm2_4
  float v10; // xmm1_4

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x20000) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = *(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36);
        if ( v6 == 17 )
        {
          *(uint32_t *)v7 = *(uint32_t *)a4;
          return 1;
        }
        else if ( v6 == 18 || v6 == 8 )
        {
          v8 = *a4;
          v9 = (float)a4[2] * 0.003921569f;
          v10 = (float)a4[3] * 0.003921569f;
          *(float *)(v7 + 4) = (float)a4[1] * 0.003921569f;
          *(float *)(v7 + 8) = v9;
          *(float *)(v7 + 12) = v10;
          *(float *)v7 = (float)v8 * 0.003921569f;
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_video_SColorf_ea6ba4  (binary VA: 0xe66320)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_video_SColorf_ea6ba4(int a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x40000) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = *(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36);
        switch ( v6 )
        {
          case 8:
          case 18:
            *(float *)v7 = *a4;
            *(float *)(v7 + 4) = a4[1];
            *(float *)(v7 + 8) = a4[2];
            *(float *)(v7 + 12) = a4[3];
            return 1;
          case 17:
            v8 = (int)(float)(a4[2] * 255.0);
            v9 = (int)(float)(a4[1] * 255.0);
            v10 = (int)(float)(a4[3] * 255.0);
            *(uint8_t *)v7 = (int)(float)(255.0 * *a4);
            *(uint8_t *)(v7 + 1) = v9;
            *(uint8_t *)(v7 + 2) = v8;
            *(uint8_t *)(v7 + 3) = v10;
            return 1;
          default:
            return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_int_id_16b412  (binary VA: 0xe66440)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_int_id_16b412(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;

  result = 0;
  v7 = src;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 1 )
    {
      if ( a6 == 4 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 4 * a4), src, 4 * a5);
        return 1;
      }
      else
      {
        v10 = *(uint32_t *)(v9 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v11 = (uint32_t *)(v10 + *(uint32_t *)(a1 + 36) + 4 * a4);
          do
          {
            --v8;
            *v11 = *v7;
            v7 = (uint32_t *)((char *)v7 + a6);
            ++v11;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector2d_int_151610  (binary VA: 0xe66520)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector2d_int_151610(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;

  result = 0;
  v7 = src;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 2 )
    {
      if ( a6 == 8 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 8 * a4), src, 8 * a5);
        return 1;
      }
      else
      {
        v10 = *(uint32_t *)(v9 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v11 = (uint32_t *)(v10 + *(uint32_t *)(a1 + 36) + 8 * a4);
          do
          {
            --v8;
            *v11 = *v7;
            v11[1] = v7[1];
            v7 = (uint32_t *)((char *)v7 + a6);
            v11 += 2;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector3d_int_e3d2fa  (binary VA: 0xe665f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector3d_int_e3d2fa(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v7 = src;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 3 )
    {
      if ( a6 == 12 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 12 * a4), src, 12 * a5);
        return 1;
      }
      else
      {
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 12 * a4);
          do
          {
            --v8;
            *v10 = *v7;
            v10[1] = v7[1];
            v10[2] = v7[2];
            v7 = (uint32_t *)((char *)v7 + a6);
            v10 += 3;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector4d_int_38cb11  (binary VA: 0xe666e0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector4d_int_38cb11(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;

  result = 0;
  v7 = src;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 4 )
    {
      if ( a6 == 16 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 16 * a4), src, 16 * a5);
        return 1;
      }
      else
      {
        v10 = *(uint32_t *)(v9 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v11 = (uint32_t *)(16 * a4 + v10 + *(uint32_t *)(a1 + 36));
          do
          {
            --v8;
            *v11 = *v7;
            v11[1] = v7[1];
            v11[2] = v7[2];
            v11[3] = v7[3];
            v7 = (uint32_t *)((char *)v7 + a6);
            v11 += 4;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_float_id_ca1afb  (binary VA: 0xe667c0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_float_id_ca1afb(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;

  result = 0;
  v7 = src;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 5 )
    {
      if ( a6 == 4 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 4 * a4), src, 4 * a5);
        return 1;
      }
      else
      {
        v10 = *(uint32_t *)(v9 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v11 = (uint32_t *)(v10 + *(uint32_t *)(a1 + 36) + 4 * a4);
          do
          {
            --v8;
            *v11 = *v7;
            v7 = (uint32_t *)((char *)v7 + a6);
            ++v11;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector2d_float_3d6e87  (binary VA: 0xe668a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector2d_float_3d6e87(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;

  result = 0;
  v7 = src;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 6 )
    {
      if ( a6 == 8 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 8 * a4), src, 8 * a5);
        return 1;
      }
      else
      {
        v10 = *(uint32_t *)(v9 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v11 = (uint32_t *)(v10 + *(uint32_t *)(a1 + 36) + 8 * a4);
          do
          {
            --v8;
            *v11 = *v7;
            v11[1] = v7[1];
            v7 = (uint32_t *)((char *)v7 + a6);
            v11 += 2;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector3d_float_99bb32  (binary VA: 0xe66970)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector3d_float_99bb32(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v7 = src;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 7 )
    {
      if ( a6 == 12 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 12 * a4), src, 12 * a5);
        return 1;
      }
      else
      {
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 12 * a4);
          do
          {
            --v8;
            *v10 = *v7;
            v10[1] = v7[1];
            v10[2] = v7[2];
            v7 = (uint32_t *)((char *)v7 + a6);
            v10 += 3;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector4d_float_a8602d  (binary VA: 0xe66a60)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_vector4d_float_a8602d(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;

  result = 0;
  v7 = src;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 8 )
    {
      if ( a6 == 16 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 16 * a4), src, 16 * a5);
        return 1;
      }
      else
      {
        v10 = *(uint32_t *)(v9 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v11 = (uint32_t *)(16 * a4 + v10 + *(uint32_t *)(a1 + 36));
          do
          {
            --v8;
            *v11 = *v7;
            v11[1] = v7[1];
            v11[2] = v7[2];
            v11[3] = v7[3];
            v7 = (uint32_t *)((char *)v7 + a6);
            v11 += 4;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_CMatrix2_float_52f061  (binary VA: 0xe66b40)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_CMatrix2_float_52f061(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;

  result = 0;
  v7 = src;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 9 )
    {
      if ( a6 == 16 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 16 * a4), src, 16 * a5);
        return 1;
      }
      else
      {
        v10 = *(uint32_t *)(v9 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v11 = (uint32_t *)(16 * a4 + v10 + *(uint32_t *)(a1 + 36));
          do
          {
            --v8;
            *v11 = *v7;
            v11[1] = v7[1];
            v11[2] = v7[2];
            v11[3] = v7[3];
            v7 = (uint32_t *)((char *)v7 + a6);
            v11 += 4;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_CMatrix3_float_049364  (binary VA: 0xe66c20)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_CMatrix3_float_049364(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;

  result = 0;
  v7 = src;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 10 )
    {
      if ( a6 == 36 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 36 * a4), src, 36 * a5);
        return 1;
      }
      else
      {
        result = 1;
        if ( a5 != 0 )
        {
          v10 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 36 * a4);
          do
          {
            --v8;
            *v10 = *v7;
            v10[1] = v7[1];
            v10[2] = v7[2];
            v10[3] = v7[3];
            v10[4] = v7[4];
            v10[5] = v7[5];
            v10[6] = v7[6];
            v10[7] = v7[7];
            v10[8] = v7[8];
            v7 = (uint32_t *)((char *)v7 + a6);
            v10 += 9;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_video_SColor_a8fdc3  (binary VA: 0xe66d30)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_video_SColor_a8fdc3(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;

  result = 0;
  v7 = src;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 17 )
    {
      if ( a6 == 4 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 4 * a4), src, 4 * a5);
        return 1;
      }
      else
      {
        v10 = *(uint32_t *)(v9 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v11 = (uint32_t *)(v10 + *(uint32_t *)(a1 + 36) + 4 * a4);
          do
          {
            --v8;
            *v11 = *v7;
            v7 = (uint32_t *)((char *)v7 + a6);
            ++v11;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_video_SColorf_c9d5a3  (binary VA: 0xe66e10)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_video_SColorf_c9d5a3(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  uint32_t *v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;

  result = 0;
  v7 = src;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 18 )
    {
      if ( a6 == 16 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v9 + 4) + 16 * a4), src, 16 * a5);
        return 1;
      }
      else
      {
        v10 = *(uint32_t *)(v9 + 4);
        result = 1;
        if ( a5 != 0 )
        {
          v11 = (uint32_t *)(16 * a4 + v10 + *(uint32_t *)(a1 + 36));
          do
          {
            --v8;
            *v11 = *v7;
            v11[1] = v7[1];
            v11[2] = v7[2];
            v11[3] = v7[3];
            v7 = (uint32_t *)((char *)v7 + a6);
            v11 += 4;
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_int_id_6e67d0  (binary VA: 0xe66ef0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_int_id_6e67d0(int a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  int *v14;
  float v15; // xmm0_4
  uint32_t *v16;
  uint32_t *v17;
  int v18;

  result = 0;
  v7 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v8 = 16 * a2;
    v9 = *(uint32_t *)(a1 + 32) + v8 == 0;
    v10 = *(uint32_t *)(a1 + 32) + v8;
    v18 = v10;
    if ( !v9 )
    {
      v11 = *(uint8_t *)(v10 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v11] & 2) != 0 )
      {
        if ( a6 != 4 && a6 != 0 )
          goto LABEL_6;
        if ( v11 == 1 )
        {
          memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v18 + 4) + 4 * a4), src, 4 * a5);
          return 1;
        }
        result = 1;
        if ( a6 != 0 )
        {
LABEL_6:
          v12 = *(uint32_t *)(v18 + 4) + *(uint32_t *)(a1 + 36);
          if ( v11 == 1 )
          {
            result = 1;
            if ( a5 != 0 )
            {
              v16 = (uint32_t *)(src);
              v17 = (uint32_t *)(v12 + 4 * a4);
              do
              {
                --v7;
                *v17 = *v16;
                v16 = (uint32_t *)((char *)v16 + a6);
                ++v17;
              }
              while ( v7 != 0 );
              return 1;
            }
          }
          else
          {
            if ( v11 != 5 )
              return 1;
            result = 1;
            if ( a5 != 0 )
            {
              v13 = (float *)(v12 + 4 * a4);
              v14 = (int *)src;
              do
              {
                v15 = (float)*v14;
                --v7;
                v14 = (int *)((char *)v14 + a6);
                *v13++ = v15;
              }
              while ( v7 != 0 );
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector2d_int_fce8c2  (binary VA: 0xe67040)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector2d_int_fce8c2(int a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;

  result = 0;
  v7 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v8 = 16 * a2;
    v9 = *(uint32_t *)(a1 + 32) + v8 == 0;
    v10 = *(uint32_t *)(a1 + 32) + v8;
    v14 = v10;
    if ( !v9 )
    {
      v11 = *(uint8_t *)(v10 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v11] & 4) != 0 )
      {
        if ( a6 != 8 && a6 != 0 )
          goto LABEL_9;
        if ( v11 == 2 )
        {
          memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v14 + 4) + 8 * a4), src, 8 * a5);
          return 1;
        }
        result = 1;
        if ( a6 != 0 )
        {
LABEL_9:
          result = 1;
          if ( v11 == 2 && a5 != 0 )
          {
            v12 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v14 + 4) + 8 * a4);
            v13 = (uint32_t *)(src);
            do
            {
              --v7;
              *v12 = *v13;
              v12[1] = v13[1];
              v13 = (uint32_t *)((char *)v13 + a6);
              v12 += 2;
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector3d_int_a7c5aa  (binary VA: 0xe67160)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector3d_int_a7c5aa(int a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;

  result = 0;
  v7 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v8 = 16 * a2;
    v9 = *(uint32_t *)(a1 + 32) + v8 == 0;
    v10 = *(uint32_t *)(a1 + 32) + v8;
    v14 = v10;
    if ( !v9 )
    {
      v11 = *(uint8_t *)(v10 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v11] & 8) != 0 )
      {
        if ( a6 != 12 && a6 != 0 )
          goto LABEL_9;
        if ( v11 == 3 )
        {
          memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v14 + 4) + 12 * a4), src, 12 * a5);
          return 1;
        }
        result = 1;
        if ( a6 != 0 )
        {
LABEL_9:
          result = 1;
          if ( v11 == 3 && a5 != 0 )
          {
            v12 = (uint32_t *)(src);
            v13 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v14 + 4) + 12 * a4);
            do
            {
              --v7;
              *v13 = *v12;
              v13[1] = v12[1];
              v13[2] = v12[2];
              v12 = (uint32_t *)((char *)v12 + a6);
              v13 += 3;
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector4d_int_54da2c  (binary VA: 0xe67290)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector4d_int_54da2c(int a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;

  result = 0;
  v7 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v8 = 16 * a2;
    v9 = *(uint32_t *)(a1 + 32) + v8 == 0;
    v10 = *(uint32_t *)(a1 + 32) + v8;
    v14 = v10;
    if ( !v9 )
    {
      v11 = *(uint8_t *)(v10 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v11] & 0x10) != 0 )
      {
        if ( a6 != 16 && a6 != 0 )
          goto LABEL_9;
        if ( v11 == 4 )
        {
          memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v14 + 4) + 16 * a4), src, 16 * a5);
          return 1;
        }
        result = 1;
        if ( a6 != 0 )
        {
LABEL_9:
          result = 1;
          if ( v11 == 4 && a5 != 0 )
          {
            v12 = (uint32_t *)(src);
            v13 = (uint32_t *)(16 * a4 + *(uint32_t *)(a1 + 36) + *(uint32_t *)(v14 + 4));
            do
            {
              --v7;
              *v13 = *v12;
              v13[1] = v12[1];
              v13[2] = v12[2];
              v13[3] = v12[3];
              v12 = (uint32_t *)((char *)v12 + a6);
              v13 += 4;
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_float_id_d97248  (binary VA: 0xe673c0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_float_id_d97248(int a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  float *v15;
  uint32_t *v16;
  int v17;

  result = 0;
  v7 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v8 = 16 * a2;
    v9 = *(uint32_t *)(a1 + 32) + v8 == 0;
    v10 = *(uint32_t *)(a1 + 32) + v8;
    v17 = v10;
    if ( !v9 )
    {
      v11 = *(uint8_t *)(v10 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v11] & 0x20) != 0 )
      {
        if ( a6 != 4 && a6 != 0 )
          goto LABEL_6;
        if ( v11 == 5 )
        {
          memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v17 + 4) + 4 * a4), src, 4 * a5);
          return 1;
        }
        result = 1;
        if ( a6 != 0 )
        {
LABEL_6:
          v12 = *(uint32_t *)(v17 + 4) + *(uint32_t *)(a1 + 36);
          if ( v11 == 1 )
          {
            result = 1;
            if ( a5 != 0 )
            {
              v15 = (float *)src;
              v16 = (uint32_t *)(v12 + 4 * a4);
              do
              {
                --v7;
                *v16 = (int)*v15;
                v15 = (float *)((char *)v15 + a6);
                ++v16;
              }
              while ( v7 != 0 );
              return 1;
            }
          }
          else
          {
            if ( v11 != 5 )
              return 1;
            result = 1;
            if ( a5 != 0 )
            {
              v13 = (uint32_t *)(v12 + 4 * a4);
              v14 = (uint32_t *)(src);
              do
              {
                --v7;
                *v13 = *v14;
                v14 = (uint32_t *)((char *)v14 + a6);
                ++v13;
              }
              while ( v7 != 0 );
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector2d_float_9e9c08  (binary VA: 0xe67510)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector2d_float_9e9c08(int a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;

  result = 0;
  v7 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v8 = 16 * a2;
    v9 = *(uint32_t *)(a1 + 32) + v8 == 0;
    v10 = *(uint32_t *)(a1 + 32) + v8;
    v14 = v10;
    if ( !v9 )
    {
      v11 = *(uint8_t *)(v10 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v11] & 0x40) != 0 )
      {
        if ( a6 != 8 && a6 != 0 )
          goto LABEL_9;
        if ( v11 == 6 )
        {
          memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v14 + 4) + 8 * a4), src, 8 * a5);
          return 1;
        }
        result = 1;
        if ( a6 != 0 )
        {
LABEL_9:
          result = 1;
          if ( v11 == 6 && a5 != 0 )
          {
            v12 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v14 + 4) + 8 * a4);
            v13 = (uint32_t *)(src);
            do
            {
              --v7;
              *v12 = *v13;
              v12[1] = v13[1];
              v13 = (uint32_t *)((char *)v13 + a6);
              v12 += 2;
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector3d_float_de67e0  (binary VA: 0xe67630)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector3d_float_de67e0(int a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;

  result = 0;
  v7 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v8 = 16 * a2;
    v9 = *(uint32_t *)(a1 + 32) + v8 == 0;
    v10 = *(uint32_t *)(a1 + 32) + v8;
    v14 = v10;
    if ( !v9 )
    {
      v11 = *(uint8_t *)(v10 + 9);
      if ( SLOBYTE(glitch::video::detail::SShaderParameterTypeInspection::Convertions[v11]) < 0 )
      {
        if ( a6 != 12 && a6 != 0 )
          goto LABEL_9;
        if ( v11 == 7 )
        {
          memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v14 + 4) + 12 * a4), src, 12 * a5);
          return 1;
        }
        result = 1;
        if ( a6 != 0 )
        {
LABEL_9:
          result = 1;
          if ( v11 == 7 && a5 != 0 )
          {
            v12 = (uint32_t *)(src);
            v13 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v14 + 4) + 12 * a4);
            do
            {
              --v7;
              *v13 = *v12;
              v13[1] = v12[1];
              v13[2] = v12[2];
              v12 = (uint32_t *)((char *)v12 + a6);
              v13 += 3;
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector4d_float_00488f  (binary VA: 0xe67760)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_vector4d_float_00488f(int a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  int v17;
  int v18;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v7 = 16 * a2;
    v8 = *(uint32_t *)(a1 + 32) + v7 == 0;
    v9 = *(uint32_t *)(a1 + 32) + v7;
    v18 = v9;
    if ( !v8 )
    {
      v10 = *(uint8_t *)(v9 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v10] & 0x100) != 0 )
      {
        if ( a6 != 16 && a6 != 0 )
          goto LABEL_6;
        if ( v10 == 8 )
        {
          memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v18 + 4) + 16 * a4), src, 16 * a5);
          return 1;
        }
        result = 1;
        if ( a6 != 0 )
        {
LABEL_6:
          v11 = *(uint32_t *)(v18 + 4) + *(uint32_t *)(a1 + 36);
          if ( v10 == 17 )
          {
            sub_DFF070(v11, (float *)src, a4, a5, a6);
            return 1;
          }
          if ( v10 == 18 )
          {
            v12 = (uint32_t *)(16 * a4 + v11);
            result = 1;
            v13 = &v12[4 * a5];
            if ( v12 != v13 )
            {
              v14 = (uint32_t *)(src);
              do
              {
                *v12 = *v14;
                v12[1] = v14[1];
                v12[2] = v14[2];
                v12[3] = v14[3];
                v12 += 4;
                v14 = (uint32_t *)((char *)v14 + a6);
              }
              while ( v13 != v12 );
              return 1;
            }
          }
          else
          {
            result = 1;
            if ( v10 == 8 && a5 != 0 )
            {
              v15 = (uint32_t *)(src);
              v16 = (uint32_t *)(16 * a4 + v11);
              v17 = a5;
              do
              {
                --v17;
                *v16 = *v15;
                v16[1] = v15[1];
                v16[2] = v15[2];
                v16[3] = v15[3];
                v15 = (uint32_t *)((char *)v15 + a6);
                v16 += 4;
              }
              while ( v17 != 0 );
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_CMatrix2_float_d247ae  (binary VA: 0xe67910)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_CMatrix2_float_d247ae(int a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;

  result = 0;
  v7 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v8 = 16 * a2;
    v9 = *(uint32_t *)(a1 + 32) + v8 == 0;
    v10 = *(uint32_t *)(a1 + 32) + v8;
    v14 = v10;
    if ( !v9 )
    {
      v11 = *(uint8_t *)(v10 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v11] & 0x200) != 0 )
      {
        if ( a6 != 16 && a6 != 0 )
          goto LABEL_9;
        if ( v11 == 9 )
        {
          memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v14 + 4) + 16 * a4), src, 16 * a5);
          return 1;
        }
        result = 1;
        if ( a6 != 0 )
        {
LABEL_9:
          result = 1;
          if ( v11 == 9 && a5 != 0 )
          {
            v12 = (uint32_t *)(src);
            v13 = (uint32_t *)(16 * a4 + *(uint32_t *)(a1 + 36) + *(uint32_t *)(v14 + 4));
            do
            {
              --v7;
              *v13 = *v12;
              v13[1] = v12[1];
              v13[2] = v12[2];
              v13[3] = v12[3];
              v12 = (uint32_t *)((char *)v12 + a6);
              v13 += 4;
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_video_SColor_a2a5d9  (binary VA: 0xe67a40)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_video_SColor_a2a5d9(int a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  int v12;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v7 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v7 != 0 )
    {
      v8 = *(uint8_t *)(v7 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v8] & 0x20000) != 0 )
      {
        if ( a6 != 4 && a6 != 0 )
          goto LABEL_6;
        if ( v8 == 17 )
        {
          memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v7 + 4) + 4 * a4), src, 4 * a5);
          return 1;
        }
        result = 1;
        if ( a6 != 0 )
        {
LABEL_6:
          v9 = *(uint32_t *)(v7 + 4) + *(uint32_t *)(a1 + 36);
          switch ( v8 )
          {
            case 8:
              sub_DFF1B0(v9, (uint8_t *)src, a4, a5, a6);
              return 1;
            case 17:
              result = 1;
              if ( a5 != 0 )
              {
                v10 = (uint32_t *)(src);
                v11 = (uint32_t *)(v9 + 4 * a4);
                v12 = a5;
                do
                {
                  --v12;
                  *v11 = *v10;
                  v10 = (uint32_t *)((char *)v10 + a6);
                  ++v11;
                }
                while ( v12 != 0 );
                return 1;
              }
              break;
            case 18:
              sub_DFF230(v9, (uint8_t *)src, a4, a5, a6);
              return 1;
            default:
              return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_video_SColorf_ea6ba4  (binary VA: 0xe67bd0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_video_SColorf_ea6ba4(int a1, uint16_t a2, void *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  bool v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  int v18;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v7 = 16 * a2;
    v8 = *(uint32_t *)(a1 + 32) + v7 == 0;
    v9 = *(uint32_t *)(a1 + 32) + v7;
    v18 = v9;
    if ( !v8 )
    {
      v10 = *(uint8_t *)(v9 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v10] & 0x40000) != 0 )
      {
        if ( a6 != 16 && a6 != 0 )
          goto LABEL_6;
        if ( v10 == 18 )
        {
          memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v18 + 4) + 16 * a4), src, 16 * a5);
          return 1;
        }
        result = 1;
        if ( a6 != 0 )
        {
LABEL_6:
          v11 = *(uint32_t *)(v18 + 4) + *(uint32_t *)(a1 + 36);
          switch ( v10 )
          {
            case 8:
              v15 = (uint32_t *)(16 * a4 + v11);
              result = 1;
              v16 = &v15[4 * a5];
              if ( v15 != v16 )
              {
                v17 = (uint32_t *)(src);
                do
                {
                  *v15 = *v17;
                  v15[1] = v17[1];
                  v15[2] = v17[2];
                  v15[3] = v17[3];
                  v15 += 4;
                  v17 = (uint32_t *)((char *)v17 + a6);
                }
                while ( v16 != v15 );
                return 1;
              }
              break;
            case 17:
              sub_DFF110(v11, (float *)src, a4, a5, a6);
              return 1;
            case 18:
              result = 1;
              if ( a5 != 0 )
              {
                v12 = (uint32_t *)(src);
                v13 = (uint32_t *)(16 * a4 + v11);
                v14 = a5;
                do
                {
                  --v14;
                  *v13 = *v12;
                  v13[1] = v12[1];
                  v13[2] = v12[2];
                  v13[3] = v12[3];
                  v12 = (uint32_t *)((char *)v12 + a6);
                  v13 += 4;
                }
                while ( v14 != 0 );
                return 1;
              }
              break;
            default:
              return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterElement_unsigned_char_b1e886  (binary VA: 0xe67d90)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterElement<unsigned char>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterElement_unsigned_char_b1e886(int a1, uint16_t a2, unsigned int a3, uint8_t a4, uint8_t a5)
{
  int result;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint16_t *v11;
  unsigned int v12;
  uint16_t *v13;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[v7] == 0
        && glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[v7] > a4
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 11 )
        {
          v8 = (uint32_t *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36));
          v9 = (uint32_t *)*v8;
          if ( *v8 == 0 )
          {
            v10 = sub_DFF370();
            v9 = v10;
            v11 = (uint16_t *)(v10);
            v12 = 64;
            if ( ((uint8_t)(uintptr_t)(v10) & 1) != 0 )
            {
              *(uint8_t *)v10 = 0;
              v11 = (uint16_t *)((char *)v10 + 1);
              LOWORD(v12) = 63;
            }
            if ( ((uint8_t)(uintptr_t)(v11) & 2) != 0 )
            {
              *v11 = 0;
              v12 -= 2;
              ++v11;
            }
            memset(v11, 0, 4 * (v12 >> 2));
            v13 = &v11[2 * (v12 >> 2)];
            if ( (v12 & 2) != 0 )
              *v13++ = 0;
            if ( (v12 & 1) != 0 )
              *(uint8_t *)v13 = 0;
            *v10 = 1065353216;
            v10[5] = 1065353216;
            v10[10] = 1065353216;
            v10[15] = 1065353216;
            *v8 = (uint32_t)(uintptr_t)(v10);
          }
          *(float *)&v9[a4] = (float)((float)0 * 65536.0) + (float)a5;
          return 1;
        }
        else
        {
          *(uint8_t *)(*(uint32_t *)(v6 + 4) + a3 + *(uint32_t *)(a1 + 36) + a4) = a5;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterElement_int_id_85a0f1  (binary VA: 0xe67f00)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterElement<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterElement_int_id_85a0f1(int a1, uint16_t a2, unsigned int a3, uint8_t a4, int a5)
{
  int result;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint16_t *v11;
  unsigned int v12;
  uint16_t *v13;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[v7] == 1
        && glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[v7] > a4
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 11 )
        {
          v8 = (uint32_t *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36));
          v9 = (uint32_t *)*v8;
          if ( *v8 == 0 )
          {
            v10 = sub_DFF370();
            v9 = v10;
            v11 = (uint16_t *)(v10);
            v12 = 64;
            if ( ((uint8_t)(uintptr_t)(v10) & 1) != 0 )
            {
              *(uint8_t *)v10 = 0;
              v11 = (uint16_t *)((char *)v10 + 1);
              LOWORD(v12) = 63;
            }
            if ( ((uint8_t)(uintptr_t)(v11) & 2) != 0 )
            {
              *v11 = 0;
              v12 -= 2;
              ++v11;
            }
            memset(v11, 0, 4 * (v12 >> 2));
            v13 = &v11[2 * (v12 >> 2)];
            if ( (v12 & 2) != 0 )
              *v13++ = 0;
            if ( (v12 & 1) != 0 )
              *(uint8_t *)v13 = 0;
            *v10 = 1065353216;
            v10[5] = 1065353216;
            v10[10] = 1065353216;
            v10[15] = 1065353216;
            *v8 = (uint32_t)(uintptr_t)(v10);
          }
          *(float *)&v9[a4] = (float)a5;
          return 1;
        }
        else
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v6 + 4) + 4 * (a3 + a4)) = a5;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterElement_float_id_f195e7  (binary VA: 0xe68060)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterElement<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterElement_float_id_f195e7(int a1, uint16_t a2, unsigned int a3, uint8_t a4, int a5)
{
  int result;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint16_t *v11;
  unsigned int v12;
  uint16_t *v13;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( glitch::video::detail::SShaderParameterTypeInspection::ValueTypeBaseType[v7] == 5
        && glitch::video::detail::SShaderParameterTypeInspection::ValueTypeArraySize[v7] > a4
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 11 )
        {
          v8 = (uint32_t *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36));
          v9 = (uint32_t *)*v8;
          if ( *v8 == 0 )
          {
            v10 = sub_DFF370();
            v9 = v10;
            v11 = (uint16_t *)(v10);
            v12 = 64;
            if ( ((uint8_t)(uintptr_t)(v10) & 1) != 0 )
            {
              *(uint8_t *)v10 = 0;
              v11 = (uint16_t *)((char *)v10 + 1);
              LOWORD(v12) = 63;
            }
            if ( ((uint8_t)(uintptr_t)(v11) & 2) != 0 )
            {
              *v11 = 0;
              v12 -= 2;
              ++v11;
            }
            memset(v11, 0, 4 * (v12 >> 2));
            v13 = &v11[2 * (v12 >> 2)];
            if ( (v12 & 2) != 0 )
              *v13++ = 0;
            if ( (v12 & 1) != 0 )
              *(uint8_t *)v13 = 0;
            *v10 = 1065353216;
            v10[5] = 1065353216;
            v10[10] = 1065353216;
            v10[15] = 1065353216;
            *v8 = (uint32_t)(uintptr_t)(v10);
          }
          v9[a4] = a5;
          return 1;
        }
        else
        {
          *(uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v6 + 4) + 4 * (a3 + a4)) = a5;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_int_id_1312f9  (binary VA: 0xe681c0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_int_id_1312f9(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 1 && *(uint16_t *)(v5 + 12) > a3 )
    {
      *a4 = *(uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 4 * a3);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector2d_int_a96c77  (binary VA: 0xe68230)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector2d_int_a96c77(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 2 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 8 * a3);
      *a4 = *v6;
      a4[1] = v6[1];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector3d_int_9639cc  (binary VA: 0xe682b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector3d_int_9639cc(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 3 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 12 * a3);
      *a4 = *v6;
      a4[1] = v6[1];
      a4[2] = v6[2];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector4d_int_919deb  (binary VA: 0xe68340)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector4d_int_919deb(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 4 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 16 * a3);
      *a4 = *v6;
      a4[1] = v6[1];
      a4[2] = v6[2];
      a4[3] = v6[3];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_float_id_7a7507  (binary VA: 0xe683d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_float_id_7a7507(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 5 && *(uint16_t *)(v5 + 12) > a3 )
    {
      *a4 = *(uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 4 * a3);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector2d_float_5a50a3  (binary VA: 0xe68440)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector2d_float_5a50a3(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 6 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 8 * a3);
      *a4 = *v6;
      a4[1] = v6[1];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector3d_float_ee07cf  (binary VA: 0xe684d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector3d_float_ee07cf(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 7 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 12 * a3);
      *a4 = *v6;
      a4[1] = v6[1];
      a4[2] = v6[2];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector4d_float_151dd6  (binary VA: 0xe68560)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector4d_float_151dd6(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 8 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 16 * a3);
      *a4 = *v6;
      a4[1] = v6[1];
      a4[2] = v6[2];
      a4[3] = v6[3];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_CMatrix2_float_e82e17  (binary VA: 0xe685f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_CMatrix2_float_e82e17(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 9 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 16 * a3);
      *a4 = *v6;
      a4[1] = v6[1];
      a4[2] = v6[2];
      a4[3] = v6[3];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_CMatrix3_float_4a1266  (binary VA: 0xe68680)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_CMatrix3_float_4a1266(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 10 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 36 * a3);
      *a4 = *v6;
      a4[1] = v6[1];
      a4[2] = v6[2];
      a4[3] = v6[3];
      a4[4] = v6[4];
      a4[5] = v6[5];
      a4[6] = v6[6];
      a4[7] = v6[7];
      a4[8] = v6[8];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_video_ITexture_d2b90c  (binary VA: 0xe68730)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_video_ITexture_d2b90c(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && (unsigned int)*(uint8_t *)(v5 + 9) - 12 <= 4 && *(uint16_t *)(v5 + 12) > a3 )
    {
      *a4 = *(uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 4 * a3);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_video_SColor_13ebcf  (binary VA: 0xe687a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_video_SColor_13ebcf(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 17 && *(uint16_t *)(v5 + 12) > a3 )
    {
      *a4 = *(uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 4 * a3);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_video_SColorf_ccc399  (binary VA: 0xe68810)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_video_SColorf_ccc399(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  uint32_t *v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 18 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 16 * a3);
      *a4 = *v6;
      a4[1] = v6[1];
      a4[2] = v6[2];
      a4[3] = v6[3];
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_int_id_29a806  (binary VA: 0xe688a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_int_id_29a806(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 2) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = (uint32_t *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
        if ( v6 == 1 )
        {
          *a4 = *v7;
          return 1;
        }
        else
        {
          if ( v6 == 5 )
            *a4 = (int)*(float *)v7;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector2d_int_d23811  (binary VA: 0xe68950)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector2d_int_d23811(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 4) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        if ( v6 == 2 )
        {
          v7 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4));
          *a4 = *v7;
          a4[1] = v7[1];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector3d_int_fe3636  (binary VA: 0xe689f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector3d_int_fe3636(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 8) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        if ( v6 == 3 )
        {
          v7 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4));
          *a4 = *v7;
          a4[1] = v7[1];
          a4[2] = v7[2];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector4d_int_6b3724  (binary VA: 0xe68aa0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector4d_int_6b3724(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x10) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        if ( v6 == 4 )
        {
          v7 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4));
          *a4 = *v7;
          a4[1] = v7[1];
          a4[2] = v7[2];
          a4[3] = v7[3];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_float_id_3558c8  (binary VA: 0xe68b50)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_float_id_3558c8(int a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  int *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x20) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = (int *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
        if ( v6 == 1 )
        {
          *a4 = (float)*v7;
          return 1;
        }
        else
        {
          if ( v6 == 5 )
            *(uint32_t *)a4 = *v7;
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector2d_float_6937bb  (binary VA: 0xe68c00)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector2d_float_6937bb(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x40) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        if ( v6 == 6 )
        {
          v7 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4));
          *a4 = *v7;
          a4[1] = v7[1];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector3d_float_29deee  (binary VA: 0xe68ca0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector3d_float_29deee(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( SLOBYTE(glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6]) < 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        if ( v6 == 7 )
        {
          v7 = (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4));
          *a4 = *v7;
          a4[1] = v7[1];
          a4[2] = v7[2];
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector4d_float_81b044  (binary VA: 0xe68d50)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector4d_float_81b044(int a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  float *v7;
  float v8; // xmm2_4
  int v9;
  float v10; // xmm4_4

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x100) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = (float *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
        if ( v6 == 17 )
        {
          v8 = (float)*((uint8_t *)v7 + 2);
          v9 = *((uint8_t *)v7 + 3);
          v10 = (float)*(uint8_t *)v7;
          a4[1] = (float)*((uint8_t *)v7 + 1) * 0.003921569f;
          a4[2] = v8 * 0.003921569f;
          a4[3] = (float)v9 * 0.003921569f;
          *a4 = v10 * 0.003921569f;
          return 1;
        }
        else if ( v6 == 18 || v6 == 8 )
        {
          *a4 = *v7;
          a4[1] = v7[1];
          a4[2] = v7[2];
          a4[3] = v7[3];
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_CMatrix2_float_d5ce21  (binary VA: 0xe68e60)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_CMatrix2_float_d5ce21(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x200) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = *(uint32_t *)(a1 + 36);
        v8 = *(uint32_t *)(v5 + 4);
        if ( v6 == 9 )
        {
          *a4 = *(uint32_t *)(v7 + v8);
          a4[1] = *(uint32_t *)(v7 + v8 + 4);
          a4[2] = *(uint32_t *)(v7 + v8 + 8);
          a4[3] = *(uint32_t *)(v7 + v8 + 12);
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_CMatrix3_float_f6afa1  (binary VA: 0xe68f10)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_CMatrix3_float_f6afa1(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x400) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = *(uint32_t *)(a1 + 36);
        v8 = *(uint32_t *)(v5 + 4);
        if ( v6 == 10 )
        {
          *a4 = *(uint32_t *)(v7 + v8);
          a4[1] = *(uint32_t *)(v7 + v8 + 4);
          a4[2] = *(uint32_t *)(v7 + v8 + 8);
          a4[3] = *(uint32_t *)(v7 + v8 + 12);
          a4[4] = *(uint32_t *)(v7 + v8 + 16);
          a4[5] = *(uint32_t *)(v7 + v8 + 20);
          a4[6] = *(uint32_t *)(v7 + v8 + 24);
          a4[7] = *(uint32_t *)(v7 + v8 + 28);
          a4[8] = *(uint32_t *)(v7 + v8 + 32);
        }
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_video_ITexture_b9ea82  (binary VA: 0xe68fe0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_video_ITexture_b9ea82(int a1, uint16_t a2, unsigned int a3, uint32_t *a4)
{
  int result;
  int v5;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && (unsigned int)*(uint8_t *)(v5 + 9) - 12 <= 4 && *(uint16_t *)(v5 + 12) > a3 )
    {
      *a4 = *(uint32_t *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_video_SColor_444eab  (binary VA: 0xe69050)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_video_SColor_444eab(int a1, uint16_t a2, unsigned int a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  float v9; // xmm1_4
  float v10; // xmm0_4

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x20000) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = *(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36);
        if ( v6 == 17 )
        {
          *(uint32_t *)a4 = *(uint32_t *)v7;
          return 1;
        }
        else if ( v6 == 18 || v6 == 8 )
        {
          v8 = (int)(float)(*(float *)(v7 + 4) * 255.0);
          v9 = *(float *)(v7 + 12) * 255.0;
          v10 = 255.0 * *(float *)v7;
          *(uint8_t *)(a4 + 2) = (int)(float)(*(float *)(v7 + 8) * 255.0);
          *(uint8_t *)a4 = (int)v10;
          *(uint8_t *)(a4 + 1) = v8;
          *(uint8_t *)(a4 + 3) = (int)v9;
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_video_SColorf_052537  (binary VA: 0xe69140)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_video_SColorf_052537(int a1, uint16_t a2, unsigned int a3, float *a4)
{
  int result;
  int v5;
  int v6;
  float *v7;
  float v8; // xmm2_4
  int v9;
  float v10; // xmm4_4

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x40000) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = (float *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
        if ( v6 == 17 )
        {
          v8 = (float)*((uint8_t *)v7 + 2);
          v9 = *((uint8_t *)v7 + 3);
          v10 = (float)*(uint8_t *)v7;
          a4[1] = (float)*((uint8_t *)v7 + 1) * 0.003921569f;
          a4[2] = v8 * 0.003921569f;
          a4[3] = (float)v9 * 0.003921569f;
          *a4 = v10 * 0.003921569f;
          return 1;
        }
        else if ( v6 == 18 || v6 == 8 )
        {
          *a4 = *v7;
          a4[1] = v7[1];
          a4[2] = v7[2];
          a4[3] = v7[3];
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_int_id_1312f9  (binary VA: 0xe69250)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_int_id_1312f9(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = 0;
  v5 = dest;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 1 )
    {
      if ( a4 == 4 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36)), 4 * *(uint16_t *)(v6 + 12));
        return 1;
      }
      else
      {
        v7 = *(uint32_t *)(v6 + 4);
        v8 = *(uint16_t *)(v6 + 12);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v7);
          do
          {
            --v8;
            *v5 = *v9++;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector2d_int_a96c77  (binary VA: 0xe69310)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector2d_int_a96c77(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = 0;
  v5 = dest;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 2 )
    {
      if ( a4 == 8 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36)), 8 * *(uint16_t *)(v6 + 12));
        return 1;
      }
      else
      {
        v7 = *(uint32_t *)(v6 + 4);
        v8 = *(uint16_t *)(v6 + 12);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v7);
          do
          {
            --v8;
            *v5 = *v9;
            v5[1] = v9[1];
            v9 += 2;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector3d_int_9639cc  (binary VA: 0xe693e0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector3d_int_9639cc(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = 0;
  v5 = dest;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 3 )
    {
      if ( a4 == 12 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36)), 12 * *(uint16_t *)(v6 + 12));
        return 1;
      }
      else
      {
        v7 = *(uint32_t *)(v6 + 4);
        v8 = *(uint16_t *)(v6 + 12);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v7);
          do
          {
            --v8;
            *v5 = *v9;
            v5[1] = v9[1];
            v5[2] = v9[2];
            v9 += 3;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector4d_int_919deb  (binary VA: 0xe694b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector4d_int_919deb(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = 0;
  v5 = dest;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 4 )
    {
      if ( a4 == 16 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36)), 16 * *(uint16_t *)(v6 + 12));
        return 1;
      }
      else
      {
        v7 = *(uint32_t *)(v6 + 4);
        v8 = *(uint16_t *)(v6 + 12);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v7);
          do
          {
            --v8;
            *v5 = *v9;
            v5[1] = v9[1];
            v5[2] = v9[2];
            v5[3] = v9[3];
            v9 += 4;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_float_id_7a7507  (binary VA: 0xe69580)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_float_id_7a7507(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = 0;
  v5 = dest;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 5 )
    {
      if ( a4 == 4 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36)), 4 * *(uint16_t *)(v6 + 12));
        return 1;
      }
      else
      {
        v7 = *(uint32_t *)(v6 + 4);
        v8 = *(uint16_t *)(v6 + 12);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v7);
          do
          {
            --v8;
            *v5 = *v9++;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector2d_float_5a50a3  (binary VA: 0xe69640)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector2d_float_5a50a3(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = 0;
  v5 = dest;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 6 )
    {
      if ( a4 == 8 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36)), 8 * *(uint16_t *)(v6 + 12));
        return 1;
      }
      else
      {
        v7 = *(uint32_t *)(v6 + 4);
        v8 = *(uint16_t *)(v6 + 12);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v7);
          do
          {
            --v8;
            *v5 = *v9;
            v5[1] = v9[1];
            v9 += 2;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector3d_float_ee07cf  (binary VA: 0xe69710)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector3d_float_ee07cf(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = 0;
  v5 = dest;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 7 )
    {
      if ( a4 == 12 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36)), 12 * *(uint16_t *)(v6 + 12));
        return 1;
      }
      else
      {
        v7 = *(uint32_t *)(v6 + 4);
        v8 = *(uint16_t *)(v6 + 12);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v7);
          do
          {
            --v8;
            *v5 = *v9;
            v5[1] = v9[1];
            v5[2] = v9[2];
            v9 += 3;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector4d_float_151dd6  (binary VA: 0xe697e0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_vector4d_float_151dd6(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = 0;
  v5 = dest;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 8 )
    {
      if ( a4 == 16 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36)), 16 * *(uint16_t *)(v6 + 12));
        return 1;
      }
      else
      {
        v7 = *(uint32_t *)(v6 + 4);
        v8 = *(uint16_t *)(v6 + 12);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v7);
          do
          {
            --v8;
            *v5 = *v9;
            v5[1] = v9[1];
            v5[2] = v9[2];
            v5[3] = v9[3];
            v9 += 4;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_CMatrix2_float_e82e17  (binary VA: 0xe698b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_CMatrix2_float_e82e17(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = 0;
  v5 = dest;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 9 )
    {
      if ( a4 == 16 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36)), 16 * *(uint16_t *)(v6 + 12));
        return 1;
      }
      else
      {
        v7 = *(uint32_t *)(v6 + 4);
        v8 = *(uint16_t *)(v6 + 12);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v7);
          do
          {
            --v8;
            *v5 = *v9;
            v5[1] = v9[1];
            v5[2] = v9[2];
            v5[3] = v9[3];
            v9 += 4;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_CMatrix3_float_4a1266  (binary VA: 0xe69980)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_CMatrix3_float_4a1266(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = 0;
  v5 = dest;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 10 )
    {
      if ( a4 == 36 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36)), 36 * *(uint16_t *)(v6 + 12));
        return 1;
      }
      else
      {
        v7 = *(uint32_t *)(v6 + 4);
        v8 = *(uint16_t *)(v6 + 12);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v7);
          do
          {
            --v8;
            *v5 = *v9;
            v5[1] = v9[1];
            v5[2] = v9[2];
            v5[3] = v9[3];
            v5[4] = v9[4];
            v5[5] = v9[5];
            v5[6] = v9[6];
            v5[7] = v9[7];
            v5[8] = v9[8];
            v9 += 9;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_video_ITexture_d2b90c  (binary VA: 0xe69a70)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_video_ITexture_d2b90c(int a1, uint16_t a2, uint32_t *a3, int a4)
{
  int result;
  int v6;
  int *v7;
  int *v8;
  int v9;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && (unsigned int)*(uint8_t *)(v6 + 9) - 12 <= 4 )
    {
      v7 = (int *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36));
      v8 = &v7[*(uint16_t *)(v6 + 12)];
      result = 1;
      if ( v7 != v8 )
      {
        do
        {
          v9 = *v7++;
          *a3 = v9;
          a3 = (uint32_t *)((char *)a3 + a4);
        }
        while ( v8 != v7 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_video_SColor_13ebcf  (binary VA: 0xe69ae0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_video_SColor_13ebcf(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = 0;
  v5 = dest;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 17 )
    {
      if ( a4 == 4 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36)), 4 * *(uint16_t *)(v6 + 12));
        return 1;
      }
      else
      {
        v7 = *(uint32_t *)(v6 + 4);
        v8 = *(uint16_t *)(v6 + 12);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v7);
          do
          {
            --v8;
            *v5 = *v9++;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_video_SColorf_ccc399  (binary VA: 0xe69ba0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_video_SColorf_ccc399(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;

  result = 0;
  v5 = dest;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 18 )
    {
      if ( a4 == 16 || a4 == 0 )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + *(uint32_t *)(a1 + 36)), 16 * *(uint16_t *)(v6 + 12));
        return 1;
      }
      else
      {
        v7 = *(uint32_t *)(v6 + 4);
        v8 = *(uint16_t *)(v6 + 12);
        result = 1;
        if ( v8 != 0 )
        {
          v9 = (uint32_t *)(*(uint32_t *)(a1 + 36) + v7);
          do
          {
            --v8;
            *v5 = *v9;
            v5[1] = v9[1];
            v5[2] = v9[2];
            v5[3] = v9[3];
            v9 += 4;
            v5 = (uint32_t *)((char *)v5 + a4);
          }
          while ( v8 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_int_id_29a806  (binary VA: 0xe69c70)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<int>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_int_id_29a806(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 2) != 0 )
      {
        if ( a4 != 4 && a4 != 0 )
          goto LABEL_6;
        if ( v6 == 1 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 4 * *(uint16_t *)(v5 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v6 != 1 )
            return 1;
          v7 = *(uint16_t *)(v5 + 12);
          result = 1;
          if ( *(uint16_t *)(v5 + 12) != 0 )
          {
            v8 = (uint32_t *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
            v9 = (uint32_t *)(dest);
            do
            {
              --v7;
              *v9 = *v8++;
              v9 = (uint32_t *)((char *)v9 + a4);
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector2d_int_d23811  (binary VA: 0xe69d80)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::vector2d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector2d_int_d23811(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 4) != 0 )
      {
        if ( a4 != 8 && a4 != 0 )
          goto LABEL_6;
        if ( v6 == 2 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 8 * *(uint16_t *)(v5 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v6 != 2 )
            return 1;
          v7 = *(uint16_t *)(v5 + 12);
          result = 1;
          if ( *(uint16_t *)(v5 + 12) != 0 )
          {
            v8 = (uint32_t *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
            v9 = (uint32_t *)(dest);
            do
            {
              --v7;
              *v9 = *v8;
              v9[1] = v8[1];
              v8 += 2;
              v9 = (uint32_t *)((char *)v9 + a4);
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector3d_int_fe3636  (binary VA: 0xe69e90)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::vector3d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector3d_int_fe3636(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 8) != 0 )
      {
        if ( a4 != 12 && a4 != 0 )
          goto LABEL_6;
        if ( v6 == 3 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 12 * *(uint16_t *)(v5 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v6 != 3 )
            return 1;
          v7 = *(uint16_t *)(v5 + 12);
          result = 1;
          if ( *(uint16_t *)(v5 + 12) != 0 )
          {
            v8 = (uint32_t *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
            v9 = (uint32_t *)(dest);
            do
            {
              --v7;
              *v9 = *v8;
              v9[1] = v8[1];
              v9[2] = v8[2];
              v8 += 3;
              v9 = (uint32_t *)((char *)v9 + a4);
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector4d_int_6b3724  (binary VA: 0xe69fb0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::vector4d<int>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector4d_int_6b3724(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x10) != 0 )
      {
        if ( a4 != 16 && a4 != 0 )
          goto LABEL_6;
        if ( v6 == 4 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 16 * *(uint16_t *)(v5 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v6 != 4 )
            return 1;
          v7 = *(uint16_t *)(v5 + 12);
          result = 1;
          if ( *(uint16_t *)(v5 + 12) != 0 )
          {
            v8 = (uint32_t *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
            v9 = (uint32_t *)(dest);
            do
            {
              --v7;
              *v9 = *v8;
              v9[1] = v8[1];
              v9[2] = v8[2];
              v9[3] = v8[3];
              v8 += 4;
              v9 = (uint32_t *)((char *)v9 + a4);
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_float_id_3558c8  (binary VA: 0xe6a0d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<float>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_float_id_3558c8(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;
  int v6;
  int *v7;
  int v8;
  uint32_t *v9;
  int v10;
  float *v11;
  float v12; // xmm0_4

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x20) != 0 )
      {
        if ( a4 != 4 && a4 != 0 )
          goto LABEL_6;
        if ( v6 == 5 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 4 * *(uint16_t *)(v5 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          v7 = (int *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
          if ( v6 == 1 )
          {
            v10 = *(uint16_t *)(v5 + 12);
            result = 1;
            if ( *(uint16_t *)(v5 + 12) != 0 )
            {
              v11 = (float *)dest;
              do
              {
                v12 = (float)*v7;
                --v10;
                ++v7;
                *v11 = v12;
                v11 = (float *)((char *)v11 + a4);
              }
              while ( v10 != 0 );
              return 1;
            }
          }
          else
          {
            if ( v6 != 5 )
              return 1;
            v8 = *(uint16_t *)(v5 + 12);
            result = 1;
            if ( *(uint16_t *)(v5 + 12) != 0 )
            {
              v9 = (uint32_t *)(dest);
              do
              {
                --v8;
                *v9 = *v7++;
                v9 = (uint32_t *)((char *)v9 + a4);
              }
              while ( v8 != 0 );
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector2d_float_6937bb  (binary VA: 0xe6a220)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::vector2d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector2d_float_6937bb(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x40) != 0 )
      {
        if ( a4 != 8 && a4 != 0 )
          goto LABEL_6;
        if ( v6 == 6 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 8 * *(uint16_t *)(v5 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v6 != 6 )
            return 1;
          v7 = *(uint16_t *)(v5 + 12);
          result = 1;
          if ( *(uint16_t *)(v5 + 12) != 0 )
          {
            v8 = (uint32_t *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
            v9 = (uint32_t *)(dest);
            do
            {
              --v7;
              *v9 = *v8;
              v9[1] = v8[1];
              v8 += 2;
              v9 = (uint32_t *)((char *)v9 + a4);
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector3d_float_29deee  (binary VA: 0xe6a330)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::vector3d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector3d_float_29deee(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( SLOBYTE(glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6]) < 0 )
      {
        if ( a4 != 12 && a4 != 0 )
          goto LABEL_6;
        if ( v6 == 7 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 12 * *(uint16_t *)(v5 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v6 != 7 )
            return 1;
          v7 = *(uint16_t *)(v5 + 12);
          result = 1;
          if ( *(uint16_t *)(v5 + 12) != 0 )
          {
            v8 = (uint32_t *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
            v9 = (uint32_t *)(dest);
            do
            {
              --v7;
              *v9 = *v8;
              v9[1] = v8[1];
              v9[2] = v8[2];
              v8 += 3;
              v9 = (uint32_t *)((char *)v9 + a4);
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_CMatrix2_float_d5ce21  (binary VA: 0xe6a450)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::CMatrix2<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_CMatrix2_float_d5ce21(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x200) != 0 )
      {
        if ( a4 != 16 && a4 != 0 )
          goto LABEL_6;
        if ( v6 == 9 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 16 * *(uint16_t *)(v5 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v6 != 9 )
            return 1;
          v7 = *(uint16_t *)(v5 + 12);
          result = 1;
          if ( *(uint16_t *)(v5 + 12) != 0 )
          {
            v8 = (uint32_t *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
            v9 = (uint32_t *)(dest);
            do
            {
              --v7;
              *v9 = *v8;
              v9[1] = v8[1];
              v9[2] = v8[2];
              v9[3] = v8[3];
              v8 += 4;
              v9 = (uint32_t *)((char *)v9 + a4);
            }
            while ( v7 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_video_ITexture_b9ea82  (binary VA: 0xe6a570)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_video_ITexture_b9ea82(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && (unsigned int)*(uint8_t *)(v5 + 9) - 12 <= 4 )
    {
      if ( a4 == 4 || (result = 1, a4 == 0) )
      {
        memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 4 * *(uint16_t *)(v5 + 12));
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::getArrayParameter_vector4d_float_ba0fee  (binary VA: 0xe6d800)
// Original: glitch::video::detail::getArrayParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
uint8_t * glitch::video::detail::getArrayParameter_vector4d_float_ba0fee(int a1, uint8_t *a2, float *a3, int a4)
{
  uint8_t *result;
  uint8_t *v5;
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  int v10;

  result = a2;
  v5 = &a2[4 * a1];
  if ( a2 != v5 )
  {
    do
    {
      v7 = (float)result[1];
      v8 = (float)result[2];
      v9 = (float)result[3];
      v10 = *result;
      result += 4;
      a3[1] = v7 * 0.003921569f;
      a3[2] = v8 * 0.003921569f;
      a3[3] = v9 * 0.003921569f;
      *a3 = (float)v10 * 0.003921569f;
      a3 = (float *)((char *)a3 + a4);
    }
    while ( v5 != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector4d_float_81b044  (binary VA: 0xe6d880)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_vector4d_float_81b044(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  uint32_t *v12;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x100) != 0 )
      {
        if ( a4 != 16 && a4 != 0 )
          goto LABEL_6;
        if ( v6 == 8 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 16 * *(uint16_t *)(v5 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          v7 = *(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36);
          switch ( v6 )
          {
            case 8:
              v11 = *(uint16_t *)(v5 + 12);
              result = 1;
              if ( *(uint16_t *)(v5 + 12) != 0 )
              {
                v12 = (uint32_t *)(dest);
                do
                {
                  --v11;
                  *v12 = *(uint32_t *)v7;
                  v12[1] = *(uint32_t *)(v7 + 4);
                  v12[2] = *(uint32_t *)(v7 + 8);
                  v12[3] = *(uint32_t *)(v7 + 12);
                  v7 += 16;
                  v12 = (uint32_t *)((char *)v12 + a4);
                }
                while ( v11 != 0 );
                return 1;
              }
              break;
            case 17:
              glitch::video::detail::getArrayParameter_vector4d_float_ba0fee(
                *(uint16_t *)(v5 + 12),
                (uint8_t *)v7,
                (float *)dest,
                a4);
              return 1;
            case 18:
              result = 1;
              v8 = v7 + 16 * *(uint16_t *)(v5 + 12);
              if ( v7 != v8 )
              {
                v9 = (uint32_t *)(dest);
                do
                {
                  *v9 = *(uint32_t *)v7;
                  v9[1] = *(uint32_t *)(v7 + 4);
                  v9[2] = *(uint32_t *)(v7 + 8);
                  v10 = *(uint32_t *)(v7 + 12);
                  v7 += 16;
                  v9[3] = v10;
                  v9 = (uint32_t *)((char *)v9 + a4);
                }
                while ( v8 != v7 );
                return 1;
              }
              break;
            default:
              return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector4d_float_81b044  (binary VA: 0xe6da10)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_vector4d_float_81b044(int a1, uint16_t a2, void *dest, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x100) != 0 )
      {
        if ( a4 != 16 && a4 != 0 )
          goto LABEL_6;
        if ( v7 == 8 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 16 * *(uint16_t *)(v6 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          v8 = *(uint32_t *)(v6 + 4) + a1 + 48;
          switch ( v7 )
          {
            case 8:
              v12 = *(uint16_t *)(v6 + 12);
              result = 1;
              if ( *(uint16_t *)(v6 + 12) != 0 )
              {
                v13 = (uint32_t *)(dest);
                do
                {
                  --v12;
                  *v13 = *(uint32_t *)v8;
                  v13[1] = *(uint32_t *)(v8 + 4);
                  v13[2] = *(uint32_t *)(v8 + 8);
                  v13[3] = *(uint32_t *)(v8 + 12);
                  v8 += 16;
                  v13 = (uint32_t *)((char *)v13 + a4);
                }
                while ( v12 != 0 );
                return 1;
              }
              break;
            case 17:
              glitch::video::detail::getArrayParameter_vector4d_float_ba0fee(
                *(uint16_t *)(v6 + 12),
                (uint8_t *)v8,
                (float *)dest,
                a4);
              return 1;
            case 18:
              result = 1;
              v9 = v8 + 16 * *(uint16_t *)(v6 + 12);
              if ( v8 != v9 )
              {
                v10 = (uint32_t *)(dest);
                do
                {
                  *v10 = *(uint32_t *)v8;
                  v10[1] = *(uint32_t *)(v8 + 4);
                  v10[2] = *(uint32_t *)(v8 + 8);
                  v11 = *(uint32_t *)(v8 + 12);
                  v8 += 16;
                  v10[3] = v11;
                  v10 = (uint32_t *)((char *)v10 + a4);
                }
                while ( v9 != v8 );
                return 1;
              }
              break;
            default:
              return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector4d_float_81b044  (binary VA: 0xe6dbb0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_vector4d_float_81b044(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr )
  {
    v11 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v11] & 0x100) != 0 )
    {
      if ( a4 != 16 && a4 != 0 )
        goto LABEL_5;
      if ( v11 == 8 )
      {
        memcpy(
          dest,
          (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)),
          16 * *((uint16_t *)ParameterDef + 6));
        return 1;
      }
      result = 1;
      if ( a4 != 0 )
      {
LABEL_5:
        v7 = ParameterDef[1] + *((uint32_t *)a1 + 11);
        switch ( v11 )
        {
          case 8:
            v10 = *((uint16_t *)ParameterDef + 6);
            result = 1;
            if ( v10 != 0 )
            {
              do
              {
                --v10;
                *v6 = *(uint32_t *)v7;
                v6[1] = *(uint32_t *)(v7 + 4);
                v6[2] = *(uint32_t *)(v7 + 8);
                v6[3] = *(uint32_t *)(v7 + 12);
                v7 += 16;
                v6 = (uint32_t *)((char *)v6 + a4);
              }
              while ( v10 != 0 );
              return 1;
            }
            break;
          case 17:
            glitch::video::detail::getArrayParameter_vector4d_float_ba0fee(
              *((uint16_t *)ParameterDef + 6),
              (uint8_t *)v7,
              (float *)dest,
              a4);
            return 1;
          case 18:
            result = 1;
            v8 = v7 + 16 * *((uint16_t *)ParameterDef + 6);
            if ( v7 != v8 )
            {
              do
              {
                *v6 = *(uint32_t *)v7;
                v6[1] = *(uint32_t *)(v7 + 4);
                v6[2] = *(uint32_t *)(v7 + 8);
                v9 = *(uint32_t *)(v7 + 12);
                v7 += 16;
                v6[3] = v9;
                v6 = (uint32_t *)((char *)v6 + a4);
              }
              while ( v8 != v7 );
              return 1;
            }
            break;
          default:
            return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::getArrayParameter_vector4d_float_ba0fee  (binary VA: 0xe6dd50)
// Original: glitch::video::detail::getArrayParameter<glitch::core::vector4d<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::getArrayParameter_vector4d_float_ba0fee(int a1, int64_t a2, int a3)
{
  int64_t i; // rax
  int v4;
  int v5;
  float v6; // xmm1_4
  int16_t v8;

  for ( i = a2; (uint32_t)a2 + 16 * a1 != (uint32_t)i; HIDWORD(i) += a3 )
  {
    v4 = (int)(float)(*(float *)(i + 8) * 255.0);
    v5 = (int)(float)(*(float *)(i + 4) * 255.0);
    v8 = (int)(float)(*(float *)(i + 12) * 255.0);
    v6 = *(float *)i * 255.0;
    LODWORD(i) = i + 16;
    *(uint8_t *)HIDWORD(i) = (int)v6;
    *(uint8_t *)(HIDWORD(i) + 1) = v5;
    *(uint8_t *)(HIDWORD(i) + 2) = v4;
    *(uint8_t *)(HIDWORD(i) + 3) = v8;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::getArrayParameter_video_SColorf_0a4183  (binary VA: 0xe6ddf0)
// Original: glitch::video::detail::getArrayParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::getArrayParameter_video_SColorf_0a4183(int a1, int64_t a2, int a3)
{
  int64_t i; // rax
  int v4;
  int v5;
  float v6; // xmm1_4
  int16_t v8;

  for ( i = a2; (uint32_t)a2 + 16 * a1 != (uint32_t)i; HIDWORD(i) += a3 )
  {
    v4 = (int)(float)(*(float *)(i + 8) * 255.0);
    v5 = (int)(float)(*(float *)(i + 4) * 255.0);
    v8 = (int)(float)(*(float *)(i + 12) * 255.0);
    v6 = *(float *)i * 255.0;
    LODWORD(i) = i + 16;
    *(uint8_t *)HIDWORD(i) = (int)v6;
    *(uint8_t *)(HIDWORD(i) + 1) = v5;
    *(uint8_t *)(HIDWORD(i) + 2) = v4;
    *(uint8_t *)(HIDWORD(i) + 3) = v8;
  }
  return i;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_video_SColor_444eab  (binary VA: 0xe6de90)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_video_SColor_444eab(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x20000) != 0 )
      {
        if ( a4 != 4 && a4 != 0 )
          goto LABEL_6;
        if ( v6 == 17 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 4 * *(uint16_t *)(v5 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          v7 = (uint32_t *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
          switch ( v6 )
          {
            case 8:
              glitch::video::detail::getArrayParameter_vector4d_float_ba0fee(
                *(uint16_t *)(v5 + 12),
                __SPAIR64__((unsigned int)(uintptr_t)(dest), (unsigned int)(uintptr_t)(v7)),
                a4);
              return 1;
            case 17:
              v8 = *(uint16_t *)(v5 + 12);
              result = 1;
              if ( *(uint16_t *)(v5 + 12) != 0 )
              {
                v9 = (uint32_t *)(dest);
                do
                {
                  --v8;
                  *v9 = *v7++;
                  v9 = (uint32_t *)((char *)v9 + a4);
                }
                while ( v8 != 0 );
                return 1;
              }
              break;
            case 18:
              glitch::video::detail::getArrayParameter_video_SColorf_0a4183(
                *(uint16_t *)(v5 + 12),
                __SPAIR64__((unsigned int)(uintptr_t)(dest), (unsigned int)(uintptr_t)(v7)),
                a4);
              return 1;
            default:
              return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_video_SColor_444eab  (binary VA: 0xe6e000)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_video_SColor_444eab(int a1, uint16_t a2, void *dest, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  uint32_t *v8;
  int v9;
  uint32_t *v10;

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x20000) != 0 )
      {
        if ( a4 != 4 && a4 != 0 )
          goto LABEL_6;
        if ( v7 == 17 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 4 * *(uint16_t *)(v6 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          v8 = (uint32_t *)(*(uint32_t *)(v6 + 4) + a1 + 48);
          switch ( v7 )
          {
            case 8:
              glitch::video::detail::getArrayParameter_vector4d_float_ba0fee(
                *(uint16_t *)(v6 + 12),
                __SPAIR64__((unsigned int)(uintptr_t)(dest), (unsigned int)(uintptr_t)(v8)),
                a4);
              return 1;
            case 17:
              v9 = *(uint16_t *)(v6 + 12);
              result = 1;
              if ( *(uint16_t *)(v6 + 12) != 0 )
              {
                v10 = (uint32_t *)(dest);
                do
                {
                  --v9;
                  *v10 = *v8++;
                  v10 = (uint32_t *)((char *)v10 + a4);
                }
                while ( v9 != 0 );
                return 1;
              }
              break;
            case 18:
              glitch::video::detail::getArrayParameter_video_SColorf_0a4183(
                *(uint16_t *)(v6 + 12),
                __SPAIR64__((unsigned int)(uintptr_t)(dest), (unsigned int)(uintptr_t)(v8)),
                a4);
              return 1;
            default:
              return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_video_SColor_444eab  (binary VA: 0xe6e170)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::video::SColor>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_video_SColor_444eab(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr )
  {
    v9 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v9] & 0x20000) != 0 )
    {
      if ( a4 != 4 && a4 != 0 )
        goto LABEL_5;
      if ( v9 == 17 )
      {
        memcpy(
          dest,
          (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)),
          4 * *((uint16_t *)ParameterDef + 6));
        return 1;
      }
      result = 1;
      if ( a4 != 0 )
      {
LABEL_5:
        v7 = (uint32_t *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
        switch ( v9 )
        {
          case 8:
            glitch::video::detail::getArrayParameter_vector4d_float_ba0fee(
              *((uint16_t *)ParameterDef + 6),
              __SPAIR64__((unsigned int)(uintptr_t)(dest), (unsigned int)(uintptr_t)(v7)),
              a4);
            return 1;
          case 17:
            v8 = *((uint16_t *)ParameterDef + 6);
            result = 1;
            if ( v8 != 0 )
            {
              do
              {
                --v8;
                *v6 = *v7++;
                v6 = (uint32_t *)((char *)v6 + a4);
              }
              while ( v8 != 0 );
              return 1;
            }
            break;
          case 18:
            glitch::video::detail::getArrayParameter_video_SColorf_0a4183(
              *((uint16_t *)ParameterDef + 6),
              __SPAIR64__((unsigned int)(uintptr_t)(dest), (unsigned int)(uintptr_t)(v7)),
              a4);
            return 1;
          default:
            return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::getArrayParameter_video_SColorf_0a4183  (binary VA: 0xe6e2e0)
// Original: glitch::video::detail::getArrayParameter<glitch::video::SColorf>
// ----------------------------------------------------------------------------
uint8_t * glitch::video::detail::getArrayParameter_video_SColorf_0a4183(int a1, uint8_t *a2, float *a3, int a4)
{
  uint8_t *result;
  uint8_t *v5;
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  int v10;

  result = a2;
  v5 = &a2[4 * a1];
  if ( a2 != v5 )
  {
    do
    {
      v7 = (float)result[1];
      v8 = (float)result[2];
      v9 = (float)result[3];
      v10 = *result;
      result += 4;
      a3[1] = v7 * 0.003921569f;
      a3[2] = v8 * 0.003921569f;
      a3[3] = v9 * 0.003921569f;
      *a3 = (float)v10 * 0.003921569f;
      a3 = (float *)((char *)a3 + a4);
    }
    while ( v5 != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_video_SColorf_052537  (binary VA: 0xe6e360)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_video_SColorf_052537(int a1, uint16_t a2, void *dest, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  int v10;
  uint32_t *v11;
  int v12;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x40000) != 0 )
      {
        if ( a4 != 16 && a4 != 0 )
          goto LABEL_6;
        if ( v6 == 18 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 16 * *(uint16_t *)(v5 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          v7 = *(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36);
          switch ( v6 )
          {
            case 8:
              result = 1;
              v10 = v7 + 16 * *(uint16_t *)(v5 + 12);
              if ( v7 != v10 )
              {
                v11 = (uint32_t *)(dest);
                do
                {
                  *v11 = *(uint32_t *)v7;
                  v11[1] = *(uint32_t *)(v7 + 4);
                  v11[2] = *(uint32_t *)(v7 + 8);
                  v12 = *(uint32_t *)(v7 + 12);
                  v7 += 16;
                  v11[3] = v12;
                  v11 = (uint32_t *)((char *)v11 + a4);
                }
                while ( v10 != v7 );
                return 1;
              }
              break;
            case 17:
              glitch::video::detail::getArrayParameter_video_SColorf_0a4183(
                *(uint16_t *)(v5 + 12),
                (uint8_t *)v7,
                (float *)dest,
                a4);
              return 1;
            case 18:
              v8 = *(uint16_t *)(v5 + 12);
              result = 1;
              if ( *(uint16_t *)(v5 + 12) != 0 )
              {
                v9 = (uint32_t *)(dest);
                do
                {
                  --v8;
                  *v9 = *(uint32_t *)v7;
                  v9[1] = *(uint32_t *)(v7 + 4);
                  v9[2] = *(uint32_t *)(v7 + 8);
                  v9[3] = *(uint32_t *)(v7 + 12);
                  v7 += 16;
                  v9 = (uint32_t *)((char *)v9 + a4);
                }
                while ( v8 != 0 );
                return 1;
              }
              break;
            default:
              return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_video_SColorf_052537  (binary VA: 0xe6e500)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_video_SColorf_052537(int a1, uint16_t a2, void *dest, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  uint32_t *v12;
  int v13;

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x40000) != 0 )
      {
        if ( a4 != 16 && a4 != 0 )
          goto LABEL_6;
        if ( v7 == 18 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 16 * *(uint16_t *)(v6 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          v8 = *(uint32_t *)(v6 + 4) + a1 + 48;
          switch ( v7 )
          {
            case 8:
              result = 1;
              v11 = v8 + 16 * *(uint16_t *)(v6 + 12);
              if ( v8 != v11 )
              {
                v12 = (uint32_t *)(dest);
                do
                {
                  *v12 = *(uint32_t *)v8;
                  v12[1] = *(uint32_t *)(v8 + 4);
                  v12[2] = *(uint32_t *)(v8 + 8);
                  v13 = *(uint32_t *)(v8 + 12);
                  v8 += 16;
                  v12[3] = v13;
                  v12 = (uint32_t *)((char *)v12 + a4);
                }
                while ( v11 != v8 );
                return 1;
              }
              break;
            case 17:
              glitch::video::detail::getArrayParameter_video_SColorf_0a4183(
                *(uint16_t *)(v6 + 12),
                (uint8_t *)v8,
                (float *)dest,
                a4);
              return 1;
            case 18:
              v9 = *(uint16_t *)(v6 + 12);
              result = 1;
              if ( *(uint16_t *)(v6 + 12) != 0 )
              {
                v10 = (uint32_t *)(dest);
                do
                {
                  --v9;
                  *v10 = *(uint32_t *)v8;
                  v10[1] = *(uint32_t *)(v8 + 4);
                  v10[2] = *(uint32_t *)(v8 + 8);
                  v10[3] = *(uint32_t *)(v8 + 12);
                  v8 += 16;
                  v10 = (uint32_t *)((char *)v10 + a4);
                }
                while ( v9 != 0 );
                return 1;
              }
              break;
            default:
              return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_video_SColorf_052537  (binary VA: 0xe6e6a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::video::SColorf>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_video_SColorf_052537(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v6 = dest;
  if ( ParameterDef != nullptr )
  {
    v11 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v11] & 0x40000) != 0 )
    {
      if ( a4 != 16 && a4 != 0 )
        goto LABEL_5;
      if ( v11 == 18 )
      {
        memcpy(
          dest,
          (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)),
          16 * *((uint16_t *)ParameterDef + 6));
        return 1;
      }
      result = 1;
      if ( a4 != 0 )
      {
LABEL_5:
        v7 = ParameterDef[1] + *((uint32_t *)a1 + 11);
        switch ( v11 )
        {
          case 8:
            result = 1;
            v9 = v7 + 16 * *((uint16_t *)ParameterDef + 6);
            if ( v7 != v9 )
            {
              do
              {
                *v6 = *(uint32_t *)v7;
                v6[1] = *(uint32_t *)(v7 + 4);
                v6[2] = *(uint32_t *)(v7 + 8);
                v10 = *(uint32_t *)(v7 + 12);
                v7 += 16;
                v6[3] = v10;
                v6 = (uint32_t *)((char *)v6 + a4);
              }
              while ( v9 != v7 );
              return 1;
            }
            break;
          case 17:
            glitch::video::detail::getArrayParameter_video_SColorf_0a4183(
              *((uint16_t *)ParameterDef + 6),
              (uint8_t *)v7,
              (float *)dest,
              a4);
            return 1;
          case 18:
            v8 = *((uint16_t *)ParameterDef + 6);
            result = 1;
            if ( v8 != 0 )
            {
              do
              {
                --v8;
                *v6 = *(uint32_t *)v7;
                v6[1] = *(uint32_t *)(v7 + 4);
                v6[2] = *(uint32_t *)(v7 + 8);
                v6[3] = *(uint32_t *)(v7 + 12);
                v7 += 16;
                v6 = (uint32_t *)((char *)v6 + a4);
              }
              while ( v8 != 0 );
              return 1;
            }
            break;
          default:
            return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_CMatrix3_float_f6afa1  (binary VA: 0xe70ae0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_CMatrix3_float_f6afa1(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int result;
  int v5;
  int v6;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x400) != 0 )
      {
        if ( a4 != 36 && a4 != 0 )
          goto LABEL_6;
        if ( v6 == 10 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36)), 36 * *(uint16_t *)(v5 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v6 == 10 )
            glitch::core::copyArray_CMatrix3_float_d12e49(
              dest,
              a4,
              (uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4)),
              36,
              *(uint16_t *)(v5 + 12));
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_CMatrix3_float_f6afa1  (binary VA: 0xe70bf0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_CMatrix3_float_f6afa1(int a1, uint16_t a2, uint32_t *dest, int a4)
{
  int v4;
  int result;
  int v6;
  int v7;

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x400) != 0 )
      {
        if ( a4 != 36 && a4 != 0 )
          goto LABEL_6;
        if ( v7 == 10 )
        {
          memcpy(dest, (const void *)(*(uint32_t *)(v6 + 4) + a1 + 48), 36 * *(uint16_t *)(v6 + 12));
          return 1;
        }
        result = 1;
        if ( a4 != 0 )
        {
LABEL_6:
          if ( v7 == 10 )
            glitch::core::copyArray_CMatrix3_float_d12e49(
              dest,
              a4,
              (uint32_t *)(a1 + *(uint32_t *)(v6 + 4) + 48),
              36,
              *(uint16_t *)(v6 + 12));
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_CMatrix3_float_f6afa1  (binary VA: 0xe70d00)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_CMatrix3_float_f6afa1(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *dest, int a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x400) != 0 )
    {
      if ( a4 != 36 && a4 != 0 )
        goto LABEL_5;
      if ( v6 == 10 )
      {
        memcpy(
          dest,
          (const void *)(ParameterDef[1] + *((uint32_t *)a1 + 11)),
          36 * *((uint16_t *)ParameterDef + 6));
        return 1;
      }
      result = 1;
      if ( a4 != 0 )
      {
LABEL_5:
        if ( v6 == 10 )
          glitch::core::copyArray_CMatrix3_float_d12e49(
            dest,
            a4,
            (uint32_t *)(*((uint32_t *)a1 + 11) + ParameterDef[1]),
            36,
            *((uint16_t *)ParameterDef + 6));
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_CMatrix3_float_eabcdd  (binary VA: 0xe70e10)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_CMatrix3_float_eabcdd(uint32_t *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;

  result = 0;
  v7 = a1[1];
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v8 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v8 != 0
      && (glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v8 + 9)] & 0x400) != 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 36 && a6 != 0 )
        goto LABEL_6;
      if ( *(uint8_t *)(v8 + 9) == 10 )
      {
        memcpy((char *)&a1[9 * a4 + 12] + *(uint32_t *)(v8 + 4), src, 36 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_6:
        if ( *(uint8_t *)(v8 + 9) == 10 )
          glitch::core::copyArray_CMatrix3_float_d12e49(
            (uint32_t *)((char *)&a1[9 * a4 + 12] + *(uint32_t *)(v8 + 4)),
            36,
            src,
            a6,
            a5);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_CMatrix3_float_eabcdd  (binary VA: 0xe70f60)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_CMatrix3_float_eabcdd(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  int v8;
  int v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v9 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v9] & 0x400) != 0 )
    {
      if ( a6 != 36 && a6 != 0 )
        goto LABEL_5;
      if ( v9 == 10 )
      {
        memcpy((void *)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 36 * a4), src, 36 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_5:
        v8 = ParameterDef[1];
        if ( v9 == 10 )
          glitch::core::copyArray_CMatrix3_float_d12e49(
            (uint32_t *)(v8 + *((uint32_t *)a1 + 11) + 36 * a4),
            36,
            src,
            a6,
            a5);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_CMatrix3_float_eabcdd  (binary VA: 0xe71080)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::core::CMatrix3<float>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_CMatrix3_float_eabcdd(int a1, uint16_t a2, uint32_t *src, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v7 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v7 != 0 )
    {
      v8 = *(uint8_t *)(v7 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v8] & 0x400) != 0 )
      {
        if ( a6 != 36 && a6 != 0 )
          goto LABEL_6;
        if ( v8 == 10 )
        {
          memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v7 + 4) + 36 * a4), src, 36 * a5);
          return 1;
        }
        result = 1;
        if ( a6 != 0 )
        {
LABEL_6:
          if ( v8 == 10 )
            glitch::core::copyArray_CMatrix3_float_d12e49(
              (uint32_t *)(*(uint32_t *)(v7 + 4) + *(uint32_t *)(a1 + 36) + 36 * a4),
              36,
              src,
              a6,
              a5);
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_video_ITexture_3fbbb7  (binary VA: 0xe74550)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_video_ITexture_3fbbb7(int a1, uint16_t a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *src, glitch::video::ITexture::Self **a4, unsigned int a5, unsigned int a6)
{
  int result;
  int v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v7 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v7 != 0 && (unsigned int)*(uint8_t *)(v7 + 9) - 12 <= 4 )
    {
      if ( a6 == 4 || a6 == 0 )
      {
        memcpy((void *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v7 + 4) + 4 * (uint32_t)(uintptr_t)(a4)), src, 4 * a5);
        return 1;
      }
      else
      {
        glitch::video::detail::setArrayParameter(
          (glitch::video::detail::Self *)v7,
          (const glitch::video::SShaderParameterDef::Self *)(*(uint32_t *)(v7 + 4) + *(uint32_t *)(a1 + 36)),
          src,
          a4,
          a5,
          a6);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_video_ITexture_d42273  (binary VA: 0xe74620)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_video_ITexture_d42273(int a1, uint16_t a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *a3, glitch::video::ITexture::Self **a4, unsigned int a5, unsigned int a6)
{
  int result;
  unsigned int v7;
  int v8;

  result = 0;
  v7 = a6;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v8 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v8 != 0 && (unsigned int)*(uint8_t *)(v8 + 9) - 12 <= 4 )
    {
      if ( a6 == 0 )
        v7 = 4;
      glitch::video::detail::setArrayParameter(
        (glitch::video::detail::Self *)v8,
        (const glitch::video::SShaderParameterDef::Self *)(*(uint32_t *)(v8 + 4) + *(uint32_t *)(a1 + 36)),
        a3,
        a4,
        a5,
        v7);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_ITexture_3fbbb7  (binary VA: 0xe746c0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_ITexture_3fbbb7(uint32_t *a1, uint16_t a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *src, glitch::video::ITexture::Self **a4, unsigned int a5, unsigned int a6)
{
  int result;
  int v7;
  int v8;

  result = 0;
  v7 = a1[1];
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v8 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v8 != 0 && (unsigned int)*(uint8_t *)(v8 + 9) - 12 <= 4 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      if ( a6 != 4 && a6 != 0 )
        goto LABEL_11;
      if ( (unsigned int)*(uint8_t *)(v8 + 9) - 12 <= 4 )
      {
        memcpy((char *)&a1[(uint32_t)(uintptr_t)(a4) + 12] + *(uint32_t *)(v8 + 4), src, 4 * a5);
        return 1;
      }
      result = 1;
      if ( a6 != 0 )
      {
LABEL_11:
        switch ( *(uint8_t *)(v8 + 9) )
        {
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
            glitch::video::detail::setArrayParameter(
              (glitch::video::detail::Self *)v8,
              (const glitch::video::SShaderParameterDef::Self *)((char *)a1 + *(uint32_t *)(v8 + 4) + 48),
              src,
              a4,
              a5,
              a6);
            result = 1;
            break;
          default:
            result = 1;
            break;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_video_ITexture_d42273  (binary VA: 0xe74840)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_video_ITexture_d42273(uint32_t *a1, uint16_t a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *a3, glitch::video::ITexture::Self **a4, unsigned int a5, unsigned int a6)
{
  int result;
  int v7;
  unsigned int v8;
  int v9;

  result = 0;
  v7 = a1[1];
  v8 = a6;
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v9 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v9 != 0 && (unsigned int)*(uint8_t *)(v9 + 9) - 12 <= 4 )
    {
      a1[5] = -1;
      a1[6] = 15;
      if ( a6 == 0 )
        v8 = 4;
      a1[3] = -1;
      a1[4] = 15;
      glitch::video::detail::setArrayParameter(
        (glitch::video::detail::Self *)v9,
        (const glitch::video::SShaderParameterDef::Self *)((char *)a1 + *(uint32_t *)(v9 + 4) + 48),
        a3,
        a4,
        a5,
        v8);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_video_ITexture_3fbbb7  (binary VA: 0xe74900)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_video_ITexture_3fbbb7(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *src, glitch::video::ITexture::Self **a4, unsigned int a5, unsigned int a6)
{
  glitch::video::detail::Self *ParameterDef;
  int result;

  ParameterDef = (glitch::video::detail::Self *)glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && (unsigned int)*((uint8_t *)ParameterDef + 9) - 12 <= 4 )
  {
    if ( a6 == 4 || a6 == 0 )
    {
      memcpy((void *)(*((uint32_t *)a1 + 11) + *((uint32_t *)ParameterDef + 1) + 4 * (uint32_t)(uintptr_t)(a4)), src, 4 * a5);
      return 1;
    }
    else
    {
      glitch::video::detail::setArrayParameter(
        ParameterDef,
        (const glitch::video::SShaderParameterDef::Self *)(*((uint32_t *)ParameterDef + 1) + *((uint32_t *)a1 + 11)),
        src,
        a4,
        a5,
        a6);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_video_ITexture_d42273  (binary VA: 0xe749d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_video_ITexture_d42273(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *a3, glitch::video::ITexture::Self **a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6;
  glitch::video::detail::Self *ParameterDef;
  int result;

  v6 = a6;
  ParameterDef = (glitch::video::detail::Self *)glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && (unsigned int)*((uint8_t *)ParameterDef + 9) - 12 <= 4 )
  {
    if ( a6 == 0 )
      v6 = 4;
    glitch::video::detail::setArrayParameter(
      ParameterDef,
      (const glitch::video::SShaderParameterDef::Self *)(*((uint32_t *)ParameterDef + 1) + *((uint32_t *)a1 + 11)),
      a3,
      a4,
      a5,
      v6);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_video_ITexture_d42273  (binary VA: 0xe74a70)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_video_ITexture_d42273(uint32_t *a1, uint16_t a2, unsigned int a3, int *a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  bool v9; // di
  int *v10;
  int v11;
  int v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);

  v4 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      v8 = *a4;
      v9 = *a4 != 0 ? v7 == (*(uint32_t *)(*(uint32_t *)(v8 + 16) + 36) & 7) + 12 : (unsigned int)(v7 - 12) <= 4;
      result = 0;
      if ( v9 && *(uint16_t *)(v6 + 12) > a3 )
      {
        v10 = (int *)((uint32_t *)((char *)&a1[a3 + 12] + *(uint32_t *)(v6 + 4)));
        if ( v8 != *v10 )
        {
          a1[5] = -1;
          a1[6] = 15;
          a1[3] = -1;
          a1[4] = 15;
          v8 = *a4;
        }
        v11 = 0;
        v13 = v8;
        if ( v8 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
          v11 = v13;
        }
        v12 = *v10;
        *v10 = v11;
        v13 = v12;
        sub_5ED480(&v13);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_video_ITexture_d42273  (binary VA: 0xe74b70)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_video_ITexture_d42273(int a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  bool v8; // di
  int v9;
  int *v10;
  int v11;
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      v7 = *a4;
      v8 = *a4 != 0 ? v6 == (*(uint32_t *)(*(uint32_t *)(v7 + 16) + 36) & 7) + 12 : (unsigned int)(v6 - 12) <= 4;
      result = 0;
      if ( v8 && *(uint16_t *)(v5 + 12) > a3 )
      {
        v9 = *(uint32_t *)(v5 + 4);
        v12 = *a4;
        v10 = (int *)(*(uint32_t *)(a1 + 36) + v9 + 4 * a3);
        v11 = 0;
        if ( v7 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
          v11 = v12;
        }
        v12 = *v10;
        *v10 = v11;
        sub_5ED480(&v12);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_video_ITexture_d42273  (binary VA: 0xe74c40)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_video_ITexture_d42273(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, int *a4)
{
  uint32_t *ParameterDef;
  int v5;
  int v6;
  bool v7;
  int v8;
  int v9;
  int *v10;
  typedef uint8_t _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (15u + sizeof(_g4_t_v12)) > _g4_s0 ? (15u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 15u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  v12 = 0;
  if ( ParameterDef != nullptr )
  {
    v5 = *((uint8_t *)ParameterDef + 9);
    v6 = *a4;
    v7 = *a4 != 0 ? v5 == (*(uint32_t *)(*(uint32_t *)(v6 + 16) + 36) & 7) + 12 : (unsigned int)(v5 - 12) <= 4;
    v12 = 0;
    if ( v7 && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v8 = ParameterDef[1];
      v9 = 0;
      v13 = *a4;
      v10 = (int *)(*((uint32_t *)a1 + 11) + v8 + 4 * a3);
      if ( v6 != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
        v9 = v13;
      }
      v13 = *v10;
      *v10 = v9;
      sub_5ED480(&v13);
      return 1;
    }
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_video_ITexture_3fbbb7  (binary VA: 0xe74d10)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_video_ITexture_3fbbb7(int a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  bool v8; // di
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v18)) > _g4_s3 ? (48u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v19)) > _g4_s4 ? (64u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      v7 = *a4;
      v8 = *a4 != 0 ? v6 == (*(uint32_t *)(*(uint32_t *)(v7 + 16) + 36) & 7) + 12 : (unsigned int)(v6 - 12) <= 4;
      result = 0;
      if ( v8 && *(uint16_t *)(v5 + 12) > a3 )
      {
        v9 = (int *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
        switch ( *(uint8_t *)(v5 + 9) )
        {
          case 0xC:
            v10 = 0;
            v15 = *a4;
            if ( v7 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
              v10 = v15;
            }
            v15 = *v9;
            *v9 = v10;
            sub_5ED480(&v15);
            result = 1;
            break;
          case 0xD:
            v11 = 0;
            v16 = *a4;
            if ( v7 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
              v11 = v16;
            }
            v16 = *v9;
            *v9 = v11;
            sub_5ED480(&v16);
            result = 1;
            break;
          case 0xE:
            v12 = 0;
            v17 = *a4;
            if ( v7 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
              v12 = v17;
            }
            v17 = *v9;
            *v9 = v12;
            sub_5ED480(&v17);
            result = 1;
            break;
          case 0xF:
            v14 = 0;
            v18 = *a4;
            if ( v7 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
              v14 = v18;
            }
            v18 = *v9;
            *v9 = v14;
            sub_5ED480(&v18);
            result = 1;
            break;
          case 0x10:
            v13 = 0;
            v19 = *a4;
            if ( v7 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
              v13 = v19;
            }
            v19 = *v9;
            *v9 = v13;
            sub_5ED480(&v19);
            result = 1;
            break;
          default:
            result = 1;
            break;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_video_ITexture_3fbbb7  (binary VA: 0xe74f20)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_video_ITexture_3fbbb7(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, int *a4)
{
  uint32_t *ParameterDef;
  int v5;
  int v6;
  bool v7;
  int *v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef uint8_t _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (15u + sizeof(_g4_t_v15)) > _g4_s0 ? (15u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v18)) > _g4_s3 ? (48u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v19)) > _g4_s4 ? (64u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v20)) > _g4_s5 ? (80u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 15u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  v15 = 0;
  if ( ParameterDef != nullptr )
  {
    v5 = *((uint8_t *)ParameterDef + 9);
    v6 = *a4;
    v7 = *a4 != 0 ? v5 == (*(uint32_t *)(*(uint32_t *)(v6 + 16) + 36) & 7) + 12 : (unsigned int)(v5 - 12) <= 4;
    v15 = 0;
    if ( v7 && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v15 = 1;
      v8 = (int *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
      switch ( *((uint8_t *)ParameterDef + 9) )
      {
        case 0xC:
          v10 = 0;
          v16 = *a4;
          if ( v6 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
            v10 = v16;
          }
          v16 = *v8;
          *v8 = v10;
          sub_5ED480(&v16);
          v15 = 1;
          break;
        case 0xD:
          v11 = 0;
          v17 = *a4;
          if ( v6 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
            v11 = v17;
          }
          v17 = *v8;
          *v8 = v11;
          sub_5ED480(&v17);
          v15 = 1;
          break;
        case 0xE:
          v12 = 0;
          v18 = *a4;
          if ( v6 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
            v12 = v18;
          }
          v18 = *v8;
          *v8 = v12;
          sub_5ED480(&v18);
          v15 = 1;
          break;
        case 0xF:
          v14 = 0;
          v19 = *a4;
          if ( v6 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
            v14 = v19;
          }
          v19 = *v8;
          *v8 = v14;
          sub_5ED480(&v19);
          v15 = 1;
          break;
        case 0x10:
          v13 = 0;
          v20 = *a4;
          if ( v6 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
            v13 = v20;
          }
          v20 = *v8;
          *v8 = v13;
          sub_5ED480(&v20);
          v15 = 1;
          break;
        default:
          return v15;
      }
    }
  }
  return v15;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_ITexture_3fbbb7  (binary VA: 0xe75100)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<glitch::video::ITexture *>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_video_ITexture_3fbbb7(uint32_t *a1, uint16_t a2, unsigned int a3, int *a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  bool v9; // si
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v23)) > _g4_s2 ? (32u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v24)) > _g4_s3 ? (48u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v25)) > _g4_s4 ? (64u + sizeof(_g4_t_v25)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);

  v4 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      v8 = *a4;
      v9 = *a4 != 0 ? v7 == (*(uint32_t *)(*(uint32_t *)(v8 + 16) + 36) & 7) + 12 : (unsigned int)(v7 - 12) <= 4;
      result = 0;
      if ( v9 && *(uint16_t *)(v6 + 12) > a3 )
      {
        v10 = (int *)((uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 48));
        switch ( *(uint8_t *)(v6 + 9) )
        {
          case 0xC:
            if ( v8 != *v10 )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
            }
            v11 = 0;
            v21 = v8;
            if ( v8 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
              v11 = v21;
            }
            v12 = *v10;
            *v10 = v11;
            v21 = v12;
            sub_5ED480(&v21);
            result = 1;
            break;
          case 0xD:
            if ( v8 != *v10 )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
            }
            v13 = 0;
            v22 = v8;
            if ( v8 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
              v13 = v22;
            }
            v14 = *v10;
            *v10 = v13;
            v22 = v14;
            sub_5ED480(&v22);
            result = 1;
            break;
          case 0xE:
            if ( v8 != *v10 )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
            }
            v15 = 0;
            v23 = v8;
            if ( v8 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
              v15 = v23;
            }
            v16 = *v10;
            *v10 = v15;
            v23 = v16;
            sub_5ED480(&v23);
            result = 1;
            break;
          case 0xF:
            if ( v8 != *v10 )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
            }
            v19 = 0;
            v24 = v8;
            if ( v8 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
              v19 = v24;
            }
            v20 = *v10;
            *v10 = v19;
            v24 = v20;
            sub_5ED480(&v24);
            result = 1;
            break;
          case 0x10:
            if ( v8 != *v10 )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
            }
            v17 = 0;
            v25 = v8;
            if ( v8 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
              v17 = v25;
            }
            v18 = *v10;
            *v10 = v17;
            v25 = v18;
            sub_5ED480(&v25);
            result = 1;
            break;
          default:
            result = 1;
            break;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_intrusive_ptr_video_ITex_c4ab82  (binary VA: 0xe753b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_intrusive_ptr_video_ITex_c4ab82(int a1, uint16_t a2, int *a3, int a4)
{
  int result;
  int v6;
  int *v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && (unsigned int)*(uint8_t *)(v6 + 9) - 12 <= 4 )
    {
      result = 1;
      if ( *(uint16_t *)(v6 + 12) != 0 )
      {
        v11 = *(uint16_t *)(v6 + 12);
        v7 = (int *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v6 + 4));
        do
        {
          v8 = *v7;
          v9 = 0;
          v12 = *v7;
          if ( v12 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
            v9 = v12;
          }
          v10 = *a3;
          *a3 = v9;
          v12 = v10;
          ++v7;
          sub_5ED480(&v12);
          a3 = (int *)((char *)a3 + a4);
          --v11;
        }
        while ( v11 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_intrusive_ptr_video_ITex_c4ab82  (binary VA: 0xe75460)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_intrusive_ptr_video_ITex_c4ab82(int a1, uint16_t a2, int *a3, int a4)
{
  int v5;
  int result;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v13)) > _g4_s1 ? (16u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 16u);

  v5 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v7 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v7 != 0 && (unsigned int)*(uint8_t *)(v7 + 9) - 12 <= 4 )
    {
      result = 1;
      if ( *(uint16_t *)(v7 + 12) != 0 )
      {
        v12 = *(uint16_t *)(v7 + 12);
        v8 = (int *)(a1 + *(uint32_t *)(v7 + 4) + 48);
        do
        {
          v9 = *v8;
          v10 = 0;
          v13 = *v8;
          if ( v13 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v9 + 4), 1u);
            v10 = v13;
          }
          v11 = *a3;
          *a3 = v10;
          v13 = v11;
          ++v8;
          sub_5ED480(&v13);
          a3 = (int *)((char *)a3 + a4);
          --v12;
        }
        while ( v12 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_intrusive_ptr_video_ITex_c4ab82  (binary VA: 0xe75510)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_intrusive_ptr_video_ITex_c4ab82(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, int *a3, int a4)
{
  uint32_t *ParameterDef;
  int result;
  int *v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v12)) > _g4_s1 ? (16u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && (unsigned int)*((uint8_t *)ParameterDef + 9) - 12 <= 4 )
  {
    result = 1;
    if ( *((uint16_t *)ParameterDef + 6) != 0 )
    {
      v11 = *((uint16_t *)ParameterDef + 6);
      v7 = (int *)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
      do
      {
        v8 = *v7;
        v9 = 0;
        v12 = *v7;
        if ( v12 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
          v9 = v12;
        }
        v10 = *a3;
        *a3 = v9;
        v12 = v10;
        ++v7;
        sub_5ED480(&v12);
        a3 = (int *)((char *)a3 + a4);
        --v11;
      }
      while ( v11 != 0 );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_intrusive_ptr_video_ITex_3f78d8  (binary VA: 0xe75710)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_intrusive_ptr_video_ITex_3f78d8(int a1, uint16_t a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *a3, boost::intrusive_ptr<glitch::video::ITexture::Self> *a4, unsigned int a5, unsigned int a6)
{
  int result;
  int v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v7 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v7 != 0 && (unsigned int)*(uint8_t *)(v7 + 9) - 12 <= 4 )
    {
      result = 1;
      if ( a6 != 0 )
      {
        glitch::video::detail::setArrayParameter(
          (glitch::video::detail::Self *)v7,
          (const glitch::video::SShaderParameterDef::Self *)(*(uint32_t *)(v7 + 4) + *(uint32_t *)(a1 + 36)),
          a3,
          a4,
          a5,
          a6);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_ITex_4a91ce  (binary VA: 0xe75810)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_ITex_4a91ce(int a1, uint16_t a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *a3, boost::intrusive_ptr<glitch::video::ITexture::Self> *a4, unsigned int a5, unsigned int a6)
{
  int result;
  unsigned int v7;
  int v8;

  result = 0;
  v7 = a6;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v8 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v8 != 0 && (unsigned int)*(uint8_t *)(v8 + 9) - 12 <= 4 )
    {
      if ( a6 == 0 )
        v7 = 4;
      glitch::video::detail::setArrayParameter(
        (glitch::video::detail::Self *)v8,
        (const glitch::video::SShaderParameterDef::Self *)(*(uint32_t *)(v8 + 4) + *(uint32_t *)(a1 + 36)),
        a3,
        a4,
        a5,
        v7);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_intrusive_ptr_video_ITex_3f78d8  (binary VA: 0xe758b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_intrusive_ptr_video_ITex_3f78d8(uint32_t *a1, uint16_t a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *a3, boost::intrusive_ptr<glitch::video::ITexture::Self> *a4, unsigned int a5, unsigned int a6)
{
  int result;
  int v7;
  int v8;

  result = 0;
  v7 = a1[1];
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v8 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v8 != 0 && (unsigned int)*(uint8_t *)(v8 + 9) - 12 <= 4 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      result = 1;
      if ( a6 != 0 )
      {
        switch ( *(uint8_t *)(v8 + 9) )
        {
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
            glitch::video::detail::setArrayParameter(
              (glitch::video::detail::Self *)v8,
              (const glitch::video::SShaderParameterDef::Self *)((char *)a1 + *(uint32_t *)(v8 + 4) + 48),
              a3,
              a4,
              a5,
              a6);
            result = 1;
            break;
          default:
            result = 1;
            break;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce  (binary VA: 0xe759a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(uint32_t *a1, uint16_t a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *a3, boost::intrusive_ptr<glitch::video::ITexture::Self> *a4, unsigned int a5, unsigned int a6)
{
  int result;
  int v7;
  unsigned int v8;
  int v9;

  result = 0;
  v7 = a1[1];
  v8 = a6;
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v9 = *(uint32_t *)(v7 + 32) + 16 * a2;
    if ( v9 != 0 && (unsigned int)*(uint8_t *)(v9 + 9) - 12 <= 4 )
    {
      a1[5] = -1;
      a1[6] = 15;
      if ( a6 == 0 )
        v8 = 4;
      a1[3] = -1;
      a1[4] = 15;
      glitch::video::detail::setArrayParameter(
        (glitch::video::detail::Self *)v9,
        (const glitch::video::SShaderParameterDef::Self *)((char *)a1 + *(uint32_t *)(v9 + 4) + 48),
        a3,
        a4,
        a5,
        v8);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_intrusive_ptr_video_ITex_3f78d8  (binary VA: 0xe75a60)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_intrusive_ptr_video_ITex_3f78d8(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *a3, boost::intrusive_ptr<glitch::video::ITexture::Self> *a4, unsigned int a5, unsigned int a6)
{
  glitch::video::detail::Self *ParameterDef;
  int result;

  ParameterDef = (glitch::video::detail::Self *)glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && (unsigned int)*((uint8_t *)ParameterDef + 9) - 12 <= 4 )
  {
    result = 1;
    if ( a6 != 0 )
    {
      glitch::video::detail::setArrayParameter(
        ParameterDef,
        (const glitch::video::SShaderParameterDef::Self *)(*((uint32_t *)ParameterDef + 1) + *((uint32_t *)a1 + 11)),
        a3,
        a4,
        a5,
        a6);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_intrusive_ptr_video_ITex_4a91ce  (binary VA: 0xe75b50)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_intrusive_ptr_video_ITex_4a91ce(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, boost::intrusive_ptr<glitch::video::ITexture::Self> *a3, boost::intrusive_ptr<glitch::video::ITexture::Self> *a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6;
  glitch::video::detail::Self *ParameterDef;
  int result;

  v6 = a6;
  ParameterDef = (glitch::video::detail::Self *)glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && (unsigned int)*((uint8_t *)ParameterDef + 9) - 12 <= 4 )
  {
    if ( a6 == 0 )
      v6 = 4;
    glitch::video::detail::setArrayParameter(
      ParameterDef,
      (const glitch::video::SShaderParameterDef::Self *)(*((uint32_t *)ParameterDef + 1) + *((uint32_t *)a1 + 11)),
      a3,
      a4,
      a5,
      v6);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_intrusive_ptr_video_ITex_a39eba  (binary VA: 0xe75bf0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_intrusive_ptr_video_ITex_a39eba(int a1, uint16_t a2, int *a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int *v21;
  int *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int *v27;
  int *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int *v33;
  int *v34;
  int v35;
  int v36;
  int v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v38)) > _g4_s0 ? (12u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v39)) > _g4_s1 ? (12u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v40)) > _g4_s2 ? (12u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v41)) > _g4_s3 ? (12u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v42)) > _g4_s4 ? (12u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v43)) > _g4_s5 ? (16u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v44)) > _g4_s6 ? (32u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v45)) > _g4_s7 ? (48u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v46)) > _g4_s8 ? (64u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v47)) > _g4_s9 ? (80u + sizeof(_g4_t_v47)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 12u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 48u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (unsigned int)(v6 - 12) <= 4 )
      {
        result = 1;
        if ( a4 != 0 )
        {
          v7 = *(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36);
          if ( v6 == 14 )
          {
            v32 = *(uint16_t *)(v5 + 12);
            if ( v32 != 0 )
            {
              v42 = v32;
              v33 = a3;
              v34 = (int *)v7;
              do
              {
                v35 = *v34;
                v36 = 0;
                v45 = *v34;
                if ( v45 != 0 )
                {
                  __sync_add_and_fetch((volatile int32_t *)(v35 + 4), 1u);
                  v36 = v45;
                }
                v37 = *v33;
                *v33 = v36;
                v45 = v37;
                ++v34;
                sub_5ED480(&v45);
                v33 = (int *)((char *)v33 + a4);
                --v42;
              }
              while ( v42 != 0 );
              return 1;
            }
          }
          else if ( *(uint8_t *)(v5 + 9) > 0xEu )
          {
            if ( v6 == 15 )
            {
              v20 = *(uint16_t *)(v5 + 12);
              if ( v20 != 0 )
              {
                v40 = v20;
                v21 = a3;
                v22 = (int *)v7;
                do
                {
                  v23 = *v22;
                  v24 = 0;
                  v46 = *v22;
                  if ( v46 != 0 )
                  {
                    __sync_add_and_fetch((volatile int32_t *)(v23 + 4), 1u);
                    v24 = v46;
                  }
                  v25 = *v21;
                  *v21 = v24;
                  v46 = v25;
                  ++v22;
                  sub_5ED480(&v46);
                  v21 = (int *)((char *)v21 + a4);
                  --v40;
                }
                while ( v40 != 0 );
                return 1;
              }
            }
            else
            {
              v14 = *(uint16_t *)(v5 + 12);
              if ( v14 != 0 )
              {
                v39 = v14;
                v15 = a3;
                v16 = (int *)v7;
                do
                {
                  v17 = *v16;
                  v18 = 0;
                  v47 = *v16;
                  if ( v47 != 0 )
                  {
                    __sync_add_and_fetch((volatile int32_t *)(v17 + 4), 1u);
                    v18 = v47;
                  }
                  v19 = *v15;
                  *v15 = v18;
                  v47 = v19;
                  ++v16;
                  sub_5ED480(&v47);
                  v15 = (int *)((char *)v15 + a4);
                  --v39;
                }
                while ( v39 != 0 );
                return 1;
              }
            }
          }
          else
          {
            if ( v6 != 13 )
            {
              v8 = *(uint16_t *)(v5 + 12);
              result = 1;
              if ( v8 == 0 )
                return result;
              v38 = v8;
              v9 = a3;
              v10 = (int *)v7;
              do
              {
                v11 = *v10;
                v12 = 0;
                v43 = *v10;
                if ( v43 != 0 )
                {
                  __sync_add_and_fetch((volatile int32_t *)(v11 + 4), 1u);
                  v12 = v43;
                }
                v13 = *v9;
                *v9 = v12;
                v43 = v13;
                ++v10;
                sub_5ED480(&v43);
                v9 = (int *)((char *)v9 + a4);
                --v38;
              }
              while ( v38 != 0 );
              return 1;
            }
            v26 = *(uint16_t *)(v5 + 12);
            if ( v26 != 0 )
            {
              v41 = v26;
              v27 = a3;
              v28 = (int *)v7;
              do
              {
                v29 = *v28;
                v30 = 0;
                v44 = *v28;
                if ( v44 != 0 )
                {
                  __sync_add_and_fetch((volatile int32_t *)(v29 + 4), 1u);
                  v30 = v44;
                }
                v31 = *v27;
                *v27 = v30;
                v44 = v31;
                ++v28;
                sub_5ED480(&v44);
                v27 = (int *)((char *)v27 + a4);
                --v41;
              }
              while ( v41 != 0 );
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_intrusive_ptr_video_ITex_a39eba  (binary VA: 0xe75e20)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_intrusive_ptr_video_ITex_a39eba(int a1, uint16_t a2, int *a3, int a4)
{
  int v5;
  int result;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v25)) > _g4_s0 ? (12u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v26)) > _g4_s1 ? (12u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v28)) > _g4_s3 ? (12u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v29)) > _g4_s4 ? (12u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v30)) > _g4_s5 ? (16u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v31)) > _g4_s6 ? (32u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v32)) > _g4_s7 ? (48u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v33)) > _g4_s8 ? (64u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v34)) > _g4_s9 ? (80u + sizeof(_g4_t_v34)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 80u);

  v5 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v7 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v7 != 0 )
    {
      v8 = *(uint8_t *)(v7 + 9);
      if ( (unsigned int)(v8 - 12) <= 4 )
      {
        result = 1;
        if ( a4 != 0 )
        {
          v9 = (int *)(*(uint32_t *)(v7 + 4) + a1 + 48);
          if ( v8 == 14 )
          {
            v29 = *(uint16_t *)(v7 + 12);
            if ( *(uint16_t *)(v7 + 12) != 0 )
            {
              do
              {
                v22 = *v9;
                v23 = 0;
                v32 = *v9;
                if ( v32 != 0 )
                {
                  __sync_add_and_fetch((volatile int32_t *)(v22 + 4), 1u);
                  v23 = v32;
                }
                v24 = *a3;
                *a3 = v23;
                v32 = v24;
                ++v9;
                sub_5ED480(&v32);
                a3 = (int *)((char *)a3 + a4);
                --v29;
              }
              while ( v29 != 0 );
              return 1;
            }
          }
          else if ( *(uint8_t *)(v7 + 9) > 0xEu )
          {
            if ( v8 == 15 )
            {
              v27 = *(uint16_t *)(v7 + 12);
              if ( *(uint16_t *)(v7 + 12) != 0 )
              {
                do
                {
                  v16 = *v9;
                  v17 = 0;
                  v33 = *v9;
                  if ( v33 != 0 )
                  {
                    __sync_add_and_fetch((volatile int32_t *)(v16 + 4), 1u);
                    v17 = v33;
                  }
                  v18 = *a3;
                  *a3 = v17;
                  v33 = v18;
                  ++v9;
                  sub_5ED480(&v33);
                  a3 = (int *)((char *)a3 + a4);
                  --v27;
                }
                while ( v27 != 0 );
                return 1;
              }
            }
            else
            {
              v26 = *(uint16_t *)(v7 + 12);
              if ( *(uint16_t *)(v7 + 12) != 0 )
              {
                do
                {
                  v13 = *v9;
                  v14 = 0;
                  v34 = *v9;
                  if ( v34 != 0 )
                  {
                    __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1u);
                    v14 = v34;
                  }
                  v15 = *a3;
                  *a3 = v14;
                  v34 = v15;
                  ++v9;
                  sub_5ED480(&v34);
                  a3 = (int *)((char *)a3 + a4);
                  --v26;
                }
                while ( v26 != 0 );
                return 1;
              }
            }
          }
          else
          {
            if ( v8 != 13 )
            {
              result = 1;
              v25 = *(uint16_t *)(v7 + 12);
              if ( *(uint16_t *)(v7 + 12) == 0 )
                return result;
              do
              {
                v10 = *v9;
                v11 = 0;
                v30 = *v9;
                if ( v30 != 0 )
                {
                  __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1u);
                  v11 = v30;
                }
                v12 = *a3;
                *a3 = v11;
                v30 = v12;
                ++v9;
                sub_5ED480(&v30);
                a3 = (int *)((char *)a3 + a4);
                --v25;
              }
              while ( v25 != 0 );
              return 1;
            }
            v28 = *(uint16_t *)(v7 + 12);
            if ( *(uint16_t *)(v7 + 12) != 0 )
            {
              do
              {
                v19 = *v9;
                v20 = 0;
                v31 = *v9;
                if ( v31 != 0 )
                {
                  __sync_add_and_fetch((volatile int32_t *)(v19 + 4), 1u);
                  v20 = v31;
                }
                v21 = *a3;
                *a3 = v20;
                v31 = v21;
                ++v9;
                sub_5ED480(&v31);
                a3 = (int *)((char *)a3 + a4);
                --v28;
              }
              while ( v28 != 0 );
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_intrusive_ptr_video_ITex_a39eba  (binary VA: 0xe76030)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_intrusive_ptr_video_ITex_a39eba(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, int *a3, int a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int *v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  int v17;
  int v18;
  int v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  int *v24;
  int v25;
  int v26;
  int v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v29)) > _g4_s1 ? (12u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v30)) > _g4_s2 ? (12u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v31)) > _g4_s3 ? (12u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v32)) > _g4_s4 ? (12u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v33)) > _g4_s5 ? (16u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v34)) > _g4_s6 ? (32u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v35)) > _g4_s7 ? (48u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v36)) > _g4_s8 ? (64u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v37)) > _g4_s9 ? (80u + sizeof(_g4_t_v37)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 12u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 16u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (unsigned int)(v6 - 12) <= 4 )
    {
      result = 1;
      if ( a4 != 0 )
      {
        v7 = (int *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
        if ( v6 == 14 )
        {
          v32 = *((uint16_t *)ParameterDef + 6);
          if ( *((uint16_t *)ParameterDef + 6) != 0 )
          {
            v24 = a3;
            do
            {
              v25 = *v7;
              v26 = 0;
              v35 = *v7;
              if ( v35 != 0 )
              {
                __sync_add_and_fetch((volatile int32_t *)(v25 + 4), 1u);
                v26 = v35;
              }
              v27 = *v24;
              *v24 = v26;
              v35 = v27;
              ++v7;
              sub_5ED480(&v35);
              v24 = (int *)((char *)v24 + a4);
              --v32;
            }
            while ( v32 != 0 );
            return 1;
          }
        }
        else if ( *((uint8_t *)ParameterDef + 9) > 0xEu )
        {
          if ( v6 == 15 )
          {
            v30 = *((uint16_t *)ParameterDef + 6);
            if ( *((uint16_t *)ParameterDef + 6) != 0 )
            {
              v16 = a3;
              do
              {
                v17 = *v7;
                v18 = 0;
                v36 = *v7;
                if ( v36 != 0 )
                {
                  __sync_add_and_fetch((volatile int32_t *)(v17 + 4), 1u);
                  v18 = v36;
                }
                v19 = *v16;
                *v16 = v18;
                v36 = v19;
                ++v7;
                sub_5ED480(&v36);
                v16 = (int *)((char *)v16 + a4);
                --v30;
              }
              while ( v30 != 0 );
              return 1;
            }
          }
          else
          {
            v29 = *((uint16_t *)ParameterDef + 6);
            if ( *((uint16_t *)ParameterDef + 6) != 0 )
            {
              v12 = a3;
              do
              {
                v13 = *v7;
                v14 = 0;
                v37 = *v7;
                if ( v37 != 0 )
                {
                  __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1u);
                  v14 = v37;
                }
                v15 = *v12;
                *v12 = v14;
                v37 = v15;
                ++v7;
                sub_5ED480(&v37);
                v12 = (int *)((char *)v12 + a4);
                --v29;
              }
              while ( v29 != 0 );
              return 1;
            }
          }
        }
        else
        {
          if ( v6 != 13 )
          {
            result = 1;
            v28 = *((uint16_t *)ParameterDef + 6);
            if ( *((uint16_t *)ParameterDef + 6) == 0 )
              return result;
            v8 = a3;
            do
            {
              v9 = *v7;
              v10 = 0;
              v33 = *v7;
              if ( v33 != 0 )
              {
                __sync_add_and_fetch((volatile int32_t *)(v9 + 4), 1u);
                v10 = v33;
              }
              v11 = *v8;
              *v8 = v10;
              v33 = v11;
              ++v7;
              sub_5ED480(&v33);
              v8 = (int *)((char *)v8 + a4);
              --v28;
            }
            while ( v28 != 0 );
            return 1;
          }
          v31 = *((uint16_t *)ParameterDef + 6);
          if ( *((uint16_t *)ParameterDef + 6) != 0 )
          {
            v20 = a3;
            do
            {
              v21 = *v7;
              v22 = 0;
              v34 = *v7;
              if ( v34 != 0 )
              {
                __sync_add_and_fetch((volatile int32_t *)(v21 + 4), 1u);
                v22 = v34;
              }
              v23 = *v20;
              *v20 = v22;
              v34 = v23;
              ++v7;
              sub_5ED480(&v34);
              v20 = (int *)((char *)v20 + a4);
              --v31;
            }
            while ( v31 != 0 );
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce  (binary VA: 0xe76250)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_ITex_4a91ce(uint32_t *a1, uint16_t a2, unsigned int a3, int *a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  bool v9; // di
  int *v10;
  int v11;
  int v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);

  v4 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      v8 = *a4;
      v9 = *a4 != 0 ? v7 == (*(uint32_t *)(*(uint32_t *)(v8 + 16) + 36) & 7) + 12 : (unsigned int)(v7 - 12) <= 4;
      result = 0;
      if ( v9 && *(uint16_t *)(v6 + 12) > a3 )
      {
        v10 = (int *)((uint32_t *)((char *)&a1[a3 + 12] + *(uint32_t *)(v6 + 4)));
        if ( *v10 != v8 )
        {
          a1[5] = -1;
          a1[6] = 15;
          a1[3] = -1;
          a1[4] = 15;
          v8 = *a4;
        }
        v11 = 0;
        v13 = v8;
        if ( v8 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
          v11 = v13;
        }
        v12 = *v10;
        *v10 = v11;
        v13 = v12;
        sub_5ED480(&v13);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_intrusive_ptr_video_ITex_c4ab82  (binary VA: 0xe76350)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_intrusive_ptr_video_ITex_c4ab82(int a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v8)) > _g4_s0 ? (0u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && (unsigned int)*(uint8_t *)(v5 + 9) - 12 <= 4 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = 0;
      v8 = *(uint32_t *)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 4 * a3);
      if ( v8 != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
        v6 = v8;
      }
      v7 = *a4;
      *a4 = v6;
      v8 = v7;
      sub_5ED480(&v8);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_intrusive_ptr_video_ITex_c4ab82  (binary VA: 0xe763f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_intrusive_ptr_video_ITex_c4ab82(int a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && (unsigned int)*(uint8_t *)(v6 + 9) - 12 <= 4 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = 0;
      v9 = *(uint32_t *)(*(uint32_t *)(v6 + 4) + a1 + 4 * a3 + 48);
      if ( v9 != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v9 + 4), 1u);
        v7 = v9;
      }
      v8 = *a4;
      *a4 = v7;
      v9 = v8;
      sub_5ED480(&v9);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_intrusive_ptr_video_ITex_c4ab82  (binary VA: 0xe76490)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_intrusive_ptr_video_ITex_c4ab82(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, int *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr
    && (unsigned int)*((uint8_t *)ParameterDef + 9) - 12 <= 4
    && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = ParameterDef[1];
    v7 = 0;
    v9 = *(uint32_t *)(*((uint32_t *)a1 + 11) + v6 + 4 * a3);
    if ( v9 != 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v9 + 4), 1u);
      v7 = v9;
    }
    v8 = *a4;
    *a4 = v7;
    v9 = v8;
    sub_5ED480(&v9);
    return 1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_ITex_4a91ce  (binary VA: 0xe76530)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_ITex_4a91ce(int a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  bool v8; // di
  int v9;
  int *v10;
  int v11;
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      v7 = *a4;
      v8 = *a4 != 0 ? v6 == (*(uint32_t *)(*(uint32_t *)(v7 + 16) + 36) & 7) + 12 : (unsigned int)(v6 - 12) <= 4;
      result = 0;
      if ( v8 && *(uint16_t *)(v5 + 12) > a3 )
      {
        v9 = *(uint32_t *)(v5 + 4);
        v12 = *a4;
        v10 = (int *)(*(uint32_t *)(a1 + 36) + v9 + 4 * a3);
        v11 = 0;
        if ( v7 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
          v11 = v12;
        }
        v12 = *v10;
        *v10 = v11;
        sub_5ED480(&v12);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_intrusive_ptr_video_ITex_4a91ce  (binary VA: 0xe76600)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_intrusive_ptr_video_ITex_4a91ce(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, int *a4)
{
  uint32_t *ParameterDef;
  uint32_t *v5;
  int v6;
  int v7;
  bool v8;
  int v9;
  int v10;
  int *v11;
  typedef uint8_t _g4_t_v13;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (15u + sizeof(_g4_t_v13)) > _g4_s0 ? (15u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 15u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  v5 = ParameterDef;
  v13 = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    v7 = *a4;
    v8 = *a4 != 0 ? v6 == (*(uint32_t *)(*(uint32_t *)(v7 + 16) + 36) & 7) + 12 : (unsigned int)(v6 - 12) <= 4;
    v13 = 0;
    if ( v8 && *((uint16_t *)v5 + 6) > a3 )
    {
      v9 = v5[1];
      v10 = 0;
      v14 = *a4;
      v11 = (int *)(*((uint32_t *)a1 + 11) + v9 + 4 * a3);
      if ( v7 != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
        v10 = v14;
      }
      v14 = *v11;
      *v11 = v10;
      sub_5ED480(&v14);
      return 1;
    }
  }
  return v13;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_intrusive_ptr_video_ITex_a39eba  (binary VA: 0xe766d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_intrusive_ptr_video_ITex_a39eba(int a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int *v7;
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
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v26)) > _g4_s3 ? (48u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v27)) > _g4_s4 ? (64u + sizeof(_g4_t_v27)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (unsigned int)(v6 - 12) <= 4 && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = (int *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
        if ( v6 == 14 )
        {
          v11 = *v7;
          v12 = 0;
          v25 = v11;
          if ( v11 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v11 + 4), 1u);
            v12 = v25;
          }
          v13 = *a4;
          *a4 = v12;
          v25 = v13;
          sub_5ED480(&v25);
          return 1;
        }
        else if ( *(uint8_t *)(v5 + 9) > 0xEu )
        {
          if ( v6 == 15 )
          {
            v20 = *v7;
            v21 = 0;
            v26 = v20;
            if ( v20 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v20 + 4), 1u);
              v21 = v26;
            }
            v22 = *a4;
            *a4 = v21;
            v26 = v22;
            sub_5ED480(&v26);
            return 1;
          }
          else
          {
            v17 = *v7;
            v18 = 0;
            v27 = v17;
            if ( v17 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v17 + 4), 1u);
              v18 = v27;
            }
            v19 = *a4;
            *a4 = v18;
            v27 = v19;
            sub_5ED480(&v27);
            return 1;
          }
        }
        else if ( v6 == 13 )
        {
          v14 = *v7;
          v15 = 0;
          v24 = v14;
          if ( v14 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v14 + 4), 1u);
            v15 = v24;
          }
          v16 = *a4;
          *a4 = v15;
          v24 = v16;
          sub_5ED480(&v24);
          return 1;
        }
        else
        {
          v8 = *v7;
          v9 = 0;
          v23 = v8;
          if ( v8 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
            v9 = v23;
          }
          v10 = *a4;
          *a4 = v9;
          v23 = v10;
          sub_5ED480(&v23);
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_intrusive_ptr_video_ITex_3f78d8  (binary VA: 0xe76890)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_intrusive_ptr_video_ITex_3f78d8(int a1, uint16_t a2, unsigned int a3, int *a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  bool v8; // di
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v18)) > _g4_s3 ? (48u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v19)) > _g4_s4 ? (64u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      v7 = *a4;
      v8 = *a4 != 0 ? v6 == (*(uint32_t *)(*(uint32_t *)(v7 + 16) + 36) & 7) + 12 : (unsigned int)(v6 - 12) <= 4;
      result = 0;
      if ( v8 && *(uint16_t *)(v5 + 12) > a3 )
      {
        v9 = (int *)(*(uint32_t *)(v5 + 4) + *(uint32_t *)(a1 + 36));
        switch ( *(uint8_t *)(v5 + 9) )
        {
          case 0xC:
            v10 = 0;
            v15 = *a4;
            if ( v7 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
              v10 = v15;
            }
            v15 = *v9;
            *v9 = v10;
            sub_5ED480(&v15);
            result = 1;
            break;
          case 0xD:
            v11 = 0;
            v16 = *a4;
            if ( v7 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
              v11 = v16;
            }
            v16 = *v9;
            *v9 = v11;
            sub_5ED480(&v16);
            result = 1;
            break;
          case 0xE:
            v12 = 0;
            v17 = *a4;
            if ( v7 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
              v12 = v17;
            }
            v17 = *v9;
            *v9 = v12;
            sub_5ED480(&v17);
            result = 1;
            break;
          case 0xF:
            v14 = 0;
            v18 = *a4;
            if ( v7 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
              v14 = v18;
            }
            v18 = *v9;
            *v9 = v14;
            sub_5ED480(&v18);
            result = 1;
            break;
          case 0x10:
            v13 = 0;
            v19 = *a4;
            if ( v7 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1u);
              v13 = v19;
            }
            v19 = *v9;
            *v9 = v13;
            sub_5ED480(&v19);
            result = 1;
            break;
          default:
            result = 1;
            break;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_intrusive_ptr_video_ITex_a39eba  (binary VA: 0xe76aa0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_intrusive_ptr_video_ITex_a39eba(int a1, uint16_t a2, unsigned int a3, int *a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v24)) > _g4_s0 ? (0u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v25)) > _g4_s1 ? (16u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v26)) > _g4_s2 ? (32u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v27)) > _g4_s3 ? (48u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v28)) > _g4_s4 ? (64u + sizeof(_g4_t_v28)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);

  v4 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (unsigned int)(v7 - 12) <= 4 && *(uint16_t *)(v6 + 12) > a3 )
      {
        v8 = (int *)(*(uint32_t *)(v6 + 4) + a1 + 48);
        if ( v7 == 14 )
        {
          v12 = *v8;
          v13 = 0;
          v26 = v12;
          if ( v12 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v12 + 4), 1u);
            v13 = v26;
          }
          v14 = *a4;
          *a4 = v13;
          v26 = v14;
          sub_5ED480(&v26);
          return 1;
        }
        else if ( *(uint8_t *)(v6 + 9) > 0xEu )
        {
          if ( v7 == 15 )
          {
            v21 = *v8;
            v22 = 0;
            v27 = v21;
            if ( v21 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v21 + 4), 1u);
              v22 = v27;
            }
            v23 = *a4;
            *a4 = v22;
            v27 = v23;
            sub_5ED480(&v27);
            return 1;
          }
          else
          {
            v18 = *v8;
            v19 = 0;
            v28 = v18;
            if ( v18 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v18 + 4), 1u);
              v19 = v28;
            }
            v20 = *a4;
            *a4 = v19;
            v28 = v20;
            sub_5ED480(&v28);
            return 1;
          }
        }
        else if ( v7 == 13 )
        {
          v15 = *v8;
          v16 = 0;
          v25 = v15;
          if ( v15 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v15 + 4), 1u);
            v16 = v25;
          }
          v17 = *a4;
          *a4 = v16;
          v25 = v17;
          sub_5ED480(&v25);
          return 1;
        }
        else
        {
          v9 = *v8;
          v10 = 0;
          v24 = v9;
          if ( v9 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v9 + 4), 1u);
            v10 = v24;
          }
          v11 = *a4;
          *a4 = v10;
          v24 = v11;
          sub_5ED480(&v24);
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_intrusive_ptr_video_ITex_a39eba  (binary VA: 0xe76c70)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_intrusive_ptr_video_ITex_a39eba(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, int *a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int *v7;
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
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v25)) > _g4_s2 ? (32u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v26)) > _g4_s3 ? (48u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v27)) > _g4_s4 ? (64u + sizeof(_g4_t_v27)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (unsigned int)(v6 - 12) <= 4 && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = (int *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
      if ( v6 == 14 )
      {
        v11 = *v7;
        v12 = 0;
        v25 = v11;
        if ( v11 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v11 + 4), 1u);
          v12 = v25;
        }
        v13 = *a4;
        *a4 = v12;
        v25 = v13;
        sub_5ED480(&v25);
        return 1;
      }
      else if ( *((uint8_t *)ParameterDef + 9) > 0xEu )
      {
        if ( v6 == 15 )
        {
          v20 = *v7;
          v21 = 0;
          v26 = v20;
          if ( v20 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v20 + 4), 1u);
            v21 = v26;
          }
          v22 = *a4;
          *a4 = v21;
          v26 = v22;
          sub_5ED480(&v26);
          return 1;
        }
        else
        {
          v17 = *v7;
          v18 = 0;
          v27 = v17;
          if ( v17 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v17 + 4), 1u);
            v18 = v27;
          }
          v19 = *a4;
          *a4 = v18;
          v27 = v19;
          sub_5ED480(&v27);
          return 1;
        }
      }
      else if ( v6 == 13 )
      {
        v14 = *v7;
        v15 = 0;
        v24 = v14;
        if ( v14 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v14 + 4), 1u);
          v15 = v24;
        }
        v16 = *a4;
        *a4 = v15;
        v24 = v16;
        sub_5ED480(&v24);
        return 1;
      }
      else
      {
        v8 = *v7;
        v9 = 0;
        v23 = v8;
        if ( v8 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
          v9 = v23;
        }
        v10 = *a4;
        *a4 = v9;
        v23 = v10;
        sub_5ED480(&v23);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_intrusive_ptr_video_ITex_3f78d8  (binary VA: 0xe76e30)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_intrusive_ptr_video_ITex_3f78d8(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, int *a4)
{
  uint32_t *ParameterDef;
  int v5;
  int v6;
  bool v7;
  int *v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef uint8_t _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (15u + sizeof(_g4_t_v15)) > _g4_s0 ? (15u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v16)) > _g4_s1 ? (16u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v17)) > _g4_s2 ? (32u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v18)) > _g4_s3 ? (48u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v19)) > _g4_s4 ? (64u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v20)) > _g4_s5 ? (80u + sizeof(_g4_t_v20)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 15u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 32u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  v15 = 0;
  if ( ParameterDef != nullptr )
  {
    v5 = *((uint8_t *)ParameterDef + 9);
    v6 = *a4;
    v7 = *a4 != 0 ? v5 == (*(uint32_t *)(*(uint32_t *)(v6 + 16) + 36) & 7) + 12 : (unsigned int)(v5 - 12) <= 4;
    v15 = 0;
    if ( v7 && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v15 = 1;
      v8 = (int *)(ParameterDef[1] + *((uint32_t *)a1 + 11));
      switch ( *((uint8_t *)ParameterDef + 9) )
      {
        case 0xC:
          v10 = 0;
          v16 = *a4;
          if ( v6 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
            v10 = v16;
          }
          v16 = *v8;
          *v8 = v10;
          sub_5ED480(&v16);
          v15 = 1;
          break;
        case 0xD:
          v11 = 0;
          v17 = *a4;
          if ( v6 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
            v11 = v17;
          }
          v17 = *v8;
          *v8 = v11;
          sub_5ED480(&v17);
          v15 = 1;
          break;
        case 0xE:
          v12 = 0;
          v18 = *a4;
          if ( v6 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
            v12 = v18;
          }
          v18 = *v8;
          *v8 = v12;
          sub_5ED480(&v18);
          v15 = 1;
          break;
        case 0xF:
          v14 = 0;
          v19 = *a4;
          if ( v6 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
            v14 = v19;
          }
          v19 = *v8;
          *v8 = v14;
          sub_5ED480(&v19);
          v15 = 1;
          break;
        case 0x10:
          v13 = 0;
          v20 = *a4;
          if ( v6 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1u);
            v13 = v20;
          }
          v20 = *v8;
          *v8 = v13;
          sub_5ED480(&v20);
          v15 = 1;
          break;
        default:
          return v15;
      }
    }
  }
  return v15;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_intrusive_ptr_video_ITex_3f78d8  (binary VA: 0xe77010)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<boost::intrusive_ptr<glitch::video::ITexture>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_intrusive_ptr_video_ITex_3f78d8(uint32_t *a1, uint16_t a2, unsigned int a3, int *a4)
{
  int v4;
  int result;
  int v6;
  int v7;
  int v8;
  bool v9; // si
  int *v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v23)) > _g4_s2 ? (32u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v24)) > _g4_s3 ? (48u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v25)) > _g4_s4 ? (64u + sizeof(_g4_t_v25)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 64u);

  v4 = a1[1];
  result = 0;
  if ( a2 < *(uint16_t *)(v4 + 14) )
  {
    v6 = *(uint32_t *)(v4 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      v8 = *a4;
      v9 = *a4 != 0 ? v7 == (*(uint32_t *)(*(uint32_t *)(v8 + 16) + 36) & 7) + 12 : (unsigned int)(v7 - 12) <= 4;
      result = 0;
      if ( v9 && *(uint16_t *)(v6 + 12) > a3 )
      {
        v10 = (int *)((uint32_t *)((char *)a1 + *(uint32_t *)(v6 + 4) + 48));
        switch ( *(uint8_t *)(v6 + 9) )
        {
          case 0xC:
            if ( v8 != *v10 )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
              v8 = *a4;
            }
            v11 = 0;
            v21 = v8;
            if ( v8 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
              v11 = v21;
            }
            v12 = *v10;
            *v10 = v11;
            v21 = v12;
            sub_5ED480(&v21);
            result = 1;
            break;
          case 0xD:
            if ( v8 != *v10 )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
              v8 = *a4;
            }
            v13 = 0;
            v22 = v8;
            if ( v8 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
              v13 = v22;
            }
            v14 = *v10;
            *v10 = v13;
            v22 = v14;
            sub_5ED480(&v22);
            result = 1;
            break;
          case 0xE:
            if ( v8 != *v10 )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
              v8 = *a4;
            }
            v15 = 0;
            v23 = v8;
            if ( v8 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
              v15 = v23;
            }
            v16 = *v10;
            *v10 = v15;
            v23 = v16;
            sub_5ED480(&v23);
            result = 1;
            break;
          case 0xF:
            if ( v8 != *v10 )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
              v8 = *a4;
            }
            v19 = 0;
            v24 = v8;
            if ( v8 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
              v19 = v24;
            }
            v20 = *v10;
            *v10 = v19;
            v24 = v20;
            sub_5ED480(&v24);
            result = 1;
            break;
          case 0x10:
            if ( v8 != *v10 )
            {
              a1[5] = -1;
              a1[6] = 15;
              a1[3] = -1;
              a1[4] = 15;
              v8 = *a4;
            }
            v17 = 0;
            v25 = v8;
            if ( v8 != 0 )
            {
              __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1u);
              v17 = v25;
            }
            v18 = *v10;
            *v10 = v17;
            v25 = v18;
            sub_5ED480(&v25);
            result = 1;
            break;
          default:
            result = 1;
            break;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_intrusive_ptr_video_CLig_cc65c2  (binary VA: 0xe773b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_intrusive_ptr_video_CLig_cc65c2(int a1, uint16_t a2, volatile int32_t **a3, int a4)
{
  int result;
  int v6;
  int v7;
  int v8;
  volatile int32_t **v9;
  volatile int32_t *v10;
  volatile int32_t *v11;
  volatile int32_t **v12;
  volatile int32_t **v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  unsigned int v22;
  bool v23; // cc
  int v24;
  uint32_t *v25;
  volatile int32_t **v26;
  volatile int32_t **v27;
  volatile int32_t **v28;
  volatile int32_t **v29;
  int v30;
  int v31;
  int v32;
  unsigned int v33;
  size_t v34;
  unsigned int v35;
  int v36;
  volatile int32_t **v37;

  result = 0;
  v6 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v6 + 14) )
  {
    v7 = *(uint32_t *)(v6 + 32) + 16 * a2;
    if ( v7 != 0 && *(uint8_t *)(v7 + 9) == 19 )
    {
      v8 = *(uint16_t *)(v7 + 12);
      result = 1;
      if ( *(uint16_t *)(v7 + 12) != 0 )
      {
        v9 = (volatile int32_t **)(a1 + *(uint32_t *)(v7 + 4) + 48);
        do
        {
          v10 = *v9;
          if ( *v9 != nullptr )
            __sync_add_and_fetch(v10, 1u);
          v11 = *a3;
          *a3 = v10;
          if ( v11 != nullptr && __sync_fetch_and_add(v11, 0xFFFFFFFF) == 1 )
          {
            v27 = v9;
            sub_5ED480((int *)v11 + 24);
            sub_5ED480((int *)v11 + 23);
            v12 = v27;
            if ( *((uint8_t *)v11 + 88) == 0 )
            {
              v30 = *((uint32_t *)v11 + 21);
              glf::SpinLock::Lock((volatile int32_t **)&glitch::core::Matrix4PoolLock);
              v13 = v27;
              v14 = (uint32_t *)glitch::memory::Matrix4Pool[1];
              v25 = v14;
              if ( v14 == (uint32_t *)glitch::memory::Matrix4Pool[2] )
              {
                v34 = 4;
                v16 = ((int)(uintptr_t)(v14) - glitch::memory::Matrix4Pool[0]) >> 2;
                v33 = v16;
                if ( v16 != 0 )
                {
                  v22 = 2 * v16;
                  if ( v33 <= v22 )
                  {
                    v23 = v22 <= 0x3FFFFFFF;
                    v24 = -4;
                    if ( v23 )
                      v24 = 8 * v33;
                    v34 = v24;
                  }
                  else
                  {
                    v34 = 0xFFFFFFFC;
                  }
                }
                v36 = sub_4EBDC0(v34);
                v35 = v36 + 4;
                v13 = v27;
                v17 = (uint32_t *)(v36 + 4 * v33);
                if ( v17 != nullptr )
                  *v17 = v30;
                v31 = glitch::memory::Matrix4Pool[0];
                if ( v25 != (uint32_t *)glitch::memory::Matrix4Pool[0] )
                {
                  v18 = (uint32_t *)glitch::memory::Matrix4Pool[0];
                  v19 = (uint32_t *)v36;
                  do
                  {
                    if ( v19 != nullptr )
                      *v19 = *v18;
                    ++v18;
                    ++v19;
                  }
                  while ( v25 != v18 );
                  v13 = v27;
                  v35 = v36 + 4 * (((unsigned int)(uintptr_t)(v25) - v31 - 4) >> 2) + 8;
                }
                v32 = glitch::memory::Matrix4Pool[1];
                if ( v25 != (uint32_t *)v32 )
                {
                  v20 = v25;
                  v37 = v13;
                  v21 = (uint32_t *)v35;
                  do
                  {
                    if ( v21 != nullptr )
                      *v21 = *v20;
                    ++v20;
                    ++v21;
                  }
                  while ( (uint32_t *)v32 != v20 );
                  v13 = v37;
                  v35 += 4 * ((unsigned int)(v32 - (uint32_t)(uintptr_t)(v25 + 1)) >> 2) + 4;
                }
                if ( glitch::memory::Matrix4Pool[0] != 0 )
                {
                  v29 = v13;
                  gll_operator_delete_arr(glitch::memory::Matrix4Pool[0]);
                  v13 = v29;
                }
                glitch::memory::Matrix4Pool[0] = v36;
                glitch::memory::Matrix4Pool[1] = v35;
                glitch::memory::Matrix4Pool[2] = v34 + v36;
              }
              else
              {
                v15 = 0;
                if ( v14 != nullptr )
                {
                  *v14 = v30;
                  v15 = glitch::memory::Matrix4Pool[1];
                }
                glitch::memory::Matrix4Pool[1] = v15 + 4;
              }
              v28 = v13;
              glf::SpinLock::Unlock((glf::SpinLock::Self *)&glitch::core::Matrix4PoolLock);
              v12 = v28;
            }
            *((uint32_t *)v11 + 21) = 0;
            v26 = v12;
            opDelete((void *)v11);
            v9 = v26;
          }
          a3 = (volatile int32_t **)((char *)a3 + a4);
          ++v9;
          --v8;
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_intrusive_ptr_video_CLig_618024  (binary VA: 0xe787d0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_intrusive_ptr_video_CLig_618024(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, volatile int32_t **a3, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int result;
  int v8;
  int v9;
  volatile int32_t **v11;
  volatile int32_t *v12;
  volatile int32_t *v13;
  uint32_t *v14;
  int v15;
  unsigned int v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  unsigned int v22;
  int v23;
  bool v24; // cc
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  size_t v33;
  unsigned int v34;
  int v35;
  volatile int32_t *v36;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  v8 = a6;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 19 )
  {
    if ( a6 == 0 )
      v8 = 4;
    v28 = v8;
    v9 = ParameterDef[1];
    result = 1;
    if ( a5 != 0 )
    {
      v27 = a5;
      v11 = (volatile int32_t **)(*((uint32_t *)a1 + 11) + v9 + 4 * a4);
      do
      {
        v12 = *a3;
        if ( *a3 != nullptr )
          __sync_add_and_fetch(v12, 1u);
        v13 = *v11;
        *v11 = v12;
        if ( v13 != nullptr && __sync_fetch_and_add(v13, 0xFFFFFFFF) == 1 )
        {
          sub_5ED480((int *)v13 + 24);
          sub_5ED480((int *)v13 + 23);
          if ( *((uint8_t *)v13 + 88) == 0 )
          {
            v29 = *((uint32_t *)v13 + 21);
            glf::SpinLock::Lock((volatile int32_t **)&glitch::core::Matrix4PoolLock);
            v14 = (uint32_t *)glitch::memory::Matrix4Pool[1];
            if ( v14 == (uint32_t *)glitch::memory::Matrix4Pool[2] )
            {
              v16 = ((int)(uintptr_t)(v14) - glitch::memory::Matrix4Pool[0]) >> 2;
              v33 = 4;
              v32 = v16;
              if ( v16 != 0 )
              {
                v22 = 2 * v16;
                if ( v16 <= 2 * v16 )
                {
                  v23 = 8 * v16;
                  v24 = v22 <= 0x3FFFFFFF;
                  v25 = -4;
                  if ( v24 )
                    v25 = v23;
                  v33 = v25;
                }
                else
                {
                  v33 = 0xFFFFFFFC;
                }
              }
              v26 = glitch::memory::Matrix4Pool[1];
              v35 = sub_4EBDC0(v33);
              v34 = v35 + 4;
              v17 = (uint32_t *)(v35 + 4 * v32);
              if ( v17 != nullptr )
                *v17 = v29;
              v30 = glitch::memory::Matrix4Pool[0];
              if ( v26 != glitch::memory::Matrix4Pool[0] )
              {
                v18 = (uint32_t *)glitch::memory::Matrix4Pool[0];
                v36 = v13;
                v19 = (uint32_t *)v35;
                do
                {
                  if ( v19 != nullptr )
                    *v19 = *v18;
                  ++v18;
                  ++v19;
                }
                while ( (uint32_t *)v26 != v18 );
                v13 = v36;
                v34 = v35 + 4 * ((unsigned int)(v26 - (v30 + 4)) >> 2) + 8;
              }
              v31 = glitch::memory::Matrix4Pool[1];
              if ( v26 != v31 )
              {
                v20 = (uint32_t *)v26;
                v21 = (uint32_t *)v34;
                do
                {
                  if ( v21 != nullptr )
                    *v21 = *v20;
                  ++v20;
                  ++v21;
                }
                while ( (uint32_t *)v31 != v20 );
                v34 += 4 * ((unsigned int)(v31 - (v26 + 4)) >> 2) + 4;
              }
              if ( glitch::memory::Matrix4Pool[0] != 0 )
                gll_operator_delete_arr(glitch::memory::Matrix4Pool[0]);
              glitch::memory::Matrix4Pool[0] = v35;
              glitch::memory::Matrix4Pool[1] = v34;
              glitch::memory::Matrix4Pool[2] = v33 + v35;
            }
            else
            {
              v15 = 0;
              if ( v14 != nullptr )
              {
                *v14 = v29;
                v15 = glitch::memory::Matrix4Pool[1];
              }
              glitch::memory::Matrix4Pool[1] = v15 + 4;
            }
            glf::SpinLock::Unlock((glf::SpinLock::Self *)&glitch::core::Matrix4PoolLock);
          }
          *((uint32_t *)v13 + 21) = 0;
          opDelete((void *)v13);
        }
        ++v11;
        a3 = (volatile int32_t **)((char *)a3 + v28);
        --v27;
      }
      while ( v27 != 0 );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_CLig_618024  (binary VA: 0xe7a050)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_CLig_618024(int a1, uint16_t a2, volatile int32_t **a3, int a4, int a5, int a6)
{
  int result;
  int v8;
  int v9;
  int v10;
  int v11;
  volatile int32_t **v12;
  volatile int32_t *v13;
  int *v14;
  int *v15;
  volatile int32_t **v16;
  volatile int32_t **v17;
  volatile int32_t **v18;
  int *v19;

  result = 0;
  v8 = a5;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v9 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v9 != 0 && *(uint8_t *)(v9 + 9) == 19 )
    {
      v10 = 4;
      if ( a6 != 0 )
        v10 = a6;
      v11 = *(uint32_t *)(v9 + 4);
      result = 1;
      if ( a5 != 0 )
      {
        v12 = (volatile int32_t **)(*(uint32_t *)(a1 + 36) + v11 + 4 * a4);
        do
        {
          v13 = *a3;
          if ( *a3 != nullptr )
            __sync_add_and_fetch(v13, 1u);
          v14 = (int *)*v12;
          *v12 = v13;
          if ( v14 != nullptr && __sync_fetch_and_add(v14, 0xFFFFFFFF) == 1 )
          {
            v18 = v12;
            v19 = v14;
            sub_5ED480(v14 + 24);
            sub_5ED480(v19 + 23);
            v15 = v19;
            v16 = v18;
            if ( *((uint8_t *)v19 + 88) == 0 )
            {
              sub_960FA0(v19[21]);
              v16 = v18;
              v15 = v19;
            }
            v15[21] = 0;
            v17 = v16;
            opDelete(v15);
            v12 = v17;
          }
          ++v12;
          a3 = (volatile int32_t **)((char *)a3 + v10);
          --v8;
        }
        while ( v8 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_intrusive_ptr_video_CLig_cc65c2  (binary VA: 0xe7d410)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_intrusive_ptr_video_CLig_cc65c2(int a1, uint16_t a2, volatile int32_t **a3, int a4)
{
  int result;
  int v6;
  int v7;
  volatile int32_t **v8;
  volatile int32_t *v9;
  volatile int32_t *v10;
  volatile int32_t **v11;
  volatile int32_t **v12;
  volatile int32_t **v13;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v6 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 19 )
    {
      v7 = *(uint16_t *)(v6 + 12);
      result = 1;
      if ( *(uint16_t *)(v6 + 12) != 0 )
      {
        v8 = (volatile int32_t **)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v6 + 4));
        do
        {
          v9 = *v8;
          if ( *v8 != nullptr )
            __sync_add_and_fetch(v9, 1u);
          v10 = *a3;
          *a3 = v9;
          if ( v10 != nullptr && __sync_fetch_and_add(v10, 0xFFFFFFFF) == 1 )
          {
            v13 = v8;
            sub_5ED480((int *)v10 + 24);
            sub_5ED480((int *)v10 + 23);
            v11 = v13;
            if ( *((uint8_t *)v10 + 88) == 0 )
            {
              sub_960FA0(*((uint32_t *)v10 + 21));
              v11 = v13;
            }
            *((uint32_t *)v10 + 21) = 0;
            v12 = v11;
            opDelete((void *)v10);
            v8 = v12;
          }
          a3 = (volatile int32_t **)((char *)a3 + a4);
          ++v8;
          --v7;
        }
        while ( v7 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_intrusive_ptr_video_CLig_cc65c2  (binary VA: 0xe7d740)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_intrusive_ptr_video_CLig_cc65c2(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, volatile int32_t **a3, int a4)
{
  uint32_t *ParameterDef;
  int result;
  volatile int32_t **v7;
  volatile int32_t *v8;
  volatile int32_t *v9;
  volatile int32_t **v10;
  volatile int32_t **v11;
  volatile int32_t **v12;
  int v13;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 19 )
  {
    result = 1;
    v13 = *((uint16_t *)ParameterDef + 6);
    if ( *((uint16_t *)ParameterDef + 6) != 0 )
    {
      v7 = (volatile int32_t **)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
      do
      {
        v8 = *v7;
        if ( *v7 != nullptr )
          __sync_add_and_fetch(v8, 1u);
        v9 = *a3;
        *a3 = v8;
        if ( v9 != nullptr && __sync_fetch_and_add(v9, 0xFFFFFFFF) == 1 )
        {
          v12 = v7;
          sub_5ED480((int *)v9 + 24);
          sub_5ED480((int *)v9 + 23);
          v10 = v12;
          if ( *((uint8_t *)v9 + 88) == 0 )
          {
            sub_960FA0(*((uint32_t *)v9 + 21));
            v10 = v12;
          }
          *((uint32_t *)v9 + 21) = 0;
          v11 = v10;
          opDelete((void *)v9);
          v7 = v11;
        }
        a3 = (volatile int32_t **)((char *)a3 + a4);
        ++v7;
        --v13;
      }
      while ( v13 != 0 );
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_intrusive_ptr_video_CLig_0a3a8c  (binary VA: 0xe7da80)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_intrusive_ptr_video_CLig_0a3a8c(int a1, uint16_t a2, volatile int32_t **a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;

  v6 = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v7 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v7 != 0 )
    {
      v8 = *(uint8_t *)(v7 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v8] & 0x80000) != 0 )
      {
        v6 = 1;
        if ( a6 != 0 && v8 == 19 )
          sub_E4B460(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v7 + 4), a3, a4, a5, a6);
      }
    }
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_intrusive_ptr_video_CLig_0a3a8c  (binary VA: 0xe7de50)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_intrusive_ptr_video_CLig_0a3a8c(uint32_t *a1, uint16_t a2, volatile int32_t **a3, int a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;

  v6 = a1[1];
  v7 = 0;
  if ( a2 < *(uint16_t *)(v6 + 14) )
  {
    v8 = *(uint32_t *)(v6 + 32) + 16 * a2;
    if ( v8 != 0
      && (glitch::video::detail::SShaderParameterTypeInspection::Convertions[*(uint8_t *)(v8 + 9)] & 0x80000) != 0 )
    {
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      v7 = 1;
      if ( a6 != 0 && *(uint8_t *)(v8 + 9) == 19 )
        sub_E4B460((int)(uintptr_t)(a1) + *(uint32_t *)(v8 + 4) + 48, a3, a4, a5, a6);
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_intrusive_ptr_video_CLig_0a3a8c  (binary VA: 0xe7e260)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_intrusive_ptr_video_CLig_0a3a8c(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, volatile int32_t **a3, int a4, int a5, int a6)
{
  uint32_t *ParameterDef;
  int v7;
  int v8;
  int v9;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  v7 = 0;
  if ( ParameterDef != nullptr )
  {
    v8 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v8] & 0x80000) != 0 )
    {
      v7 = 1;
      if ( a6 != 0 )
      {
        v9 = ParameterDef[1];
        if ( v8 == 19 )
          sub_E4B460(*((uint32_t *)a1 + 11) + v9, a3, a4, a5, a6);
      }
    }
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_CLig_618024  (binary VA: 0xe7f670)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_CLig_618024(uint32_t *a1, uint16_t a2, volatile int32_t **a3, int a4, int a5, int a6)
{
  int result;
  int v7;
  int v8;
  bool v9;
  int v10;
  int v11;
  int v12;
  int v13;
  volatile int32_t **v15;
  volatile int32_t *v16;
  volatile int32_t *v17;
  int v18;
  int v19;

  result = 0;
  v7 = a1[1];
  if ( a2 < *(uint16_t *)(v7 + 14) )
  {
    v8 = 16 * a2;
    v9 = *(uint32_t *)(v7 + 32) + v8 == 0;
    v10 = *(uint32_t *)(v7 + 32) + v8;
    v11 = v10;
    if ( !v9 && *(uint8_t *)(v10 + 9) == 19 )
    {
      v12 = 4;
      if ( a6 != 0 )
        v12 = a6;
      a1[5] = -1;
      a1[6] = 15;
      a1[3] = -1;
      a1[4] = 15;
      result = 1;
      v13 = *(uint32_t *)(v11 + 4);
      if ( a5 != 0 )
      {
        v19 = v12;
        v18 = a5;
        v15 = (volatile int32_t **)((char *)&a1[a4 + 12] + v13);
        do
        {
          v16 = *a3;
          if ( *a3 != nullptr )
            __sync_add_and_fetch(v16, 1u);
          v17 = *v15;
          *v15 = v16;
          if ( v17 != nullptr && __sync_fetch_and_add(v17, 0xFFFFFFFF) == 1 )
          {
            sub_5ED480((int *)v17 + 24);
            sub_5ED480((int *)v17 + 23);
            if ( *((uint8_t *)v17 + 88) == 0 )
              sub_960FA0(*((uint32_t *)v17 + 21));
            *((uint32_t *)v17 + 21) = 0;
            opDelete((void *)v17);
          }
          ++v15;
          a3 = (volatile int32_t **)((char *)a3 + v19);
          --v18;
        }
        while ( v18 != 0 );
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_intrusive_ptr_video_CLig_061244  (binary VA: 0xe815f0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_intrusive_ptr_video_CLig_061244(int a1, uint16_t a2, volatile int32_t **a3, int a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  volatile int32_t **v9;
  int i;
  volatile int32_t *v12;
  volatile int32_t *v13;
  volatile int32_t **v14;
  volatile int32_t **v15;
  volatile int32_t **v16;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x80000) != 0 )
      {
        result = 1;
        if ( a4 != 0 )
        {
          v7 = *(uint32_t *)(v5 + 4);
          if ( v6 == 19 )
          {
            v8 = *(uint16_t *)(v5 + 12);
            if ( v8 != 0 )
            {
              v9 = (volatile int32_t **)(*(uint32_t *)(a1 + 36) + v7);
              for ( i = v8; i != 0; --i )
              {
                v12 = *v9;
                if ( *v9 != nullptr )
                  __sync_add_and_fetch(v12, 1u);
                v13 = *a3;
                *a3 = v12;
                if ( v13 != nullptr && __sync_fetch_and_add(v13, 0xFFFFFFFF) == 1 )
                {
                  v16 = v9;
                  sub_5ED480((int *)v13 + 24);
                  sub_5ED480((int *)v13 + 23);
                  v14 = v16;
                  if ( *((uint8_t *)v13 + 88) == 0 )
                  {
                    sub_960FA0(*((uint32_t *)v13 + 21));
                    v14 = v16;
                  }
                  *((uint32_t *)v13 + 21) = 0;
                  v15 = v14;
                  opDelete((void *)v13);
                  v9 = v15;
                }
                a3 = (volatile int32_t **)((char *)a3 + a4);
                ++v9;
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_intrusive_ptr_video_CLig_061244  (binary VA: 0xe81950)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_intrusive_ptr_video_CLig_061244(int a1, uint16_t a2, volatile int32_t **a3, int a4)
{
  int v5;
  int result;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  volatile int32_t **v12;
  volatile int32_t *v13;
  volatile int32_t *v14;
  volatile int32_t **v15;
  volatile int32_t **v16;
  volatile int32_t **v17;

  v5 = *(uint32_t *)(a1 + 4);
  result = 0;
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v7 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v7 != 0 )
    {
      v8 = *(uint8_t *)(v7 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v8] & 0x80000) != 0 )
      {
        result = 1;
        if ( a4 != 0 )
        {
          v9 = *(uint32_t *)(v7 + 4);
          if ( v8 == 19 )
          {
            v10 = *(uint16_t *)(v7 + 12);
            if ( v10 != 0 )
            {
              v11 = v10;
              v12 = (volatile int32_t **)(a1 + v9 + 48);
              do
              {
                v13 = *v12;
                if ( *v12 != nullptr )
                  __sync_add_and_fetch(v13, 1u);
                v14 = *a3;
                *a3 = v13;
                if ( v14 != nullptr && __sync_fetch_and_add(v14, 0xFFFFFFFF) == 1 )
                {
                  v17 = v12;
                  sub_5ED480((int *)v14 + 24);
                  sub_5ED480((int *)v14 + 23);
                  v15 = v17;
                  if ( *((uint8_t *)v14 + 88) == 0 )
                  {
                    sub_960FA0(*((uint32_t *)v14 + 21));
                    v15 = v17;
                  }
                  *((uint32_t *)v14 + 21) = 0;
                  v16 = v15;
                  opDelete((void *)v14);
                  v12 = v16;
                }
                a3 = (volatile int32_t **)((char *)a3 + a4);
                ++v12;
                --v11;
              }
              while ( v11 != 0 );
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_intrusive_ptr_video_CLig_061244  (binary VA: 0xe81cb0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_intrusive_ptr_video_CLig_061244(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, volatile int32_t **a3, int a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int v7;
  volatile int32_t **v8;
  int v10;
  volatile int32_t *v11;
  volatile int32_t *v12;
  volatile int32_t **v13;
  volatile int32_t **v14;
  volatile int32_t **v15;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x80000) != 0 )
    {
      result = 1;
      if ( a4 != 0 && v6 == 19 )
      {
        v7 = *((uint16_t *)ParameterDef + 6);
        if ( *((uint16_t *)ParameterDef + 6) != 0 )
        {
          v8 = (volatile int32_t **)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
          v10 = v7;
          do
          {
            v11 = *v8;
            if ( *v8 != nullptr )
              __sync_add_and_fetch(v11, 1u);
            v12 = *a3;
            *a3 = v11;
            if ( v12 != nullptr && __sync_fetch_and_add(v12, 0xFFFFFFFF) == 1 )
            {
              v15 = v8;
              sub_5ED480((int *)v12 + 24);
              sub_5ED480((int *)v12 + 23);
              v13 = v15;
              if ( *((uint8_t *)v12 + 88) == 0 )
              {
                sub_960FA0(*((uint32_t *)v12 + 21));
                v13 = v15;
              }
              *((uint32_t *)v12 + 21) = 0;
              v14 = v13;
              opDelete((void *)v12);
              v8 = v14;
            }
            a3 = (volatile int32_t **)((char *)a3 + a4);
            ++v8;
            --v10;
          }
          while ( v10 != 0 );
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_CLig_618024  (binary VA: 0xe82000)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameter<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameter_intrusive_ptr_video_CLig_618024(uint32_t *a1, uint16_t a2, unsigned int a3, volatile int32_t **a4)
{
  int result;
  int v5;
  int v6;
  volatile int32_t *v7;
  volatile int32_t **v8;
  volatile int32_t *v9;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 19 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = *a4;
      v8 = (volatile int32_t **)((char *)&a1[a3 + 12] + *(uint32_t *)(v6 + 4));
      if ( *v8 != *a4 )
      {
        a1[5] = -1;
        a1[6] = 15;
        a1[3] = -1;
        a1[4] = 15;
        v7 = *a4;
      }
      if ( v7 != nullptr )
        __sync_add_and_fetch(v7, 1u);
      v9 = *v8;
      *v8 = v7;
      result = 1;
      if ( v9 != nullptr && __sync_fetch_and_add(v9, 0xFFFFFFFF) == 1 )
      {
        sub_5ED480((int *)v9 + 24);
        sub_5ED480((int *)v9 + 23);
        if ( *((uint8_t *)v9 + 88) == 0 )
          sub_960FA0(*((uint32_t *)v9 + 21));
        *((uint32_t *)v9 + 21) = 0;
        opDelete((void *)v9);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_intrusive_ptr_video_CLig_cc65c2  (binary VA: 0xe82b80)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameter<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameter_intrusive_ptr_video_CLig_cc65c2(int a1, uint16_t a2, unsigned int a3, volatile int32_t **a4)
{
  int result;
  int v5;
  volatile int32_t *v6;
  volatile int32_t *v7;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 19 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = *(volatile int32_t **)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 4 * a3);
      if ( v6 != nullptr )
        __sync_add_and_fetch(v6, 1u);
      v7 = *a4;
      *a4 = v6;
      result = 1;
      if ( v7 != nullptr && __sync_fetch_and_add(v7, 0xFFFFFFFF) == 1 )
      {
        sub_5ED480((int *)v7 + 24);
        sub_5ED480((int *)v7 + 23);
        if ( *((uint8_t *)v7 + 88) == 0 )
          sub_960FA0(*((uint32_t *)v7 + 21));
        *((uint32_t *)v7 + 21) = 0;
        opDelete((void *)v7);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_intrusive_ptr_video_CLig_cc65c2  (binary VA: 0xe82ed0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameter<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameter_intrusive_ptr_video_CLig_cc65c2(int a1, uint16_t a2, unsigned int a3, volatile int32_t **a4)
{
  int result;
  int v5;
  int v6;
  volatile int32_t *v7;
  volatile int32_t *v8;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 && *(uint8_t *)(v6 + 9) == 19 && *(uint16_t *)(v6 + 12) > a3 )
    {
      v7 = *(volatile int32_t **)(*(uint32_t *)(v6 + 4) + a1 + 4 * a3 + 48);
      if ( v7 != nullptr )
        __sync_add_and_fetch(v7, 1u);
      v8 = *a4;
      *a4 = v7;
      result = 1;
      if ( v8 != nullptr && __sync_fetch_and_add(v8, 0xFFFFFFFF) == 1 )
      {
        sub_5ED480((int *)v8 + 24);
        sub_5ED480((int *)v8 + 23);
        if ( *((uint8_t *)v8 + 88) == 0 )
          sub_960FA0(*((uint32_t *)v8 + 21));
        *((uint32_t *)v8 + 21) = 0;
        opDelete((void *)v8);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_intrusive_ptr_video_CLig_cc65c2  (binary VA: 0xe83230)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameter<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameter_intrusive_ptr_video_CLig_cc65c2(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, volatile int32_t **a4)
{
  uint32_t *ParameterDef;
  int result;
  volatile int32_t *v6;
  volatile int32_t *v7;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 19 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = *(volatile int32_t **)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a3);
    if ( v6 != nullptr )
      __sync_add_and_fetch(v6, 1u);
    v7 = *a4;
    *a4 = v6;
    result = 1;
    if ( v7 != nullptr && __sync_fetch_and_add(v7, 0xFFFFFFFF) == 1 )
    {
      sub_5ED480((int *)v7 + 24);
      sub_5ED480((int *)v7 + 23);
      if ( *((uint8_t *)v7 + 88) == 0 )
        sub_960FA0(*((uint32_t *)v7 + 21));
      *((uint32_t *)v7 + 21) = 0;
      opDelete((void *)v7);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_CLig_618024  (binary VA: 0xe83580)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameter<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameter_intrusive_ptr_video_CLig_618024(int a1, uint16_t a2, unsigned int a3, volatile int32_t **a4)
{
  int result;
  int v5;
  volatile int32_t **v6;
  volatile int32_t *v7;
  volatile int32_t *v8;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 && *(uint8_t *)(v5 + 9) == 19 && *(uint16_t *)(v5 + 12) > a3 )
    {
      v6 = (volatile int32_t **)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4) + 4 * a3);
      v7 = *a4;
      if ( *a4 != nullptr )
        __sync_add_and_fetch(v7, 1u);
      v8 = *v6;
      *v6 = v7;
      result = 1;
      if ( v8 != nullptr && __sync_fetch_and_add(v8, 0xFFFFFFFF) == 1 )
      {
        sub_5ED480((int *)v8 + 24);
        sub_5ED480((int *)v8 + 23);
        if ( *((uint8_t *)v8 + 88) == 0 )
          sub_960FA0(*((uint32_t *)v8 + 21));
        *((uint32_t *)v8 + 21) = 0;
        opDelete((void *)v8);
        return 1;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_intrusive_ptr_video_CLig_618024  (binary VA: 0xe838a0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameter<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameter_intrusive_ptr_video_CLig_618024(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, volatile int32_t **a4)
{
  uint32_t *ParameterDef;
  int result;
  volatile int32_t **v6;
  volatile int32_t *v7;
  volatile int32_t *v8;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr && *((uint8_t *)ParameterDef + 9) == 19 && *((uint16_t *)ParameterDef + 6) > a3 )
  {
    v6 = (volatile int32_t **)(*((uint32_t *)a1 + 11) + ParameterDef[1] + 4 * a3);
    v7 = *a4;
    if ( *a4 != nullptr )
      __sync_add_and_fetch(v7, 1u);
    v8 = *v6;
    *v6 = v7;
    result = 1;
    if ( v8 != nullptr && __sync_fetch_and_add(v8, 0xFFFFFFFF) == 1 )
    {
      sub_5ED480((int *)v8 + 24);
      sub_5ED480((int *)v8 + 23);
      if ( *((uint8_t *)v8 + 88) == 0 )
        sub_960FA0(*((uint32_t *)v8 + 21));
      *((uint32_t *)v8 + 21) = 0;
      opDelete((void *)v8);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_intrusive_ptr_video_CLig_0a3a8c  (binary VA: 0xe83bc0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::setParameterCvt<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::setParameterCvt_intrusive_ptr_video_CLig_0a3a8c(uint32_t *a1, uint16_t a2, unsigned int a3, volatile int32_t **a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  volatile int32_t **v8;
  volatile int32_t *v9;
  volatile int32_t *v10;

  result = 0;
  v5 = a1[1];
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x80000) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 19 )
        {
          v8 = (volatile int32_t **)((char *)a1 + *(uint32_t *)(v6 + 4) + 48);
          v9 = *a4;
          if ( *v8 != *a4 )
          {
            a1[5] = -1;
            a1[6] = 15;
            a1[3] = -1;
            a1[4] = 15;
            v9 = *a4;
          }
          if ( v9 != nullptr )
            __sync_add_and_fetch(v9, 1u);
          v10 = *v8;
          *v8 = v9;
          result = 1;
          if ( v10 != nullptr && __sync_fetch_and_add(v10, 0xFFFFFFFF) == 1 )
          {
            sub_5ED480((int *)v10 + 24);
            sub_5ED480((int *)v10 + 23);
            if ( *((uint8_t *)v10 + 88) == 0 )
              sub_960FA0(*((uint32_t *)v10 + 21));
            *((uint32_t *)v10 + 21) = 0;
            opDelete((void *)v10);
            return 1;
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_intrusive_ptr_video_CLig_0a3a8c  (binary VA: 0xe83f20)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::setParameterCvt<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::setParameterCvt_intrusive_ptr_video_CLig_0a3a8c(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, volatile int32_t **a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  volatile int32_t **v10;
  volatile int32_t *v11;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x80000) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      v7 = *((uint32_t *)a1 + 11);
      v8 = ParameterDef[1];
      result = 1;
      if ( v6 == 19 )
      {
        v9 = *a4;
        if ( *a4 != nullptr )
          __sync_add_and_fetch(v9, 1u);
        v10 = (volatile int32_t **)(v7 + v8);
        v11 = *v10;
        *v10 = v9;
        result = 1;
        if ( v11 != nullptr && __sync_fetch_and_add(v11, 0xFFFFFFFF) == 1 )
        {
          sub_5ED480((int *)v11 + 24);
          sub_5ED480((int *)v11 + 23);
          if ( *((uint8_t *)v11 + 88) == 0 )
            sub_960FA0(*((uint32_t *)v11 + 21));
          *((uint32_t *)v11 + 21) = 0;
          opDelete((void *)v11);
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_intrusive_ptr_video_CLig_061244  (binary VA: 0xe84250)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::getParameterCvt<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::getParameterCvt_intrusive_ptr_video_CLig_061244(int a1, uint16_t a2, unsigned int a3, volatile int32_t **a4)
{
  int result;
  int v5;
  int v6;
  volatile int32_t *v7;
  volatile int32_t *v8;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x80000) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        if ( v6 == 19 )
        {
          v7 = *(volatile int32_t **)(*(uint32_t *)(a1 + 36) + *(uint32_t *)(v5 + 4));
          if ( v7 != nullptr )
            __sync_add_and_fetch(v7, 1u);
          v8 = *a4;
          *a4 = v7;
          result = 1;
          if ( v8 != nullptr && __sync_fetch_and_add(v8, 0xFFFFFFFF) == 1 )
          {
            sub_5ED480((int *)v8 + 24);
            sub_5ED480((int *)v8 + 23);
            if ( *((uint8_t *)v8 + 88) == 0 )
              sub_960FA0(*((uint32_t *)v8 + 21));
            *((uint32_t *)v8 + 21) = 0;
            opDelete((void *)v8);
            return 1;
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_intrusive_ptr_video_CLig_0a3a8c  (binary VA: 0xe845b0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterialRenderer,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterialRenderer>>::setParameterCvt<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterialRenderer_1615ef::setParameterCvt_intrusive_ptr_video_CLig_0a3a8c(int a1, uint16_t a2, unsigned int a3, volatile int32_t **a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  volatile int32_t **v10;
  volatile int32_t *v11;

  result = 0;
  if ( a2 < *(uint16_t *)(a1 + 14) )
  {
    v5 = *(uint32_t *)(a1 + 32) + 16 * a2;
    if ( v5 != 0 )
    {
      v6 = *(uint8_t *)(v5 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x80000) != 0
        && *(uint16_t *)(v5 + 12) > a3 )
      {
        v7 = *(uint32_t *)(a1 + 36);
        result = 1;
        v8 = *(uint32_t *)(v5 + 4);
        if ( v6 == 19 )
        {
          v9 = *a4;
          if ( *a4 != nullptr )
            __sync_add_and_fetch(v9, 1u);
          v10 = (volatile int32_t **)(v7 + v8);
          v11 = *v10;
          *v10 = v9;
          result = 1;
          if ( v11 != nullptr && __sync_fetch_and_add(v11, 0xFFFFFFFF) == 1 )
          {
            sub_5ED480((int *)v11 + 24);
            sub_5ED480((int *)v11 + 23);
            if ( *((uint8_t *)v11 + 88) == 0 )
              sub_960FA0(*((uint32_t *)v11 + 21));
            *((uint32_t *)v11 + 21) = 0;
            opDelete((void *)v11);
            return 1;
          }
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_intrusive_ptr_video_CLig_061244  (binary VA: 0xe848e0)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CMaterial,glitch::ISharedMemoryBlockHeader<glitch::video::CMaterial>>::getParameterCvt<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CMaterial_ISharedM_2c2257::getParameterCvt_intrusive_ptr_video_CLig_061244(int a1, uint16_t a2, unsigned int a3, volatile int32_t **a4)
{
  int result;
  int v5;
  int v6;
  int v7;
  volatile int32_t *v8;
  volatile int32_t *v9;

  result = 0;
  v5 = *(uint32_t *)(a1 + 4);
  if ( a2 < *(uint16_t *)(v5 + 14) )
  {
    v6 = *(uint32_t *)(v5 + 32) + 16 * a2;
    if ( v6 != 0 )
    {
      v7 = *(uint8_t *)(v6 + 9);
      if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v7] & 0x80000) != 0
        && *(uint16_t *)(v6 + 12) > a3 )
      {
        if ( v7 == 19 )
        {
          v8 = *(volatile int32_t **)(a1 + *(uint32_t *)(v6 + 4) + 48);
          if ( v8 != nullptr )
            __sync_add_and_fetch(v8, 1u);
          v9 = *a4;
          *a4 = v8;
          result = 1;
          if ( v9 != nullptr && __sync_fetch_and_add(v9, 0xFFFFFFFF) == 1 )
          {
            sub_5ED480((int *)v9 + 24);
            sub_5ED480((int *)v9 + 23);
            if ( *((uint8_t *)v9 + 88) == 0 )
              sub_960FA0(*((uint32_t *)v9 + 21));
            *((uint32_t *)v9 + 21) = 0;
            opDelete((void *)v9);
            return 1;
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_intrusive_ptr_video_CLig_061244  (binary VA: 0xe84c50)
// Original: glitch::video::detail::IMaterialParameters<glitch::video::CGlobalMaterialParameterManager,glitch::video::detail::globalmaterialparametermanager::SEmptyBase>::getParameterCvt<boost::intrusive_ptr<glitch::video::CLight>>
// ----------------------------------------------------------------------------
int glitch::video::detail::IMaterialParameters_video_CGlobalMaterialPar_81937e::getParameterCvt_intrusive_ptr_video_CLig_061244(glitch::video::CGlobalMaterialParameterManager::Self *a1, uint16_t a2, unsigned int a3, volatile int32_t **a4)
{
  uint32_t *ParameterDef;
  int result;
  int v6;
  volatile int32_t *v7;
  volatile int32_t *v8;

  ParameterDef = glitch::video::CGlobalMaterialParameterManager::getParameterDef(a1, a2);
  result = 0;
  if ( ParameterDef != nullptr )
  {
    v6 = *((uint8_t *)ParameterDef + 9);
    if ( (glitch::video::detail::SShaderParameterTypeInspection::Convertions[v6] & 0x80000) != 0
      && *((uint16_t *)ParameterDef + 6) > a3 )
    {
      if ( v6 == 19 )
      {
        v7 = *(volatile int32_t **)(*((uint32_t *)a1 + 11) + ParameterDef[1]);
        if ( v7 != nullptr )
          __sync_add_and_fetch(v7, 1u);
        v8 = *a4;
        *a4 = v7;
        result = 1;
        if ( v8 != nullptr && __sync_fetch_and_add(v8, 0xFFFFFFFF) == 1 )
        {
          sub_5ED480((int *)v8 + 24);
          sub_5ED480((int *)v8 + 23);
          if ( *((uint8_t *)v8 + 88) == 0 )
            sub_960FA0(*((uint32_t *)v8 + 21));
          *((uint32_t *)v8 + 21) = 0;
          opDelete((void *)v8);
          return 1;
        }
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}


