#include "Core/Utils/DecompTypes.h"
#include "glotv3_EventOfUserDevice.h"

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfUserDevice::Destroy  (binary VA: 0x1346fd0)
// Original: glotv3::EventOfUserDevice::~EventOfUserDevice
// ----------------------------------------------------------------------------
void glotv3::EventOfUserDevice::Destroy(glotv3::EventOfUserDevice::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A40);
  glotv3::Event::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfUserDevice::Destroy_ea1347530  (binary VA: 0x1347530)
// Original: glotv3::EventOfUserDevice::~EventOfUserDevice
// ----------------------------------------------------------------------------
void glotv3::EventOfUserDevice::Destroy_ea1347530(glotv3::EventOfUserDevice::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A40);
  glotv3::Event::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: glotv3::EventOfUserDevice::Construct  (binary VA: 0x1348710)
// Original: glotv3::EventOfUserDevice::EventOfUserDevice
// ----------------------------------------------------------------------------
void glotv3::EventOfUserDevice::Construct(glotv3::EventOfUserDevice::Self *self)
{
  volatile int32_t *v1;
  volatile int32_t *v2;
  volatile int32_t *v3;
  volatile int32_t *v4;
  uint32_t *v5;
  volatile int32_t *v6;
  int v7;
  int v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  typedef glotv3::EventValue::Self *_g4_t_v15;
  typedef uint8_t _g4_t_IsEncrypted;
  typedef bool _g4_t_IsJbOrRt;
  typedef volatile int32_t *_g4_t_v18;
  typedef volatile int32_t *_g4_t_v19;
  typedef volatile int32_t *_g4_t_v20;
  typedef volatile int32_t *_g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef void *_g4_t_v23[7];
  typedef uint32_t *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef void *_g4_t_v29[7];
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef void *_g4_t_v35[7];
  typedef uint32_t *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (15u + sizeof(_g4_t_IsEncrypted)) > _g4_s1 ? (15u + sizeof(_g4_t_IsEncrypted)) : _g4_s1,
    _g4_s3 = (15u + sizeof(_g4_t_IsJbOrRt)) > _g4_s2 ? (15u + sizeof(_g4_t_IsJbOrRt)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v18)) > _g4_s3 ? (28u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v20)) > _g4_s5 ? (36u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v21)) > _g4_s6 ? (40u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v22)) > _g4_s7 ? (44u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v23)) > _g4_s8 ? (48u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v24)) > _g4_s9 ? (76u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v25)) > _g4_s10 ? (80u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v26)) > _g4_s11 ? (84u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v27)) > _g4_s12 ? (88u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v28)) > _g4_s13 ? (92u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v29)) > _g4_s14 ? (96u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (124u + sizeof(_g4_t_v30)) > _g4_s15 ? (124u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (128u + sizeof(_g4_t_v31)) > _g4_s16 ? (128u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (132u + sizeof(_g4_t_v32)) > _g4_s17 ? (132u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (136u + sizeof(_g4_t_v33)) > _g4_s18 ? (136u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (140u + sizeof(_g4_t_v34)) > _g4_s19 ? (140u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (144u + sizeof(_g4_t_v35)) > _g4_s20 ? (144u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (172u + sizeof(_g4_t_v36)) > _g4_s21 ? (172u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (176u + sizeof(_g4_t_v37)) > _g4_s22 ? (176u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (180u + sizeof(_g4_t_v38)) > _g4_s23 ? (180u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (184u + sizeof(_g4_t_v39)) > _g4_s24 ? (184u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (188u + sizeof(_g4_t_v40)) > _g4_s25 ? (188u + sizeof(_g4_t_v40)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_IsEncrypted &IsEncrypted = *reinterpret_cast<_g4_t_IsEncrypted *>(_g4_sf + 15u);
  _g4_t_IsJbOrRt &IsJbOrRt = *reinterpret_cast<_g4_t_IsJbOrRt *>(_g4_sf + 15u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 124u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 128u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 132u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 136u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 140u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 144u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 172u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 176u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 180u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 184u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 188u);

  glotv3::Event::Construct(self, false);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2093A40);
  glotv3::Event::setIsAutomatic(self, true);
  glotv3::Event::setEventType(self, &reinterpret_cast<G4Elf32Sym *>(stru_CAB4)->st_other);
  glotv3::Porting::GetDeviceCarrierName((glotv3::Porting::Self *)&v18);
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::EventOfUserDevice::k_KeyCarrier, (uint8_t **)&v18);
  v1 = v18 - 3;
  if ( v18 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v18 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v1);
  glotv3::Porting::GetDeviceCountry((glotv3::Porting::Self *)&v19);
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::EventOfUserDevice::k_KeyCountry, (uint8_t **)&v19);
  v2 = v19 - 3;
  if ( v19 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v19 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v2);
  glotv3::Porting::GetDeviceLanguage((glotv3::Porting::Self *)&v20);
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::EventOfUserDevice::k_KeyLanguage, (uint8_t **)&v20);
  v3 = v20 - 3;
  if ( v20 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v20 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v3);
  glotv3::Porting::GetDeviceName((glotv3::Porting::Self *)&v21);
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::EventOfUserDevice::k_KeyName, (uint8_t **)&v21);
  v4 = v21 - 3;
  if ( v21 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v21 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v4);
  IsEncrypted = glotv3::Porting::GetApplicationIsEncrypted();
  v23[2] = (void *)(uintptr_t)2;
  v23[6] = nullptr;
  v24 = nullptr;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v25 = 2048;
  v27 = opNew(1u);
  v28 = v27;
  v15 = (glotv3::EventValue::Self *)v25;
  v5 = (uint32_t *)(malloc(v25 + 12));
  v5[2] = (uint32_t)(uintptr_t)(v24);
  *v5 = (uint32_t)(uintptr_t)(v15);
  v5[1] = 0;
  v24 = v5;
  v23[0] = (void *)IsEncrypted;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(self),
    &glotv3::EventOfUserDevice::k_KeyEncrypted,
    (glotv3::EventValue::Self *)v23);
  glotv3::EventValue::Destroy(v23);
  glotv3::Porting::GetDeviceFirmware((glotv3::Porting::Self *)&v22);
  glotv3::Event::addKeyPair((int)(uintptr_t)(self), &glotv3::EventOfUserDevice::k_KeyFirmware, (uint8_t **)&v22);
  v6 = v22 - 3;
  if ( v22 - 3 != (volatile int32_t *)(dword_213B808) && __sync_fetch_and_add(v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v6);
  IsJbOrRt = glotv3::Porting::GetDeviceIsJbOrRt();
  v31 = 2048;
  v29[2] = (void *)(uintptr_t)2;
  v29[6] = nullptr;
  v30 = nullptr;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v7 = opNew(1u);
  v8 = v31;
  v33 = v7;
  v34 = v7;
  v9 = (uint32_t *)(malloc(v31 + 12));
  v10 = v30;
  *v9 = v8;
  v9[2] = (uint32_t)(uintptr_t)(v10);
  v9[1] = 0;
  v30 = v9;
  v29[0] = (void *)IsJbOrRt;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(self),
    &glotv3::EventOfUserDevice::k_KeyJBroken,
    (glotv3::EventValue::Self *)v29);
  glotv3::EventValue::Destroy(v29);
  v37 = 2048;
  v35[2] = (void *)(uintptr_t)3;
  v35[6] = nullptr;
  v36 = nullptr;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v11 = opNew(1u);
  v12 = v37;
  v39 = v11;
  v40 = v11;
  v13 = (uint32_t *)(malloc(v37 + 12));
  v14 = v36;
  *v13 = v12;
  v13[2] = (uint32_t)(uintptr_t)(v14);
  v13[1] = 0;
  v36 = v13;
  v35[0] = &stru_354;
  glotv3::Event::addKeyPair(
    (int)(uintptr_t)(self),
    &glotv3::EventOfUserDevice::k_KeyLibraryRevision,
    (glotv3::EventValue::Self *)v35);
  glotv3::EventValue::Destroy(v35);
}


