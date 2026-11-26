#include "Core/Utils/DecompTypes.h"
#include "glf_InputManager.h"

// ----------------------------------------------------------------------------
// Function: glf::InputManager::OnEvent  (binary VA: 0xcb4b60)
// Original: glf::InputManager::OnEvent
// ----------------------------------------------------------------------------
int glf::InputManager::OnEvent(int a1, int a2)
{
  return (*(int (**)(uint32_t, int))(**(uint32_t **)(a1 + 36) + 28))(*(uint32_t *)(a1 + 36), a2);
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::Construct  (binary VA: 0xcb4bd0)
// Original: glf::InputManager::InputManager
// ----------------------------------------------------------------------------
glf::InputManager::Self * glf::InputManager::Construct(glf::InputManager::Self *self)
{
  glf::SimpleButton::Self *v1;
  uint16_t *v2;
  char *v3;
  unsigned int v4;
  uint16_t *v5;
  unsigned int v6;
  int v7;
  __m128i v8;
  __m128i *v9;
  unsigned int v10;
  __m128i v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  __m128i v15;
  __m128i *v16;
  unsigned int v17;
  __m128i v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  __m128i v22;
  unsigned int v23;
  __m128i *v24;
  __m128i v25;
  unsigned int v26;
  glf::SimpleButton::Self *v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  char v36;
  unsigned int v37;
  unsigned int v38;
  char *v39;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E038);
  *((uint8_t *)self + 4) = 1;
  glf::Mutex::Construct((pthread_mutex_t **)self + 2, 0);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 6) = (uint32_t)(uintptr_t)((char *)self + 16);
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)((char *)self + 16);
  v39 = (char *)sub_4EBD10(0xF08u, 1);
  v39[8] = 0;
  *((uint32_t *)v39 + 1) = (uint32_t)(uintptr_t)(self);
  v39[9] = 0;
  *(uint32_t *)v39 = ((uint32_t)(uintptr_t)&off_206E0A8);
  glf::InputDevice::Construct((glf::InputDevice::Self *)(v39 + 12));
  *((uint32_t *)v39 + 3) = ((uint32_t)(uintptr_t)&off_206DFC8);
  v1 = (glf::SimpleButton::Self *)(v39 + 92);
  v36 = (uint8_t)(uintptr_t)v39 - 8;
  do
  {
    v28 = v1;
    v1 = (glf::SimpleButton::Self *)((char *)v1 + 4);
    glf::SimpleButton::SimpleButton(v28);
  }
  while ( v1 != (glf::SimpleButton::Self *)(v39 + 504) );
  v2 = (uint16_t *)(v39 + 504);
  v3 = v39 + 12;
  *((uint32_t *)v39 + 230) = (uint32_t)(uintptr_t)(&unk_213B8B4);
  *((uint32_t *)v39 + 4) = 103;
  *((uint32_t *)v39 + 5) = (uint32_t)(uintptr_t)(v39 + 92);
  v4 = 412;
  if ( (((uint8_t)(uintptr_t)v39 - 8) & 1) != 0 )
  {
    LOBYTE(v4) = -101;
    v2 = (uint16_t *)(v39 + 505);
    v39[504] = 0;
    if ( ((unsigned int)(uintptr_t)(v39 + 505) & 2) == 0 )
      goto LABEL_5;
  }
  else if ( (((uint8_t)(uintptr_t)v39 - 8) & 2) == 0 )
  {
    goto LABEL_5;
  }
  *v2 = 0;
  v4 -= 2;
  ++v2;
LABEL_5:
  memset(v2, 0, 4 * (v4 >> 2));
  v5 = &v2[2 * (v4 >> 2)];
  if ( (v4 & 2) != 0 )
    *v5++ = 0;
  if ( (v4 & 1) != 0 )
    *(uint8_t *)v5 = 0;
  v35 = -((uint8_t)(v36 & 0xF) >> 2) & 3;
  if ( v35 != 0 )
  {
    v6 = 0;
    do
    {
      *(uint32_t *)&v39[4 * v6 + 504] = v6 + 48;
      ++v6;
    }
    while ( (-((uint8_t)(v36 & 0xF) >> 2) & 3u) > v6 );
    v7 = 10 - v6;
  }
  else
  {
    v7 = 10;
    v6 = 0;
  }
  v32 = (unsigned int)(10 - v35) >> 2;
  v29 = 4 * v32;
  if ( 4 * v32 == 0 )
    goto LABEL_18;
g4_m128_lane<int64_t>(v8, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(v6 + 1)), 0);
g4_m128_lane<int64_t>(v8, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6 + 2), _mm_cvtsi32_si128(v6 + 3)), 0);
  v9 = (__m128i *)&v39[4 * v35 + 504];
  v10 = 0;
  while ( 1 )
  {
    ++v10;
    v11 = _mm_add_epi32(v8, G4_BITCAST<__m128i>(xmmword_1C7C400));
    *v9++ = _mm_add_epi32(v8, G4_BITCAST<__m128i>(xmmword_1C7C410));
    if ( v10 >= v32 )
      break;
    v8 = v11;
  }
  v7 -= v29;
  v6 += v29;
  if ( 10 - v35 != v29 )
  {
LABEL_18:
    v12 = v6 + 48;
    do
    {
      --v7;
      *(uint32_t *)&v3[4 * v12 + 300] = v12;
      ++v12;
    }
    while ( v7 != 0 );
  }
  v37 = -((uint8_t)((uint8_t)(uintptr_t)v39 & 0xF) >> 2) & 3;
  if ( v37 != 0 )
  {
    v13 = 10;
    do
    {
      *(uint32_t *)&v3[4 * v13 + 492] = v13 + 87;
      ++v13;
      v14 = 36 - v13;
    }
    while ( v37 > v13 - 10 );
  }
  else
  {
    v14 = 26;
    v13 = 10;
  }
  v33 = (26 - v37) >> 2;
  v30 = 4 * v33;
  if ( 4 * v33 == 0 )
    goto LABEL_28;
g4_m128_lane<int64_t>(v15, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(v13 + 1)), 0);
g4_m128_lane<int64_t>(v15, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v13 + 2), _mm_cvtsi32_si128(v13 + 3)), 0);
  v16 = (__m128i *)&v39[4 * v37 + 544];
  v17 = 0;
  while ( 1 )
  {
    ++v17;
    v18 = _mm_add_epi32(v15, G4_BITCAST<__m128i>(xmmword_1C7C400));
    *v16++ = _mm_add_epi32(v15, G4_BITCAST<__m128i>(xmmword_1C7C420));
    if ( v17 >= v33 )
      break;
    v15 = v18;
  }
  v14 -= v30;
  v13 += v30;
  if ( 26 - v37 != v30 )
  {
LABEL_28:
    v19 = v13 + 87;
    do
    {
      --v14;
      *(uint32_t *)&v3[4 * v19 + 144] = v19;
      ++v19;
    }
    while ( v14 != 0 );
  }
  v38 = -((uint8_t)(((uint8_t)(uintptr_t)v39 - 40) & 0xF) >> 2) & 3;
  if ( v38 != 0 )
  {
    v20 = 56;
    do
    {
      *(uint32_t *)&v3[4 * v20 + 492] = v20 - 8;
      ++v20;
      v21 = 66 - v20;
    }
    while ( v20 - 56 < v38 );
  }
  else
  {
    v21 = 10;
    v20 = 56;
  }
  v34 = (10 - v38) >> 2;
  v31 = 4 * v34;
  if ( 4 * v34 == 0 )
    goto LABEL_38;
g4_m128_lane<int64_t>(v22, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v20 + 1)), 0);
g4_m128_lane<int64_t>(v22, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v20 + 2), _mm_cvtsi32_si128(v20 + 3)), 0);
  v23 = 0;
  v24 = (__m128i *)&v39[4 * (-((uint8_t)(((uint8_t)(uintptr_t)v39 - 40) & 0xF) >> 2) & 3) + 728];
  while ( 1 )
  {
    ++v23;
    v25 = _mm_add_epi32(v22, G4_BITCAST<__m128i>(xmmword_1C7C400));
    *v24++ = _mm_add_epi32(v22, G4_BITCAST<__m128i>(xmmword_1C7C430));
    if ( v23 >= v34 )
      break;
    v22 = v25;
  }
  v21 -= v31;
  v20 += v31;
  if ( 10 - v38 != v31 )
  {
LABEL_38:
    v26 = v20 - 8;
    do
    {
      --v21;
      *(uint32_t *)&v3[4 * v26 + 524] = v26;
      ++v26;
    }
    while ( v21 != 0 );
  }
  *((uint32_t *)v39 + 192) = 43;
  *((uint32_t *)v39 + 193) = 45;
  *((uint32_t *)v39 + 194) = 47;
  *((uint32_t *)v39 + 195) = 42;
  *((uint32_t *)v39 + 197) = 46;
  *((uint32_t *)v39 + 199) = 32;
  *((uint32_t *)v39 + 200) = 43;
  *((uint32_t *)v39 + 201) = 45;
  *((uint32_t *)v39 + 202) = 46;
  *((uint32_t *)v39 + 203) = 47;
  *((uint32_t *)v39 + 204) = 35;
  *((uint32_t *)v39 + 205) = 61;
  v39[916] = 0;
  *((uint32_t *)v39 + 233) = 0;
  *((uint32_t *)v39 + 231) = 0;
  *((uint32_t *)v39 + 232) = 0;
  glf::InputDevice::Construct((glf::InputDevice::Self *)(v39 + 936));
  *((uint32_t *)v39 + 234) = ((uint32_t)(uintptr_t)&off_206DFE8);
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 1016));
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 1020));
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 1024));
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 1028));
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 1032));
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 1036));
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 1040));
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 1044));
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 1048));
  *((uint32_t *)v39 + 236) = (uint32_t)(uintptr_t)(v39 + 1016);
  v39[1052] = 0;
  *((uint16_t *)v39 + 527) = 0;
  *((uint16_t *)v39 + 528) = 0;
  *((uint16_t *)v39 + 529) = 0;
  *((uint16_t *)v39 + 530) = 0;
  *((uint32_t *)v39 + 266) = 0;
  *((uint32_t *)v39 + 235) = 9;
  *((uint32_t *)v39 + 239) = 1;
  *((uint32_t *)v39 + 240) = (uint32_t)(uintptr_t)(v39 + 1052);
  glf::InputDevice::Construct((glf::InputDevice::Self *)(v39 + 1068));
  *((uint32_t *)v39 + 267) = ((uint32_t)(uintptr_t)&off_206E0E8);
  v39[1148] = 0;
  *((uint16_t *)v39 + 575) = 0;
  *((uint16_t *)v39 + 576) = 0;
  *((uint16_t *)v39 + 577) = 0;
  *((uint16_t *)v39 + 578) = 0;
  v39[1158] = 0;
  *((uint16_t *)v39 + 580) = 0;
  *((uint16_t *)v39 + 581) = 0;
  *((uint16_t *)v39 + 582) = 0;
  *((uint16_t *)v39 + 583) = 0;
  v39[1168] = 0;
  *((uint16_t *)v39 + 585) = 0;
  *((uint16_t *)v39 + 586) = 0;
  *((uint16_t *)v39 + 587) = 0;
  *((uint16_t *)v39 + 588) = 0;
  v39[1178] = 0;
  *((uint16_t *)v39 + 590) = 0;
  *((uint16_t *)v39 + 591) = 0;
  *((uint16_t *)v39 + 592) = 0;
  *((uint16_t *)v39 + 593) = 0;
  glf::TouchPad::TouchPad((glf::TouchPad::Self *)(v39 + 1188));
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 3832));
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 3836));
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 3840));
  glf::SimpleButton::SimpleButton((glf::SimpleButton::Self *)(v39 + 3844));
  *((uint32_t *)v39 + 272) = 4;
  *((uint32_t *)v39 + 273) = (uint32_t)(uintptr_t)(v39 + 1148);
  *((uint32_t *)v39 + 269) = (uint32_t)(uintptr_t)(v39 + 3832);
  *((uint32_t *)v39 + 275) = (uint32_t)(uintptr_t)(v39 + 1188);
  *((uint32_t *)v39 + 268) = 4;
  *((uint32_t *)v39 + 274) = 1;
  glf::gImpl = (uintptr_t)(uintptr_t)(v39);
  glf::AndroidEnableAccelerometer((glf::Self *)((char *)&dword_0 + 1), 0.1f);
  v39[8] = 1;
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(v39);
  return (glf::InputManager::Self *)v39;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::GetKeyboard  (binary VA: 0xcb5400)
// Original: glf::InputManager::GetKeyboard
// ----------------------------------------------------------------------------
int glf::InputManager::GetKeyboard(glf::InputManager::Self *self)
{
  return *((uint32_t *)self + 9) + 12;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::GetMouse  (binary VA: 0xcb5410)
// Original: glf::InputManager::GetMouse
// ----------------------------------------------------------------------------
int glf::InputManager::GetMouse(glf::InputManager::Self *self)
{
  return *((uint32_t *)self + 9) + 936;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::GetGamepad  (binary VA: 0xcb5420)
// Original: glf::InputManager::GetGamepad
// ----------------------------------------------------------------------------
int glf::InputManager::GetGamepad(glf::InputManager::Self *self)
{
  return *((uint32_t *)self + 9) + 1068;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::GetKeyboardCount  (binary VA: 0xcb5430)
// Original: glf::InputManager::GetKeyboardCount
// ----------------------------------------------------------------------------
int glf::InputManager::GetKeyboardCount()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::GetMouseCount  (binary VA: 0xcb5440)
// Original: glf::InputManager::GetMouseCount
// ----------------------------------------------------------------------------
int glf::InputManager::GetMouseCount()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::GetGamepadCount  (binary VA: 0xcb5450)
// Original: glf::InputManager::GetGamepadCount
// ----------------------------------------------------------------------------
int glf::InputManager::GetGamepadCount()
{
  return 1;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::GetKeyboardIndex  (binary VA: 0xcb5460)
// Original: glf::InputManager::GetKeyboardIndex
// ----------------------------------------------------------------------------
int glf::InputManager::GetKeyboardIndex(glf::InputManager::Self *self, const glf::InputDevice::Self *a2)
{
  int v2;
  int KeyboardCount;

  v2 = 0;
  KeyboardCount = glf::InputManager::GetKeyboardCount();
  if ( KeyboardCount != 0 )
  {
    while ( (const glf::InputDevice::Self *)glf::InputManager::GetKeyboard(self) != a2 )
    {
      if ( ++v2 == KeyboardCount )
        return 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::GetMouseIndex  (binary VA: 0xcb54d0)
// Original: glf::InputManager::GetMouseIndex
// ----------------------------------------------------------------------------
int glf::InputManager::GetMouseIndex(glf::InputManager::Self *self, const glf::InputDevice::Self *a2)
{
  int v2;
  int MouseCount;

  v2 = 0;
  MouseCount = glf::InputManager::GetMouseCount();
  if ( MouseCount != 0 )
  {
    while ( (const glf::InputDevice::Self *)glf::InputManager::GetMouse(self) != a2 )
    {
      if ( ++v2 == MouseCount )
        return 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::GetGamepadIndex  (binary VA: 0xcb5540)
// Original: glf::InputManager::GetGamepadIndex
// ----------------------------------------------------------------------------
int glf::InputManager::GetGamepadIndex(glf::InputManager::Self *self, const glf::InputDevice::Self *a2)
{
  int v2;
  int GamepadCount;

  v2 = 0;
  GamepadCount = glf::InputManager::GetGamepadCount();
  if ( GamepadCount != 0 )
  {
    while ( (const glf::InputDevice::Self *)glf::InputManager::GetGamepad(self) != a2 )
    {
      if ( ++v2 == GamepadCount )
        return 0;
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::EnableAccelerometer  (binary VA: 0xcb55b0)
// Original: glf::InputManager::EnableAccelerometer
// ----------------------------------------------------------------------------
int glf::InputManager::EnableAccelerometer(glf::InputManager::Self *self, bool a2, float a3)
{
  return (*(int (**)(uint32_t, bool, uint32_t))(**((uint32_t **)self + 9) + 8))(
           *((uint32_t *)self + 9),
           a2,
           LODWORD(a3));
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::EnableGyro  (binary VA: 0xcb55e0)
// Original: glf::InputManager::EnableGyro
// ----------------------------------------------------------------------------
int glf::InputManager::EnableGyro(glf::InputManager::Self *self, bool a2, float a3)
{
  return (*(int (**)(uint32_t, bool, uint32_t))(**((uint32_t **)self + 9) + 12))(
           *((uint32_t *)self + 9),
           a2,
           LODWORD(a3));
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::IsAccelerometerEnabled  (binary VA: 0xcb5610)
// Original: glf::InputManager::IsAccelerometerEnabled
// ----------------------------------------------------------------------------
int glf::InputManager::IsAccelerometerEnabled(glf::InputManager::Self *self)
{
  return *(uint8_t *)(*((uint32_t *)self + 9) + 8);
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::IsGyroscopeEnabled  (binary VA: 0xcb5620)
// Original: glf::InputManager::IsGyroscopeEnabled
// ----------------------------------------------------------------------------
int glf::InputManager::IsGyroscopeEnabled(glf::InputManager::Self *self)
{
  return *(uint8_t *)(*((uint32_t *)self + 9) + 9);
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::EnableSensor  (binary VA: 0xcb5630)
// Original: glf::InputManager::EnableSensor
// ----------------------------------------------------------------------------
int glf::InputManager::EnableSensor(glf::InputManager::Self *self, bool a2)
{
  return (*(int (**)(uint32_t, bool))(**((uint32_t **)self + 9) + 16))(*((uint32_t *)self + 9), a2);
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::EmulateGamepadWin32  (binary VA: 0xcb5660)
// Original: glf::InputManager::EmulateGamepadWin32
// ----------------------------------------------------------------------------
void glf::InputManager::EmulateGamepadWin32()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::AddUpdatedDevice  (binary VA: 0xcb5670)
// Original: glf::InputManager::AddUpdatedDevice
// ----------------------------------------------------------------------------
int glf::InputManager::AddUpdatedDevice(pthread_mutex_t **self, glf::InputDevice::Self *a2)
{
  pthread_mutex_t *v2;
  pthread_mutex_t *owner;
  char v4;
  unsigned int nusers;
  int v7;
  pthread_mutex_t *v8;
  char v9;

  glf::Mutex::Lock(self + 2);
  v2 = *(self + 5);
  v8 = (pthread_mutex_t *)(self + 4);
  if ( v2 == nullptr )
  {
    v2 = (pthread_mutex_t *)(self + 4);
LABEL_10:
    if ( *(self + 6) == v2 || (unsigned int)(uintptr_t)(a2) > *(uint32_t *)(sub_19048F0(v2) + 16) )
      goto LABEL_12;
    return glf::Mutex::Unlock(self + 2);
  }
  while ( 1 )
  {
    nusers = ((int32_t *)(v2))[4];
    if ( nusers <= (unsigned int)(uintptr_t)(a2) )
      break;
    owner = (pthread_mutex_t *)((int32_t *)(v2))[2];
    v4 = 1;
    if ( owner == nullptr )
      goto LABEL_7;
LABEL_4:
    v2 = owner;
  }
  owner = (pthread_mutex_t *)((int32_t *)(v2))[3];
  v4 = 0;
  if ( owner != nullptr )
    goto LABEL_4;
LABEL_7:
  if ( v4 != 0 )
    goto LABEL_10;
  if ( (unsigned int)(uintptr_t)(a2) <= nusers )
    return glf::Mutex::Unlock(self + 2);
LABEL_12:
  v9 = 1;
  if ( v8 != v2 )
    v9 = ((int32_t *)(v2))[4] > (unsigned int)(uintptr_t)(a2);
  v7 = opNew(0x14u);
  if ( v7 != -16 )
    *(uint32_t *)(v7 + 16) = (uint32_t)(uintptr_t)(a2);
  sub_1904970(v9, v7, v2, v8);
  *(self + 8) = (pthread_mutex_t *)((char *)*(self + 8) + 1);
  return glf::Mutex::Unlock(self + 2);
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::StartDuoProtocol  (binary VA: 0xcb5760)
// Original: glf::InputManager::StartDuoProtocol
// ----------------------------------------------------------------------------
int glf::InputManager::StartDuoProtocol(glf::InputManager::Self *self, bool a2)
{
  return (*(int (**)(uint32_t, bool))(**((uint32_t **)self + 9) + 32))(*((uint32_t *)self + 9), a2);
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::StartWirelessDiscovery  (binary VA: 0xcb5790)
// Original: glf::InputManager::StartWirelessDiscovery
// ----------------------------------------------------------------------------
int glf::InputManager::StartWirelessDiscovery(glf::InputManager::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 9) + 36))(*((uint32_t *)self + 9));
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::StopWirelessDiscovery  (binary VA: 0xcb57b0)
// Original: glf::InputManager::StopWirelessDiscovery
// ----------------------------------------------------------------------------
int glf::InputManager::StopWirelessDiscovery(glf::InputManager::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 9) + 40))(*((uint32_t *)self + 9));
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::Destroy  (binary VA: 0xcb57d0)
// Original: glf::InputManager::~InputManager
// ----------------------------------------------------------------------------
void glf::InputManager::Destroy(glf::InputManager::Self *self)
{
  int v1;
  int v2;
  int v3;
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

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E038);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 )
    G4_VCALL<void>(v1, 4);
  v14 = *((uint32_t **)self + 5);
  if ( v14 != nullptr )
  {
    while ( 1 )
    {
      v15 = (uint32_t *)v14[3];
      if ( v15 != nullptr )
      {
        while ( 1 )
        {
          v16 = (uint32_t *)v15[3];
          if ( v16 != nullptr )
          {
            while ( 1 )
            {
              v17 = (uint32_t *)v16[3];
              if ( v17 != nullptr )
              {
                while ( 1 )
                {
                  v18 = (uint32_t *)v17[3];
                  if ( v18 != nullptr )
                  {
                    while ( 1 )
                    {
                      v19 = (uint32_t *)v18[3];
                      if ( v19 != nullptr )
                      {
                        while ( 1 )
                        {
                          v13 = (uint32_t *)v19[3];
                          if ( v13 != nullptr )
                          {
                            while ( 1 )
                            {
                              v12 = (uint32_t *)v13[3];
                              if ( v12 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v2 = v12[3];
                                  if ( v2 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      std::_Rb_tree<glf::InputDevice::Self *,glf::InputDevice::Self *,std::_Identity<glf::InputDevice::Self *>,std::less<glf::InputDevice::Self *>,std::allocator<glf::InputDevice::Self *>>::_M_erase(
                                        (int)(uintptr_t)(self) + 12,
                                        *(void **)(v2 + 12));
                                      v3 = *(uint32_t *)(v2 + 8);
                                      opDelete((void *)v2);
                                      if ( v3 == 0 )
                                        break;
                                      v2 = v3;
                                    }
                                  }
                                  v4 = (uint32_t *)v12[2];
                                  opDelete(v12);
                                  if ( v4 == nullptr )
                                    break;
                                  v12 = v4;
                                }
                              }
                              v5 = (uint32_t *)v13[2];
                              opDelete(v13);
                              if ( v5 == nullptr )
                                break;
                              v13 = v5;
                            }
                          }
                          v6 = (uint32_t *)v19[2];
                          opDelete(v19);
                          if ( v6 == nullptr )
                            break;
                          v19 = v6;
                        }
                      }
                      v7 = (uint32_t *)v18[2];
                      opDelete(v18);
                      if ( v7 == nullptr )
                        break;
                      v18 = v7;
                    }
                  }
                  v8 = (uint32_t *)v17[2];
                  opDelete(v17);
                  if ( v8 == nullptr )
                    break;
                  v17 = v8;
                }
              }
              v9 = (uint32_t *)v16[2];
              opDelete(v16);
              if ( v9 == nullptr )
                break;
              v16 = v9;
            }
          }
          v10 = (uint32_t *)v15[2];
          opDelete(v15);
          if ( v10 == nullptr )
            break;
          v15 = v10;
        }
      }
      v11 = (uint32_t *)v14[2];
      opDelete(v14);
      if ( v11 == nullptr )
        break;
      v14 = v11;
    }
  }
  glf::Mutex::Destroy((pthread_mutex_t **)self + 2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206D428);
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::Destroy_eacb59d0  (binary VA: 0xcb59d0)
// Original: glf::InputManager::~InputManager
// ----------------------------------------------------------------------------
void glf::InputManager::Destroy_eacb59d0(glf::InputManager::Self *self)
{
  glf::InputManager::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::UpdateFrame  (binary VA: 0xcb5a10)
// Original: glf::InputManager::UpdateFrame
// ----------------------------------------------------------------------------
int glf::InputManager::UpdateFrame(glf::InputManager::Self *self)
{
  glf::InputManager::Self *v1;
  char *v2;
  uint32_t *j;
  int v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  char *i;

  v1 = self;
  (*(void (**)(uint32_t))(**((uint32_t **)self + 9) + 24))(*((uint32_t *)self + 9));
  glf::Mutex::Lock((pthread_mutex_t **)self + 2);
  v2 = *((char **)self + 6);
  for ( i = (char *)self + 16; i != v2; v2 = (char *)sub_19048E0(v2) )
    (*(void (**)(uint32_t *))(**((uint32_t **)v2 + 4) + 4))(*((uint32_t **)v2 + 4));
  v17 = *((uint32_t **)self + 5);
  if ( v17 != nullptr )
  {
    for ( j = *((uint32_t **)self + 5); ; j = v13 )
    {
      v18 = (uint32_t *)j[3];
      if ( v18 != nullptr )
      {
        while ( 1 )
        {
          v19 = (uint32_t *)v18[3];
          if ( v19 != nullptr )
          {
            while ( 1 )
            {
              v20 = (uint32_t *)v19[3];
              if ( v20 != nullptr )
              {
                while ( 1 )
                {
                  v21 = (uint32_t *)v20[3];
                  if ( v21 != nullptr )
                  {
                    while ( 1 )
                    {
                      v22 = (uint32_t *)v21[3];
                      if ( v22 != nullptr )
                      {
                        while ( 1 )
                        {
                          v16 = (uint32_t *)v22[3];
                          if ( v16 != nullptr )
                          {
                            while ( 1 )
                            {
                              v15 = (uint32_t *)v16[3];
                              if ( v15 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v4 = v15[3];
                                  if ( v4 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      std::_Rb_tree<glf::InputDevice::Self *,glf::InputDevice::Self *,std::_Identity<glf::InputDevice::Self *>,std::less<glf::InputDevice::Self *>,std::allocator<glf::InputDevice::Self *>>::_M_erase(
                                        (int)(uintptr_t)(self) + 12,
                                        *(void **)(v4 + 12));
                                      v5 = *(uint32_t *)(v4 + 8);
                                      opDelete((void *)v4);
                                      if ( v5 == 0 )
                                        break;
                                      v4 = v5;
                                    }
                                  }
                                  v6 = (uint32_t *)v15[2];
                                  opDelete(v15);
                                  if ( v6 == nullptr )
                                    break;
                                  v15 = v6;
                                }
                              }
                              v7 = (uint32_t *)v16[2];
                              opDelete(v16);
                              if ( v7 == nullptr )
                                break;
                              v16 = v7;
                            }
                          }
                          v8 = (uint32_t *)v22[2];
                          opDelete(v22);
                          if ( v8 == nullptr )
                            break;
                          v22 = v8;
                        }
                      }
                      v9 = (uint32_t *)v21[2];
                      opDelete(v21);
                      if ( v9 == nullptr )
                        break;
                      v21 = v9;
                    }
                  }
                  v10 = (uint32_t *)v20[2];
                  opDelete(v20);
                  if ( v10 == nullptr )
                    break;
                  v20 = v10;
                }
              }
              v11 = (uint32_t *)v19[2];
              opDelete(v19);
              if ( v11 == nullptr )
                break;
              v19 = v11;
            }
          }
          v12 = (uint32_t *)v18[2];
          opDelete(v18);
          if ( v12 == nullptr )
            break;
          v18 = v12;
        }
      }
      v13 = (uint32_t *)v17[2];
      opDelete(v17);
      if ( v13 == nullptr )
        break;
      v17 = v13;
    }
    v1 = self;
  }
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 6) = (uint32_t)(uintptr_t)(i);
  *((uint32_t *)v1 + 7) = (uint32_t)(uintptr_t)(i);
  *((uint32_t *)v1 + 8) = 0;
  glf::Mutex::Unlock((pthread_mutex_t **)self + 2);
  return (*(int (**)(uint32_t))(**((uint32_t **)v1 + 9) + 20))(*((uint32_t *)v1 + 9));
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::Impl::UpdateFrame  (binary VA: 0xcb5d20)
// Original: glf::InputManager::Impl::UpdateFrame
// ----------------------------------------------------------------------------
void glf::InputManager::Impl::UpdateFrame()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::Impl::EnableAccelerometer  (binary VA: 0xcb5d60)
// Original: glf::InputManager::Impl::EnableAccelerometer
// ----------------------------------------------------------------------------
glf::InputManager::Impl::Self * glf::InputManager::Impl::EnableAccelerometer(glf::InputManager::Impl::Self *self, bool a2, float a3)
{
  glf::AndroidEnableAccelerometer((glf::Self *)a2, a3);
  *((uint8_t *)self + 8) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::Impl::Destroy  (binary VA: 0xcb5e30)
// Original: glf::InputManager::Impl::~Impl
// ----------------------------------------------------------------------------
void glf::InputManager::Impl::Destroy(glf::InputManager::Impl::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E0A8);
  glf::AndroidEnableAccelerometer(nullptr, 0.0);
  *((uint8_t *)self + 8) = 0;
  *((uint32_t *)self + 267) = ((uint32_t)(uintptr_t)&off_206E008);
  glf::InputDevice::Destroy((glf::InputManager::Impl::Self *)((char *)self + 1068));
  *((uint32_t *)self + 234) = ((uint32_t)(uintptr_t)&off_206DFE8);
  glf::InputDevice::Destroy((glf::InputManager::Impl::Self *)((char *)self + 936));
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_206DFC8);
  v1 = *((uint32_t *)self + 230);
  if ( (void *)(v1 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v1 - 12));
  }
  glf::InputDevice::Destroy((glf::InputManager::Impl::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E068);
}

// ----------------------------------------------------------------------------
// Function: glf::InputManager::Impl::Destroy_eacb5f00  (binary VA: 0xcb5f00)
// Original: glf::InputManager::Impl::~Impl
// ----------------------------------------------------------------------------
void glf::InputManager::Impl::Destroy_eacb5f00(glf::InputManager::Impl::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E0A8);
  glf::AndroidEnableAccelerometer(nullptr, 0.0);
  *((uint8_t *)self + 8) = 0;
  *((uint32_t *)self + 267) = ((uint32_t)(uintptr_t)&off_206E008);
  glf::InputDevice::Destroy((glf::InputManager::Impl::Self *)((char *)self + 1068));
  *((uint32_t *)self + 234) = ((uint32_t)(uintptr_t)&off_206DFE8);
  glf::InputDevice::Destroy((glf::InputManager::Impl::Self *)((char *)self + 936));
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_206DFC8);
  v1 = *((uint32_t *)self + 230);
  if ( (void *)(v1 - 12) != &unk_213B8A8
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    sub_194E070((void *)(v1 - 12));
  }
  glf::InputDevice::Destroy((glf::InputManager::Impl::Self *)((char *)self + 12));
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_206E068);
  opDelete(self);
}


