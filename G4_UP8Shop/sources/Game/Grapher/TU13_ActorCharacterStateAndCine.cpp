#include "Core/Utils/DecompTypes.h"
#include "TU13_ActorCharacterStateAndCine.h"

// ----------------------------------------------------------------------------
// Function: sub_838820  (binary VA: 0x838820)
// Original: sub_838820
// ----------------------------------------------------------------------------
int sub_838820()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_20D66E4);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_20D66E4, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20D66E8), "UNKNOWN", (int)(uintptr_t)(&v1) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D66E8, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20D66EC), "IMEI", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D66EC, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_20D66F0), "HDIDFV", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_20D66F0, &unk_20D1280);
  dword_20D66F4 = 1056964608;
  dword_20D66F8 = 1056964608;
  dword_20D66FC = 1056964608;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&dword_20D66B0), (char *)&unk_1B15112, (int)(uintptr_t)(&v1));
  return __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_20D66B0, &unk_20D1280);
}

// ----------------------------------------------------------------------------
// Function: nullsub_295  (binary VA: 0x838958)
// Original: nullsub_295
// ----------------------------------------------------------------------------
void nullsub_295()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sub_838960  (binary VA: 0x838960)
// Original: sub_838960
// ----------------------------------------------------------------------------
int sub_838960(int a1, int a2)
{
  *(uint8_t *)(a2 + 52) = 1;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: sub_838970_ea838970  (binary VA: 0x838970)
// Original: sub_838970
// ----------------------------------------------------------------------------
int sub_838970_ea838970(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicStop::Destroy_ea8389b0  (binary VA: 0x8389b0)
// Original: ActorGameCinematicStop::~ActorGameCinematicStop
// ----------------------------------------------------------------------------
int ActorGameCinematicStop::Destroy_ea8389b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CCC8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicStart::Destroy_ea8389e0  (binary VA: 0x8389e0)
// Original: ActorGameCinematicStart::~ActorGameCinematicStart
// ----------------------------------------------------------------------------
int ActorGameCinematicStart::Destroy_ea8389e0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC88);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicShakeCam::Destroy_ea838a10  (binary VA: 0x838a10)
// Original: ActorGameCinematicShakeCam::~ActorGameCinematicShakeCam
// ----------------------------------------------------------------------------
int ActorGameCinematicShakeCam::Destroy_ea838a10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC48);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicSetPreanimatedCam::Destroy_ea838a40  (binary VA: 0x838a40)
// Original: ActorGameCinematicSetPreanimatedCam::~ActorGameCinematicSetPreanimatedCam
// ----------------------------------------------------------------------------
int ActorGameCinematicSetPreanimatedCam::Destroy_ea838a40(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC08);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicSetCam::Destroy_ea838a70  (binary VA: 0x838a70)
// Original: ActorGameCinematicSetCam::~ActorGameCinematicSetCam
// ----------------------------------------------------------------------------
int ActorGameCinematicSetCam::Destroy_ea838a70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CBC8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicPlayFX::Destroy_ea838aa0  (binary VA: 0x838aa0)
// Original: ActorGameCinematicPlayFX::~ActorGameCinematicPlayFX
// ----------------------------------------------------------------------------
int ActorGameCinematicPlayFX::Destroy_ea838aa0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB88);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicPlay::Destroy_ea838ad0  (binary VA: 0x838ad0)
// Original: ActorGameCinematicPlay::~ActorGameCinematicPlay
// ----------------------------------------------------------------------------
int ActorGameCinematicPlay::Destroy_ea838ad0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB48);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicFadeOut::Destroy_ea838b00  (binary VA: 0x838b00)
// Original: ActorGameCinematicFadeOut::~ActorGameCinematicFadeOut
// ----------------------------------------------------------------------------
int ActorGameCinematicFadeOut::Destroy_ea838b00(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB08);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicFadeIn::Destroy_ea838b30  (binary VA: 0x838b30)
// Original: ActorGameCinematicFadeIn::~ActorGameCinematicFadeIn
// ----------------------------------------------------------------------------
int ActorGameCinematicFadeIn::Destroy_ea838b30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CAC8);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicDialog::Destroy_ea838b60  (binary VA: 0x838b60)
// Original: ActorGameCinematicDialog::~ActorGameCinematicDialog
// ----------------------------------------------------------------------------
int ActorGameCinematicDialog::Destroy_ea838b60(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA88);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameSetActionZone::Destroy_ea838b90  (binary VA: 0x838b90)
// Original: ActorGameSetActionZone::~ActorGameSetActionZone
// ----------------------------------------------------------------------------
int ActorGameSetActionZone::Destroy_ea838b90(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA48);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterWantedLevel::Destroy_ea838bc0  (binary VA: 0x838bc0)
// Original: ActorGameCharacterWantedLevel::~ActorGameCharacterWantedLevel
// ----------------------------------------------------------------------------
int ActorGameCharacterWantedLevel::Destroy_ea838bc0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA08);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterVehicleDoor::Destroy_ea838bf0  (binary VA: 0x838bf0)
// Original: ActorGameCharacterVehicleDoor::~ActorGameCharacterVehicleDoor
// ----------------------------------------------------------------------------
int ActorGameCharacterVehicleDoor::Destroy_ea838bf0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C9C8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterUseCover::Destroy_ea838c20  (binary VA: 0x838c20)
// Original: ActorGameCharacterUseCover::~ActorGameCharacterUseCover
// ----------------------------------------------------------------------------
int ActorGameCharacterUseCover::Destroy_ea838c20(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C988);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterTurnToward::Destroy_ea838c50  (binary VA: 0x838c50)
// Original: ActorGameCharacterTurnToward::~ActorGameCharacterTurnToward
// ----------------------------------------------------------------------------
int ActorGameCharacterTurnToward::Destroy_ea838c50(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C948);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleUseCover::Destroy_ea838c80  (binary VA: 0x838c80)
// Original: ActorGameCharacterToggleUseCover::~ActorGameCharacterToggleUseCover
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleUseCover::Destroy_ea838c80(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C908);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleScripted::Destroy_ea838cb0  (binary VA: 0x838cb0)
// Original: ActorGameCharacterToggleScripted::~ActorGameCharacterToggleScripted
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleScripted::Destroy_ea838cb0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C8C8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleRubberBanding::Destroy_ea838ce0  (binary VA: 0x838ce0)
// Original: ActorGameCharacterToggleRubberBanding::~ActorGameCharacterToggleRubberBanding
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleRubberBanding::Destroy_ea838ce0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C888);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleFlee::Destroy_ea838d10  (binary VA: 0x838d10)
// Original: ActorGameCharacterToggleFlee::~ActorGameCharacterToggleFlee
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleFlee::Destroy_ea838d10(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C848);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleFight::Destroy_ea838d40  (binary VA: 0x838d40)
// Original: ActorGameCharacterToggleFight::~ActorGameCharacterToggleFight
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleFight::Destroy_ea838d40(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C808);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterToggleAggro::Destroy_ea838d70  (binary VA: 0x838d70)
// Original: ActorGameCharacterToggleAggro::~ActorGameCharacterToggleAggro
// ----------------------------------------------------------------------------
int ActorGameCharacterToggleAggro::Destroy_ea838d70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C7C8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterThrowOutOfVehicle::Destroy_ea838da0  (binary VA: 0x838da0)
// Original: ActorGameCharacterThrowOutOfVehicle::~ActorGameCharacterThrowOutOfVehicle
// ----------------------------------------------------------------------------
int ActorGameCharacterThrowOutOfVehicle::Destroy_ea838da0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C788);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterThrownOutVehicle::Destroy_ea838dd0  (binary VA: 0x838dd0)
// Original: ActorGameCharacterThrownOutVehicle::~ActorGameCharacterThrownOutVehicle
// ----------------------------------------------------------------------------
int ActorGameCharacterThrownOutVehicle::Destroy_ea838dd0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C748);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterStopForObject::Destroy_ea838e00  (binary VA: 0x838e00)
// Original: ActorGameCharacterStopForObject::~ActorGameCharacterStopForObject
// ----------------------------------------------------------------------------
int ActorGameCharacterStopForObject::Destroy_ea838e00(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C708);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSteerTowardDeepWater::Destroy_ea838e30  (binary VA: 0x838e30)
// Original: ActorGameCharacterSteerTowardDeepWater::~ActorGameCharacterSteerTowardDeepWater
// ----------------------------------------------------------------------------
int ActorGameCharacterSteerTowardDeepWater::Destroy_ea838e30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C6C8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterState::Destroy_ea838e60  (binary VA: 0x838e60)
// Original: ActorGameCharacterState::~ActorGameCharacterState
// ----------------------------------------------------------------------------
int ActorGameCharacterState::Destroy_ea838e60(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C688);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSpawnAI::Destroy_ea838e90  (binary VA: 0x838e90)
// Original: ActorGameCharacterSpawnAI::~ActorGameCharacterSpawnAI
// ----------------------------------------------------------------------------
int ActorGameCharacterSpawnAI::Destroy_ea838e90(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C648);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSnapToTarget::Destroy_ea838ec0  (binary VA: 0x838ec0)
// Original: ActorGameCharacterSnapToTarget::~ActorGameCharacterSnapToTarget
// ----------------------------------------------------------------------------
int ActorGameCharacterSnapToTarget::Destroy_ea838ec0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C608);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterShoot::Destroy_ea838ef0  (binary VA: 0x838ef0)
// Original: ActorGameCharacterShoot::~ActorGameCharacterShoot
// ----------------------------------------------------------------------------
int ActorGameCharacterShoot::Destroy_ea838ef0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C5C8);
  return ((ActorGameBase::Destroy(a1)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_838F20_ea838f20  (binary VA: 0x838f20)
// Original: sub_838F20
// ----------------------------------------------------------------------------
int sub_838F20_ea838f20(int a1, int a2)
{
  int result;

  result = dword_20DA2A0;
  if ( dword_20DA2A0 == 0 )
    return G4_VCALL<int>(a1, 28, a2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_838F60_ea838f60  (binary VA: 0x838f60)
// Original: sub_838F60
// ----------------------------------------------------------------------------
int sub_838F60_ea838f60(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;

  result = *((uint32_t *)a1 + 13);
  if ( result != 0 && *(uint32_t *)(result + 8) == 2 )
  {
    grapher::ActorBase::FireEvent(a1, 2, a3);
    return G4_VCALL<int>(a1, 28, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_838FD0  (binary VA: 0x838fd0)
// Original: sub_838FD0
// ----------------------------------------------------------------------------
void sub_838FD0(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;

  if ( a1 != nullptr && *(uint32_t *)(a1[102] - 12) != 0 )
  {
    v1 = a1[101];
    if ( v1 != 0 && ((*(int (**)(uint32_t))(*(uint32_t *)v1 + 32))(a1[101]) & 2) != 0 )
    {
      v3 = a1[290];
      if ( v3 == sub_8F0680(v2) && (uint8_t)sub_C16830(a1) == 0 )
      {
        G4_VCALL<void>(a1, 40, 32, 0);
        G4_VCALL<void>(a1, 108, 1);
      }
      sub_9B71D0(a1, 0, 1);
      sub_9A5670(a1 + 574, 0);
      sub_9A5670(a1 + 574, 0);
      G4_VCALL<void>(a1, 120, 189, 0);
      G4_VCALL<void>(a1, 120, 188, 0);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_8390F0_ea8390f0  (binary VA: 0x8390f0)
// Original: sub_8390F0
// ----------------------------------------------------------------------------
int sub_8390F0_ea8390f0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int Animators;
  int result;

  if ( dword_20D6790 == 0 )
    return G4_VCALL<int>(a1, 28, a3);
  Animators = (int)(uintptr_t)(glitch::scene::ISceneNode::getAnimators((glitch::scene::ISceneNode::Self *)dword_20D6790));
  result = (*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)Animators + 8) + 68))(*(uint32_t *)(*(uint32_t *)Animators
                                                                                                 + 8));
  if ( *((uint8_t *)a1 + 52) != 0 )
  {
    result = (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
    *((uint8_t *)a1 + 52) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_839180_ea839180  (binary VA: 0x839180)
// Original: sub_839180
// ----------------------------------------------------------------------------
int sub_839180_ea839180(grapher::ActorBase::Self *a1)
{
  typedef int _g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v3)) > _g4_s1 ? (16u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v4)) > _g4_s2 ? (20u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v5)) > _g4_s3 ? (24u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v6)) > _g4_s4 ? (28u + sizeof(_g4_t_v6)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 20u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "Stop Cinematic", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3);
  g4_std::string::Destroy(&v3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Cinematics", (int)(uintptr_t)(&v2) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "In", (int)(uintptr_t)(&v2) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), "Out", (int)(uintptr_t)(&v2) + 3);
  grapher::ActorBase::AddPin(a1, 1, v6, 0, -1);
  return ((g4_std::string::Destroy(v6)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8392C0  (binary VA: 0x8392c0)
// Original: sub_8392C0
// ----------------------------------------------------------------------------
void sub_8392C0(grapher::ActorBase::Self *a1, int a2, int a3, int a4)
{
  uint32_t *v4;
  int v5;
  int *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  v11[0] = (uint32_t)(uintptr_t)(v11);
  v11[1] = (uint32_t)(uintptr_t)(v11);
  sub_8560A0(a1, a2, (int)(uintptr_t)(v11), a4, 0x7FFFFFFF);
  v4 = (uint32_t *)v11[0];
  if ( (uint32_t *)v11[0] != v11 )
  {
    do
    {
      v5 = v4[2];
      if ( v5 != 0 )
      {
        v10 = v4[2];
        v6 = (int *)(*(int (**)(int))(*(uint32_t *)v5 + 16))(v10);
        if ( v6 != nullptr )
        {
          while ( v6 != (int *)(uintptr_t)(&dword_20D75F0) )
          {
            v6 = (int *)v6[1];
            if ( v6 == nullptr )
              goto LABEL_10;
          }
          v7 = opNew(0xCu);
          if ( v7 != -8 )
            *(uint32_t *)(v7 + 8) = v10;
          sub_1901920(v7, a3);
        }
      }
LABEL_10:
      v4 = (uint32_t *)*v4;
    }
    while ( v4 != v11 );
    v8 = (uint32_t *)v11[0];
    if ( (uint32_t *)v11[0] != v11 )
    {
      while ( 1 )
      {
        v9 = (uint32_t *)*v8;
        opDelete(v8);
        if ( v9 == v11 )
          break;
        v8 = v9;
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_8393B0  (binary VA: 0x8393b0)
// Original: sub_8393B0
// ----------------------------------------------------------------------------
int * sub_8393B0(int *a1, int a2, int a3, int a4, int *a5)
{
  int v7;
  int v8;
  int v9;
  int v11;
  char v12;
  int v13;

  v7 = a2 + 4;
  v12 = 1;
  v11 = v7;
  if ( a3 == 0 && a4 != v7 )
    v12 = (unsigned int)*a5 < *(uint32_t *)(a4 + 16);
  v8 = opNew(0x18u);
  if ( v8 != -16 )
  {
    v9 = *a5;
    *(uint32_t *)(v8 + 20) = a5[1];
    *(uint32_t *)(v8 + 16) = v9;
  }
  v13 = v8;
  sub_1904970(v12, v8, a4, v11);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v13;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_839470_ea839470  (binary VA: 0x839470)
// Original: sub_839470
// ----------------------------------------------------------------------------
void sub_839470_ea839470(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C5C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8394B0_ea8394b0  (binary VA: 0x8394b0)
// Original: sub_8394B0
// ----------------------------------------------------------------------------
void sub_8394B0_ea8394b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C608);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8394F0_ea8394f0  (binary VA: 0x8394f0)
// Original: sub_8394F0
// ----------------------------------------------------------------------------
void sub_8394F0_ea8394f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C648);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839530_ea839530  (binary VA: 0x839530)
// Original: sub_839530
// ----------------------------------------------------------------------------
void sub_839530_ea839530(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C688);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839570_ea839570  (binary VA: 0x839570)
// Original: sub_839570
// ----------------------------------------------------------------------------
void sub_839570_ea839570(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C6C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8395B0_ea8395b0  (binary VA: 0x8395b0)
// Original: sub_8395B0
// ----------------------------------------------------------------------------
void sub_8395B0_ea8395b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C708);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8395F0_ea8395f0  (binary VA: 0x8395f0)
// Original: sub_8395F0
// ----------------------------------------------------------------------------
void sub_8395F0_ea8395f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C748);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839630_ea839630  (binary VA: 0x839630)
// Original: sub_839630
// ----------------------------------------------------------------------------
void sub_839630_ea839630(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C788);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839670_ea839670  (binary VA: 0x839670)
// Original: sub_839670
// ----------------------------------------------------------------------------
void sub_839670_ea839670(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C7C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8396B0_ea8396b0  (binary VA: 0x8396b0)
// Original: sub_8396B0
// ----------------------------------------------------------------------------
void sub_8396B0_ea8396b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C808);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8396F0_ea8396f0  (binary VA: 0x8396f0)
// Original: sub_8396F0
// ----------------------------------------------------------------------------
void sub_8396F0_ea8396f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C848);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839730_ea839730  (binary VA: 0x839730)
// Original: sub_839730
// ----------------------------------------------------------------------------
void sub_839730_ea839730(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C888);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839770_ea839770  (binary VA: 0x839770)
// Original: sub_839770
// ----------------------------------------------------------------------------
void sub_839770_ea839770(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C8C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8397B0_ea8397b0  (binary VA: 0x8397b0)
// Original: sub_8397B0
// ----------------------------------------------------------------------------
void sub_8397B0_ea8397b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C908);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8397F0_ea8397f0  (binary VA: 0x8397f0)
// Original: sub_8397F0
// ----------------------------------------------------------------------------
void sub_8397F0_ea8397f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C948);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839830_ea839830  (binary VA: 0x839830)
// Original: sub_839830
// ----------------------------------------------------------------------------
void sub_839830_ea839830(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C988);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839870_ea839870  (binary VA: 0x839870)
// Original: sub_839870
// ----------------------------------------------------------------------------
void sub_839870_ea839870(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C9C8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8398B0_ea8398b0  (binary VA: 0x8398b0)
// Original: sub_8398B0
// ----------------------------------------------------------------------------
void sub_8398B0_ea8398b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8398F0_ea8398f0  (binary VA: 0x8398f0)
// Original: sub_8398F0
// ----------------------------------------------------------------------------
void sub_8398F0_ea8398f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839930_ea839930  (binary VA: 0x839930)
// Original: sub_839930
// ----------------------------------------------------------------------------
void sub_839930_ea839930(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CA88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839970_ea839970  (binary VA: 0x839970)
// Original: sub_839970
// ----------------------------------------------------------------------------
void sub_839970_ea839970(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CAC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8399B0_ea8399b0  (binary VA: 0x8399b0)
// Original: sub_8399B0
// ----------------------------------------------------------------------------
void sub_8399B0_ea8399b0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_8399F0_ea8399f0  (binary VA: 0x8399f0)
// Original: sub_8399F0
// ----------------------------------------------------------------------------
void sub_8399F0_ea8399f0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839A30_ea839a30  (binary VA: 0x839a30)
// Original: sub_839A30
// ----------------------------------------------------------------------------
void sub_839A30_ea839a30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839A70_ea839a70  (binary VA: 0x839a70)
// Original: sub_839A70
// ----------------------------------------------------------------------------
void sub_839A70_ea839a70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CBC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839AB0_ea839ab0  (binary VA: 0x839ab0)
// Original: sub_839AB0
// ----------------------------------------------------------------------------
void sub_839AB0_ea839ab0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC08);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839AF0_ea839af0  (binary VA: 0x839af0)
// Original: sub_839AF0
// ----------------------------------------------------------------------------
void sub_839AF0_ea839af0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839B30_ea839b30  (binary VA: 0x839b30)
// Original: sub_839B30
// ----------------------------------------------------------------------------
void sub_839B30_ea839b30(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC88);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839B70_ea839b70  (binary VA: 0x839b70)
// Original: sub_839B70
// ----------------------------------------------------------------------------
void sub_839B70_ea839b70(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CCC8);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_839BB0  (binary VA: 0x839bb0)
// Original: sub_839BB0
// ----------------------------------------------------------------------------
void sub_839BB0(int a1, uint32_t *a2)
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
                                      sub_839BB0(a1, v9[3]);
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

// ----------------------------------------------------------------------------
// Function: sub_839D60  (binary VA: 0x839d60)
// Original: sub_839D60
// ----------------------------------------------------------------------------
int * sub_839D60(int a1, int a2)
{
  int v3;
  int *v4;

  do
  {
LABEL_1:
    v3 = sub_4EB830(0x44u);
    if ( v3 != -8 )
    {
      *(uint32_t *)(v3 + 8) = a2;
      *(uint32_t *)(v3 + 12) = 0;
      *(uint32_t *)(v3 + 16) = 0;
      *(uint32_t *)(v3 + 20) = 0;
      *(uint8_t *)(v3 + 24) = 0;
      *(uint8_t *)(v3 + 25) = 0;
      *(uint8_t *)(v3 + 26) = 0;
      *(uint32_t *)(v3 + 28) = 0;
      *(uint32_t *)(v3 + 32) = -1;
      *(uint32_t *)(v3 + 36) = -1;
      *(uint32_t *)(v3 + 40) = 125;
      *(uint32_t *)(v3 + 44) = 1065353216;
      *(uint32_t *)(v3 + 48) = -1;
      *(uint32_t *)(v3 + 52) = -1;
      *(uint32_t *)(v3 + 56) = 0;
      *(uint32_t *)(v3 + 60) = 0;
      *(uint8_t *)(v3 + 64) = 0;
    }
    sub_1901920(v3, &dword_20D67A0);
    v4 = *(int **)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_1C7A4)->st_size + (uint32_t)(uintptr_t)(&dword_20B9FF4));
  }
  while ( v4 == (int *)(uintptr_t)(&dword_20D67A0) );
  while ( a2 != v4[2] )
  {
    v4 = (int *)*v4;
    if ( v4 == (int *)(uintptr_t)(&dword_20D67A0) )
      goto LABEL_1;
  }
  return v4 + 2;
}

// ----------------------------------------------------------------------------
// Function: sub_839E40_ea839e40  (binary VA: 0x839e40)
// Original: sub_839E40
// ----------------------------------------------------------------------------
int sub_839E40_ea839e40(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int v4;
  int v6[4];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6) + 1, "Subject", (int)(uintptr_t)(v6));
  if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4A64 == 0 )
    v3 = (int *)(&dword_20D4A60);
  v4 = sub_5B44E0((int)(uintptr_t)(v3), (int)(uintptr_t)(v6) + 1, (unsigned int)(uintptr_t)(a3));
  g4_std::string::Destroy((char *)v6 + 1);
  if ( v4 != 0 )
    G4_VCALL<void>(v4, 416);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_839F50  (binary VA: 0x839f50)
// Original: sub_839F50
// ----------------------------------------------------------------------------
void sub_839F50(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;

  if ( a1 != nullptr && *(uint32_t *)(a1[102] - 12) != 0 )
  {
    v1 = a1[101];
    if ( v1 != 0 && ((*(int (**)(uint32_t))(*(uint32_t *)v1 + 32))(a1[101]) & 2) != 0 )
    {
      v3 = a1[290];
      if ( sub_8F0680(v2) == v3 && (uint8_t)sub_C16830(a1) == 0 )
      {
        G4_VCALL<void>(a1, 40, 32, 1);
        G4_VCALL<void>(a1, 112, 0);
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_83A000  (binary VA: 0x83a000)
// Original: sub_83A000
// ----------------------------------------------------------------------------
bool sub_83A000(int a1)
{
  bool result;
  int v2;

  result = false;
  if ( a1 != 0 && *(uint32_t *)(*(uint32_t *)(a1 + 408) - 12) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 404);
    if ( v2 != 0 )
      return (G4_VCALL<int>(v2, 32) & 2) != 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_83A040  (binary VA: 0x83a040)
// Original: sub_83A040
// ----------------------------------------------------------------------------
bool sub_83A040(int a1)
{
  bool result;
  int v2;

  result = false;
  if ( a1 != 0 && *(uint32_t *)(*(uint32_t *)(a1 + 408) - 12) != 0 )
  {
    v2 = *(uint32_t *)(a1 + 404);
    if ( v2 != 0 )
      return (G4_VCALL<int>(v2, 32) & 2) != 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_83A080_ea83a080  (binary VA: 0x83a080)
// Original: sub_83A080
// ----------------------------------------------------------------------------
int sub_83A080_ea83a080(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  bool v7;
  int *v8;
  int v9;
  int result;

  G4_VCALL<void>(a1, 28, a3);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  v4 = sub_8F0680(v3);
  G4_VCALL<void>(v4, 120, 136, 1);
  v6 = sub_8F0680(v5);
  v7 = byte_20D4AB0 == 0;
  *(uint8_t *)(v6 + 2896) = 1;
  if ( v7 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v8 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v8 = (int *)(&dword_20D4AC0);
  sub_AB55E0((int)(uintptr_t)(v8), 0);
  result = sub_8F0680(v9);
  *(uint8_t *)(result + 190) = 1;
  *((uint8_t *)a1 + 52) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_83A200_ea83a200  (binary VA: 0x83a200)
// Original: sub_83A200
// ----------------------------------------------------------------------------
uint8_t * sub_83A200_ea83a200(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  char v3;
  uint8_t *result;

  if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
  {
    sub_9C9CC0(&unk_20D4E60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
    __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
  }
  v3 = byte_20D4E64;
  result = nullptr;
  if ( byte_20D4E64 == 0 )
    result = (uint8_t *)(&unk_20D4E60);
  if ( result[73] == 0 )
  {
    if ( byte_20D4E40 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      }
      v3 = byte_20D4E64;
    }
    result = nullptr;
    if ( v3 == 0 )
      result = (uint8_t *)(&unk_20D4E60);
    if ( result[74] == 0 )
    {
      G4_VCALL<void>(a1, 28, a3);
      return (uint8_t *)grapher::ActorBase::FireEvent(a1, 2, a3);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_83A350_ea83a350  (binary VA: 0x83a350)
// Original: sub_83A350
// ----------------------------------------------------------------------------
int sub_83A350_ea83a350(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int result;

  result = grapher::ActorBase::Cancel(a1, a2);
  if ( *((uint32_t *)a1 + 13) != 0 )
  {
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a2);
    result = sub_99B4D0(*((uint32_t *)a1 + 13), 2);
    *((uint32_t *)a1 + 13) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_83A430_ea83a430  (binary VA: 0x83a430)
// Original: sub_83A430
// ----------------------------------------------------------------------------
int sub_83A430_ea83a430(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int result;

  grapher::ActorBase::Cancel(a1, a2);
  result = *((uint32_t *)a1 + 13);
  if ( result != 0 )
  {
    if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
    {
      grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
      __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
    }
    grapher::ActorManager::RemoveFromUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a2);
    result = sub_99B4D0(*((uint32_t *)a1 + 13), 0);
    *((uint32_t *)a1 + 13) = 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_83A510_ea83a510  (binary VA: 0x83a510)
// Original: sub_83A510
// ----------------------------------------------------------------------------
int sub_83A510_ea83a510(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;

  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        if ( a2 != 0 )
        {
          if ( a2 == 1 )
          {
            G4_VCALL<void>(v4, 696);
            G4_VCALL<void>(v4, 700, 0);
          }
        }
        else
        {
          G4_VCALL<void>(v4, 672, 0);
          G4_VCALL<void>(v4, 692);
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_83A5E0_ea83a5e0  (binary VA: 0x83a5e0)
// Original: sub_83A5E0
// ----------------------------------------------------------------------------
int sub_83A5E0_ea83a5e0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  int *v7;

  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_8;
      }
    }
  }
  v4 = 0;
LABEL_8:
  v6 = sub_857260(a1, 1, a3);
  if ( v6 != 0 )
  {
    v7 = (int *)G4_VCALL<int>(v6, 16);
    if ( v7 != nullptr )
    {
      if ( v7 == (int *)(uintptr_t)(&dword_20D68D0) )
      {
LABEL_15:
        if ( v4 != 0 )
        {
          if ( a2 != 0 )
          {
            if ( a2 == 1 )
              G4_VCALL<void>(v4, 636);
          }
          else
          {
            G4_VCALL<void>(v4, 632);
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = (int *)v7[1];
          if ( v7 == nullptr )
            break;
          if ( v7 == (int *)(uintptr_t)(&dword_20D68D0) )
            goto LABEL_15;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_83A6D0_ea83a6d0  (binary VA: 0x83a6d0)
// Original: sub_83A6D0
// ----------------------------------------------------------------------------
int sub_83A6D0_ea83a6d0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int *v5;
  int v6;
  int *v7;
  int v9;

  v3 = (uint32_t *)sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != nullptr )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
        goto LABEL_8;
      while ( 1 )
      {
        v5 = (int *)v5[1];
        if ( v5 == nullptr )
          break;
        if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
          goto LABEL_8;
      }
    }
  }
  v4 = nullptr;
LABEL_8:
  v6 = sub_857260(a1, 1, a3);
  if ( v6 != 0 )
  {
    v9 = v6;
    v7 = (int *)G4_VCALL<int>(v6, 16);
    if ( v7 != nullptr )
    {
      if ( v7 == (int *)(uintptr_t)(&dword_20D68D0) )
      {
LABEL_15:
        if ( v4 != nullptr )
        {
          switch ( a2 )
          {
            case 1:
              G4_VCALL<void>(v4, 620, v9, v4[921]);
              break;
            case 2:
              G4_VCALL<void>(v4, 616, v9);
              break;
            case 0:
              G4_VCALL<void>(v4, 612, v9);
              break;
            default:
              break;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v7 = (int *)v7[1];
          if ( v7 == nullptr )
            break;
          if ( v7 == (int *)(uintptr_t)(&dword_20D68D0) )
            goto LABEL_15;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_83A800_ea83a800  (binary VA: 0x83a800)
// Original: sub_83A800
// ----------------------------------------------------------------------------
int sub_83A800_ea83a800(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;

  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        if ( a2 != 0 )
        {
          if ( a2 == 1 )
            sub_981EE0(v4, 0);
        }
        else
        {
          sub_9D7390(v4);
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_83A8D0_ea83a8d0  (binary VA: 0x83a8d0)
// Original: sub_83A8D0
// ----------------------------------------------------------------------------
int sub_83A8D0_ea83a8d0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;

  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        sub_981670(v4);
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_83A980_ea83a980  (binary VA: 0x83a980)
// Original: sub_83A980
// ----------------------------------------------------------------------------
int sub_83A980_ea83a980(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint8_t *v3;
  uint8_t *v4;
  int *v5;

  v3 = (uint8_t *)sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != nullptr )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        sub_9815B0(v4);
        if ( v4[3194] != 0 )
        {
          G4_VCALL<void>(v4, 668, 0, 0);
          sub_9845B0(v4, 1);
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_83AA60_ea83aa60  (binary VA: 0x83aa60)
// Original: sub_83AA60
// ----------------------------------------------------------------------------
int sub_83AA60_ea83aa60(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;

  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        switch ( a2 )
        {
          case 1:
            sub_9845B0(v4, 0);
            break;
          case 2:
            sub_9845B0(v4, *(uint8_t *)(v4 + 3194) ^ 1);
            break;
          case 0:
            sub_9845B0(v4, 1);
            break;
          default:
            break;
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_83AB40_ea83ab40  (binary VA: 0x83ab40)
// Original: sub_83AB40
// ----------------------------------------------------------------------------
int sub_83AB40_ea83ab40(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;

  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        switch ( a2 )
        {
          case 1:
            *(uint8_t *)(v4 + 2213) = 0;
            break;
          case 2:
            *(uint8_t *)(v4 + 2213) ^= 1u;
            break;
          case 0:
            *(uint8_t *)(v4 + 2213) = 1;
            break;
          default:
            break;
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_83AC10  (binary VA: 0x83ac10)
// Original: sub_83AC10
// ----------------------------------------------------------------------------
int sub_83AC10(int a1, uint32_t *a2, int *a3)
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
    v12 = opNew(0x18u);
    if ( v12 != -16 )
    {
      v13 = *a3;
      *(uint32_t *)(v12 + 20) = a3[1];
      *(uint32_t *)(v12 + 16) = v13;
    }
    sub_1904970(v11, v12, v16, v17);
    *(uint32_t *)a1 = v12;
    *(uint8_t *)(a1 + 4) = 1;
    ++a2[5];
    return a1;
  }
LABEL_12:
  if ( (uint32_t *)a2[3] == v4 )
  {
    sub_8393B0(v18, (int)(uintptr_t)(a2), 0, (int)(uintptr_t)(v4), a3);
    v14 = v18[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v14;
  }
  else
  {
    v16 = v4;
    v4 = (uint32_t *)sub_19048F0(v4);
    v6 = *a3;
    if ( v4[4] < (unsigned int)*a3 )
      goto LABEL_14;
LABEL_9:
    *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
    *(uint8_t *)(a1 + 4) = 0;
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_83AD50_ea83ad50  (binary VA: 0x83ad50)
// Original: sub_83AD50
// ----------------------------------------------------------------------------
int sub_83AD50_ea83ad50(grapher::ActorBase::Self *a1)
{
  typedef int _g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v3)) > _g4_s1 ? (16u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v4)) > _g4_s2 ? (20u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v5)) > _g4_s3 ? (24u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v6)) > _g4_s4 ? (28u + sizeof(_g4_t_v6)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 20u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "Snap To Target", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3);
  g4_std::string::Destroy(&v3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "AI", (int)(uintptr_t)(&v2) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "In", (int)(uintptr_t)(&v2) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), "Out", (int)(uintptr_t)(&v2) + 3);
  grapher::ActorBase::AddPin(a1, 1, v6, 0, -1);
  return ((g4_std::string::Destroy(v6)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83AE90_ea83ae90  (binary VA: 0x83ae90)
// Original: sub_83AE90
// ----------------------------------------------------------------------------
int sub_83AE90_ea83ae90(grapher::ActorBase::Self *a1)
{
  typedef void *_g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef uint8_t _g4_t_v5[7];
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (19u + sizeof(_g4_t_v3)) > _g4_s1 ? (19u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v4)) > _g4_s2 ? (20u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v5)) > _g4_s3 ? (24u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v6)) > _g4_s4 ? (32u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v7)) > _g4_s5 ? (36u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v8)) > _g4_s6 ? (40u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v9)) > _g4_s7 ? (44u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v10)) > _g4_s8 ? (48u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v11)) > _g4_s9 ? (52u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v12)) > _g4_s10 ? (56u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v13)) > _g4_s11 ? (60u + sizeof(_g4_t_v13)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 19u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 20u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5[4]), "Wanted Level", (int)(uintptr_t)(&v3));
  grapher::ActorBase::SetDisplayName(a1, &v5[4]);
  g4_std::string::Destroy(&v5[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v6), "Characters", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetCategoryName(a1, &v6);
  g4_std::string::Destroy(&v6);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Set", (int)(uintptr_t)(v5));
  grapher::ActorBase::AddPin(a1, 0, &v10, 1, -1);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Raise", (int)(uintptr_t)(&v5[1]));
  grapher::ActorBase::AddPin(a1, 1, &v11, 1, -1);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Lower", (int)(uintptr_t)(&v5[2]));
  grapher::ActorBase::AddPin(a1, 2, &v12, 1, -1);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "Out", (int)(uintptr_t)(&v5[3]));
  grapher::ActorBase::AddPin(a1, 3, v13, 0, -1);
  g4_std::string::Destroy(v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "The wanted level to set.", (int)(uintptr_t)(&v4) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Amount", (int)(uintptr_t)(&v4) + 1);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v7, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Amount", (int)(uintptr_t)(&v4) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v8), v2, 1, 0, (int)(uintptr_t)(&v9), 3);
  g4_std::string::Destroy(&v8);
  g4_std::string::Destroy(&v7);
  return ((g4_std::string::Destroy(&v9)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83B150_ea83b150  (binary VA: 0x83b150)
// Original: sub_83B150
// ----------------------------------------------------------------------------
int sub_83B150_ea83b150(grapher::ActorBase::Self *a1)
{
  typedef int _g4_t_v2;
  typedef int _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v3)) > _g4_s1 ? (16u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v4)) > _g4_s2 ? (20u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v5)) > _g4_s3 ? (24u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v6)) > _g4_s4 ? (28u + sizeof(_g4_t_v6)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 16u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 20u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v3), "Shake Cam (NYI)", (int)(uintptr_t)(&v2));
  grapher::ActorBase::SetDisplayName(a1, &v3);
  g4_std::string::Destroy(&v3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v4), "Cinematics", (int)(uintptr_t)(&v2) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v4);
  g4_std::string::Destroy(&v4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v5), "In", (int)(uintptr_t)(&v2) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v5, 1, -1);
  g4_std::string::Destroy(&v5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), "Out", (int)(uintptr_t)(&v2) + 3);
  grapher::ActorBase::AddPin(a1, 1, v6, 0, -1);
  return ((g4_std::string::Destroy(v6)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83B290_ea83b290  (binary VA: 0x83b290)
// Original: sub_83B290
// ----------------------------------------------------------------------------
int sub_83B290_ea83b290(grapher::ActorBase::Self *a1)
{
  typedef void *_g4_t_v2;
  typedef void *_g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (25u + sizeof(_g4_t_v4)) > _g4_s2 ? (25u + sizeof(_g4_t_v4)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v5)) > _g4_s3 ? (28u + sizeof(_g4_t_v5)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v6)) > _g4_s4 ? (32u + sizeof(_g4_t_v6)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v7)) > _g4_s5 ? (36u + sizeof(_g4_t_v7)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v8)) > _g4_s6 ? (40u + sizeof(_g4_t_v8)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v9)) > _g4_s7 ? (44u + sizeof(_g4_t_v9)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v10)) > _g4_s8 ? (48u + sizeof(_g4_t_v10)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v11)) > _g4_s9 ? (52u + sizeof(_g4_t_v11)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v12)) > _g4_s10 ? (56u + sizeof(_g4_t_v12)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v13)) > _g4_s11 ? (60u + sizeof(_g4_t_v13)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v14)) > _g4_s12 ? (64u + sizeof(_g4_t_v14)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v15)) > _g4_s13 ? (68u + sizeof(_g4_t_v15)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v16)) > _g4_s14 ? (72u + sizeof(_g4_t_v16)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v17)) > _g4_s15 ? (76u + sizeof(_g4_t_v17)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 25u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 76u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Start Cinematic", (int)(uintptr_t)(&v4));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Cinematics", (int)(uintptr_t)(&v4) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "In", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Out", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v16, 0, -1);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "Skip", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v17, 0, -1);
  g4_std::string::Destroy(v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Show/hide the skip button", (int)(uintptr_t)(&v5) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Show skip", (int)(uintptr_t)(&v4) + 2);
  v2 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v2, &v9, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Show skip", (int)(uintptr_t)(&v5));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v2, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  g4_std::string::Destroy(&v9);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), (char *)&unk_1B15112, (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Use Skip Fade", (int)(uintptr_t)(&v5) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Use Skip Fade", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v13), v3, 1, 0, (int)(uintptr_t)(&v14), 1);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  return ((g4_std::string::Destroy(&v14)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83B5F0_ea83b5f0  (binary VA: 0x83b5f0)
// Original: sub_83B5F0
// ----------------------------------------------------------------------------
int sub_83B5F0_ea83b5f0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v6)) > _g4_s3 ? (20u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v7)) > _g4_s4 ? (24u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v8)) > _g4_s5 ? (40u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v9)) > _g4_s6 ? (44u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v10)) > _g4_s7 ? (48u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v11)) > _g4_s8 ? (52u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v12)) > _g4_s9 ? (56u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v13)) > _g4_s10 ? (60u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v14)) > _g4_s11 ? (64u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v15)) > _g4_s12 ? (68u + sizeof(_g4_t_v15)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Shoot", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "AI", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Start", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Stop", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v15, 0, -1);
  g4_std::string::Destroy(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The attacking character.", (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v7 = v3;
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, &v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( v7 != nullptr )
    G4_VCALL<void>(v7, 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83B8D0_ea83b8d0  (binary VA: 0x83b8d0)
// Original: sub_83B8D0
// ----------------------------------------------------------------------------
int sub_83B8D0_ea83b8d0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef void *_g4_t_v14;
  typedef void *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef void *_g4_t_v17;
  typedef void *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t _g4_t_v27[20];
  typedef uint32_t *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
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
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64[4];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v7)) > _g4_s1 ? (0u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v8)) > _g4_s2 ? (0u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v9)) > _g4_s3 ? (0u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v10)) > _g4_s4 ? (0u + sizeof(_g4_t_v10)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v11)) > _g4_s5 ? (0u + sizeof(_g4_t_v11)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v12)) > _g4_s6 ? (0u + sizeof(_g4_t_v12)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v13)) > _g4_s7 ? (0u + sizeof(_g4_t_v13)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v14)) > _g4_s8 ? (0u + sizeof(_g4_t_v14)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v15)) > _g4_s9 ? (0u + sizeof(_g4_t_v15)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v16)) > _g4_s10 ? (0u + sizeof(_g4_t_v16)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_v17)) > _g4_s11 ? (0u + sizeof(_g4_t_v17)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_v18)) > _g4_s12 ? (0u + sizeof(_g4_t_v18)) : _g4_s12,
    _g4_s14 = (30u + sizeof(_g4_t_v19)) > _g4_s13 ? (30u + sizeof(_g4_t_v19)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v20)) > _g4_s14 ? (32u + sizeof(_g4_t_v20)) : _g4_s14,
    _g4_s16 = (36u + sizeof(_g4_t_v21)) > _g4_s15 ? (36u + sizeof(_g4_t_v21)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v22)) > _g4_s16 ? (40u + sizeof(_g4_t_v22)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v23)) > _g4_s17 ? (44u + sizeof(_g4_t_v23)) : _g4_s17,
    _g4_s19 = (48u + sizeof(_g4_t_v24)) > _g4_s18 ? (48u + sizeof(_g4_t_v24)) : _g4_s18,
    _g4_s20 = (52u + sizeof(_g4_t_v25)) > _g4_s19 ? (52u + sizeof(_g4_t_v25)) : _g4_s19,
    _g4_s21 = (56u + sizeof(_g4_t_v26)) > _g4_s20 ? (56u + sizeof(_g4_t_v26)) : _g4_s20,
    _g4_s22 = (60u + sizeof(_g4_t_v27)) > _g4_s21 ? (60u + sizeof(_g4_t_v27)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v28)) > _g4_s22 ? (80u + sizeof(_g4_t_v28)) : _g4_s22,
    _g4_s24 = (96u + sizeof(_g4_t_v29)) > _g4_s23 ? (96u + sizeof(_g4_t_v29)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v30)) > _g4_s24 ? (112u + sizeof(_g4_t_v30)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v31)) > _g4_s25 ? (120u + sizeof(_g4_t_v31)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v32)) > _g4_s26 ? (124u + sizeof(_g4_t_v32)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v33)) > _g4_s27 ? (128u + sizeof(_g4_t_v33)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v34)) > _g4_s28 ? (132u + sizeof(_g4_t_v34)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v35)) > _g4_s29 ? (136u + sizeof(_g4_t_v35)) : _g4_s29,
    _g4_s31 = (140u + sizeof(_g4_t_v36)) > _g4_s30 ? (140u + sizeof(_g4_t_v36)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v37)) > _g4_s31 ? (144u + sizeof(_g4_t_v37)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v38)) > _g4_s32 ? (148u + sizeof(_g4_t_v38)) : _g4_s32,
    _g4_s34 = (152u + sizeof(_g4_t_v39)) > _g4_s33 ? (152u + sizeof(_g4_t_v39)) : _g4_s33,
    _g4_s35 = (156u + sizeof(_g4_t_v40)) > _g4_s34 ? (156u + sizeof(_g4_t_v40)) : _g4_s34,
    _g4_s36 = (160u + sizeof(_g4_t_v41)) > _g4_s35 ? (160u + sizeof(_g4_t_v41)) : _g4_s35,
    _g4_s37 = (164u + sizeof(_g4_t_v42)) > _g4_s36 ? (164u + sizeof(_g4_t_v42)) : _g4_s36,
    _g4_s38 = (168u + sizeof(_g4_t_v43)) > _g4_s37 ? (168u + sizeof(_g4_t_v43)) : _g4_s37,
    _g4_s39 = (172u + sizeof(_g4_t_v44)) > _g4_s38 ? (172u + sizeof(_g4_t_v44)) : _g4_s38,
    _g4_s40 = (176u + sizeof(_g4_t_v45)) > _g4_s39 ? (176u + sizeof(_g4_t_v45)) : _g4_s39,
    _g4_s41 = (180u + sizeof(_g4_t_v46)) > _g4_s40 ? (180u + sizeof(_g4_t_v46)) : _g4_s40,
    _g4_s42 = (184u + sizeof(_g4_t_v47)) > _g4_s41 ? (184u + sizeof(_g4_t_v47)) : _g4_s41,
    _g4_s43 = (188u + sizeof(_g4_t_v48)) > _g4_s42 ? (188u + sizeof(_g4_t_v48)) : _g4_s42,
    _g4_s44 = (192u + sizeof(_g4_t_v49)) > _g4_s43 ? (192u + sizeof(_g4_t_v49)) : _g4_s43,
    _g4_s45 = (196u + sizeof(_g4_t_v50)) > _g4_s44 ? (196u + sizeof(_g4_t_v50)) : _g4_s44,
    _g4_s46 = (200u + sizeof(_g4_t_v51)) > _g4_s45 ? (200u + sizeof(_g4_t_v51)) : _g4_s45,
    _g4_s47 = (204u + sizeof(_g4_t_v52)) > _g4_s46 ? (204u + sizeof(_g4_t_v52)) : _g4_s46,
    _g4_s48 = (208u + sizeof(_g4_t_v53)) > _g4_s47 ? (208u + sizeof(_g4_t_v53)) : _g4_s47,
    _g4_s49 = (212u + sizeof(_g4_t_v54)) > _g4_s48 ? (212u + sizeof(_g4_t_v54)) : _g4_s48,
    _g4_s50 = (216u + sizeof(_g4_t_v55)) > _g4_s49 ? (216u + sizeof(_g4_t_v55)) : _g4_s49,
    _g4_s51 = (220u + sizeof(_g4_t_v56)) > _g4_s50 ? (220u + sizeof(_g4_t_v56)) : _g4_s50,
    _g4_s52 = (224u + sizeof(_g4_t_v57)) > _g4_s51 ? (224u + sizeof(_g4_t_v57)) : _g4_s51,
    _g4_s53 = (228u + sizeof(_g4_t_v58)) > _g4_s52 ? (228u + sizeof(_g4_t_v58)) : _g4_s52,
    _g4_s54 = (232u + sizeof(_g4_t_v59)) > _g4_s53 ? (232u + sizeof(_g4_t_v59)) : _g4_s53,
    _g4_s55 = (236u + sizeof(_g4_t_v60)) > _g4_s54 ? (236u + sizeof(_g4_t_v60)) : _g4_s54,
    _g4_s56 = (240u + sizeof(_g4_t_v61)) > _g4_s55 ? (240u + sizeof(_g4_t_v61)) : _g4_s55,
    _g4_s57 = (244u + sizeof(_g4_t_v62)) > _g4_s56 ? (244u + sizeof(_g4_t_v62)) : _g4_s56,
    _g4_s58 = (248u + sizeof(_g4_t_v63)) > _g4_s57 ? (248u + sizeof(_g4_t_v63)) : _g4_s57,
    _g4_s59 = (252u + sizeof(_g4_t_v64)) > _g4_s58 ? (252u + sizeof(_g4_t_v64)) : _g4_s58
  };
  alignas(16) uint8_t _g4_sf[_g4_s59];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 30u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 112u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 120u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 124u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 132u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 136u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 140u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 144u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 148u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 152u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 156u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 160u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 164u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 168u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 172u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 176u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 180u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 184u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 188u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 192u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 196u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 200u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 204u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 208u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 212u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 216u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 220u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 224u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 228u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 232u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 236u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 240u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 244u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 248u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 252u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Spawn AI [C]", (int)(uintptr_t)(&v19));
  grapher::ActorBase::SetDisplayName(a1, &v31);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Characters", (int)(uintptr_t)(&v19) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v32);
  g4_std::string::Destroy(&v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "In", (int)(uintptr_t)(v27));
  grapher::ActorBase::AddPin(a1, 0, &v61, 1, -1);
  g4_std::string::Destroy(&v61);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "All Spawned", (int)(uintptr_t)(&v27[1]));
  grapher::ActorBase::AddPin(a1, 1, &v62, 0, -1);
  g4_std::string::Destroy(&v62);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "New Spawn", (int)(uintptr_t)(&v27[2]));
  grapher::ActorBase::AddPin(a1, 2, &v63, 0, -1);
  g4_std::string::Destroy(&v63);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v64), "Out", (int)(uintptr_t)(&v27[3]));
  grapher::ActorBase::AddPin(a1, 3, v64, 0, -1);
  g4_std::string::Destroy(v64);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Base name of the object. A number will be appended, starting from 01.", (int)(uintptr_t)(&v20) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Base Name", (int)(uintptr_t)(&v20));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v27[4] = (uint32_t)(uintptr_t)(v6);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v33, 4, &v27[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Base Name", (int)(uintptr_t)(&v20) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v34), v7, 1, 1, (int)(uintptr_t)(&v35), 3);
  g4_std::string::Destroy(&v34);
  if ( *(uint32_t *)&v27[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v27[4] + 44))(*(uint32_t *)&v27[4]);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Spawn group in which a random template will be picked.", (int)(uintptr_t)(&v21) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "SpawnGroup", (int)(uintptr_t)(&v21));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "AllSpawnGroups", (int)(uintptr_t)(&v20) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v8 = v2;
  grapher::HolderT_string_e830be::From(v2, &v36);
  v28 = v8;
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v37, 11, &v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "SpawnGroup", (int)(uintptr_t)(&v21) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v38), v9, 1, 1, (int)(uintptr_t)(&v39), 3);
  g4_std::string::Destroy(&v38);
  if ( v28 != nullptr )
    G4_VCALL<void>(v28, 44);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v37);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "How many ms in between spawns", (int)(uintptr_t)(&v22) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Frequency", (int)(uintptr_t)(&v21) + 3);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v40, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "Frequency", (int)(uintptr_t)(&v22));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v41), v10, 1, 1, (int)(uintptr_t)(&v42), 3);
  g4_std::string::Destroy(&v41);
  g4_std::string::Destroy(&v40);
  g4_std::string::Destroy(&v42);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "Max number of spawn at any time", (int)(uintptr_t)(&v23));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Max Live Spawns", (int)(uintptr_t)(&v22) + 2);
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v43, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "Max Live Spawns", (int)(uintptr_t)(&v22) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v44), v11, 1, 1, (int)(uintptr_t)(&v45), 3);
  g4_std::string::Destroy(&v44);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v45);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "Total number of spawns this can produce", (int)(uintptr_t)(&v23) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Max Spawn", (int)(uintptr_t)(&v23) + 1);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v46, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "Max Spawn", (int)(uintptr_t)(&v23) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v47), v12, 1, 1, (int)(uintptr_t)(&v48), 3);
  g4_std::string::Destroy(&v47);
  g4_std::string::Destroy(&v46);
  g4_std::string::Destroy(&v48);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "Point to spawn the object on", (int)(uintptr_t)(&v24) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "Spawn Point", (int)(uintptr_t)(&v24));
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v13 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v29 = v13;
  v14 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v14, &v49, 9, &v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Spawn Point", (int)(uintptr_t)(&v24) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v50), v14, 1, 1, (int)(uintptr_t)(&v51), 3);
  g4_std::string::Destroy(&v50);
  if ( v29 != nullptr )
    G4_VCALL<void>(v29, 44);
  g4_std::string::Destroy(&v49);
  g4_std::string::Destroy(&v51);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "Spawn on a random point on the list instead of sequentially.", (int)(uintptr_t)(&v25) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "Random Spawn Point", (int)(uintptr_t)(&v24) + 3);
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v52, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "Random Spawn Point", (int)(uintptr_t)(&v25));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v53), v15, 1, 1, (int)(uintptr_t)(&v54), 3);
  g4_std::string::Destroy(&v53);
  g4_std::string::Destroy(&v52);
  g4_std::string::Destroy(&v54);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "Last object spawned.", (int)(uintptr_t)(&v26));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "Spawned", (int)(uintptr_t)(&v25) + 2);
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v16 = v4;
  grapher::HolderT_string_e830be::From(v4, &unk_20D67EC);
  v30 = v16;
  v17 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v17, &v55, 9, &v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "Spawned", (int)(uintptr_t)(&v25) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 7, (int)(uintptr_t)(&v56), v17, 1, 1, (int)(uintptr_t)(&v57), 2);
  g4_std::string::Destroy(&v56);
  if ( v30 != nullptr )
    G4_VCALL<void>(v30, 44);
  g4_std::string::Destroy(&v55);
  g4_std::string::Destroy(&v57);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "Managed spawn. Setting this flag allows the object to be deleted.", (int)(uintptr_t)(&v26) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "Managed", (int)(uintptr_t)(&v26) + 1);
  v18 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v18, &v58, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "Managed", (int)(uintptr_t)(&v26) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 8, (int)(uintptr_t)(&v59), v18, 1, 1, (int)(uintptr_t)(&v60), 3);
  g4_std::string::Destroy(&v59);
  g4_std::string::Destroy(&v58);
  return ((g4_std::string::Destroy(&v60)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83C550_ea83c550  (binary VA: 0x83c550)
// Original: sub_83C550
// ----------------------------------------------------------------------------
int sub_83C550_ea83c550(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v5)) > _g4_s2 ? (16u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v6)) > _g4_s3 ? (20u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v7)) > _g4_s4 ? (24u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v8)) > _g4_s5 ? (40u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v9)) > _g4_s6 ? (44u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v10)) > _g4_s7 ? (48u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v11)) > _g4_s8 ? (52u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v12)) > _g4_s9 ? (56u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v13)) > _g4_s10 ? (60u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v14)) > _g4_s11 ? (64u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v15)) > _g4_s12 ? (68u + sizeof(_g4_t_v15)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 64u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 68u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "State", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Characters", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Save", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Restore", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v15), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 2, v15, 0, -1);
  g4_std::string::Destroy(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The character whom to save/restore state.", (int)(uintptr_t)(&v6));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v7 = v3;
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, &v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v5) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( v7 != nullptr )
    G4_VCALL<void>(v7, 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83C830_ea83c830  (binary VA: 0x83c830)
// Original: sub_83C830
// ----------------------------------------------------------------------------
int sub_83C830_ea83c830(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int64_t _g4_t_v6 __attribute__((aligned(1)));
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v5)) > _g4_s2 ? (17u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v6)) > _g4_s3 ? (20u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v7)) > _g4_s4 ? (28u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v8)) > _g4_s5 ? (32u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v11)) > _g4_s8 ? (44u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v12)) > _g4_s9 ? (48u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v13)) > _g4_s10 ? (52u + sizeof(_g4_t_v13)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 17u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Steer Toward Deep Water", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "AI", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "In", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v12, 1, -1);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 1, v13, 0, -1);
  g4_std::string::Destroy(v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "The steering character.", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Subject", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v6) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v9, 9, (char *)&v6 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Subject", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v4, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  if ( HIDWORD(v6) != 0 )
    G4_VCALL<void>(HIDWORD(v6), 44);
  g4_std::string::Destroy(&v9);
  return ((g4_std::string::Destroy(&v11)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83CAC0_ea83cac0  (binary VA: 0x83cac0)
// Original: sub_83CAC0
// ----------------------------------------------------------------------------
int sub_83CAC0_ea83cac0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int64_t _g4_t_v6 __attribute__((aligned(1)));
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (17u + sizeof(_g4_t_v5)) > _g4_s2 ? (17u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v6)) > _g4_s3 ? (20u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v7)) > _g4_s4 ? (28u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v8)) > _g4_s5 ? (32u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v9)) > _g4_s6 ? (36u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v10)) > _g4_s7 ? (40u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v11)) > _g4_s8 ? (44u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v12)) > _g4_s9 ? (48u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v13)) > _g4_s10 ? (52u + sizeof(_g4_t_v13)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 17u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 20u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 48u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 52u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7), "Stop For Object", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v7);
  g4_std::string::Destroy(&v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "AI", (int)(uintptr_t)(&v5) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "In", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v12, 1, -1);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v13), "Out", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddPin(a1, 1, v13, 0, -1);
  g4_std::string::Destroy(v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "The driving character.", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Subject", (int)(uintptr_t)(&v5) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  HIDWORD(v6) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v9, 9, (char *)&v6 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Subject", (int)(uintptr_t)(&v6));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v10), v4, 1, 1, (int)(uintptr_t)(&v11), 3);
  g4_std::string::Destroy(&v10);
  if ( HIDWORD(v6) != 0 )
    G4_VCALL<void>(HIDWORD(v6), 44);
  g4_std::string::Destroy(&v9);
  return ((g4_std::string::Destroy(&v11)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83CD50_ea83cd50  (binary VA: 0x83cd50)
// Original: sub_83CD50
// ----------------------------------------------------------------------------
int sub_83CD50_ea83cd50(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[20];
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (33u + sizeof(_g4_t_v8)) > _g4_s4 ? (33u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v9)) > _g4_s5 ? (36u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v10)) > _g4_s6 ? (40u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v11)) > _g4_s7 ? (60u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v12)) > _g4_s8 ? (64u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v13)) > _g4_s9 ? (68u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v14)) > _g4_s10 ? (72u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v15)) > _g4_s11 ? (76u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v16)) > _g4_s12 ? (80u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v17)) > _g4_s13 ? (84u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v18)) > _g4_s14 ? (88u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v19)) > _g4_s15 ? (92u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v20)) > _g4_s16 ? (96u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v21)) > _g4_s17 ? (100u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v22)) > _g4_s18 ? (104u + sizeof(_g4_t_v22)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 33u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Thrown Out From Vehicle", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "AI", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Begin", (int)(uintptr_t)(&v10[1]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "End", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 1, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 2, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "The character being thrown out of the vehicle.", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Subject", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Subject", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Deprecated.", (int)(uintptr_t)(v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Vehicle", (int)(uintptr_t)(&v9) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Vehicle", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  return ((g4_std::string::Destroy(&v19)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83D190_ea83d190  (binary VA: 0x83d190)
// Original: sub_83D190
// ----------------------------------------------------------------------------
int sub_83D190_ea83d190(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[20];
  typedef uint32_t *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (33u + sizeof(_g4_t_v8)) > _g4_s4 ? (33u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v9)) > _g4_s5 ? (36u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v10)) > _g4_s6 ? (40u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v11)) > _g4_s7 ? (60u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v12)) > _g4_s8 ? (64u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v13)) > _g4_s9 ? (68u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v14)) > _g4_s10 ? (72u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v15)) > _g4_s11 ? (76u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v16)) > _g4_s12 ? (80u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v17)) > _g4_s13 ? (84u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v18)) > _g4_s14 ? (88u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v19)) > _g4_s15 ? (92u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v20)) > _g4_s16 ? (96u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v21)) > _g4_s17 ? (100u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v22)) > _g4_s18 ? (104u + sizeof(_g4_t_v22)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 33u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "Throw Out Of Vehicle", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v12);
  g4_std::string::Destroy(&v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "AI", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Begin", (int)(uintptr_t)(&v10[1]));
  grapher::ActorBase::AddPin(a1, 0, &v20, 1, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "End", (int)(uintptr_t)(&v10[2]));
  grapher::ActorBase::AddPin(a1, 1, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v22), "Out", (int)(uintptr_t)(&v10[3]));
  grapher::ActorBase::AddPin(a1, 2, v22, 0, -1);
  g4_std::string::Destroy(v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "The character throwing the occupant out.", (int)(uintptr_t)(&v9) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Subject", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v10[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v14, 9, &v10[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Subject", (int)(uintptr_t)(&v9));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v15), v5, 1, 1, (int)(uintptr_t)(&v16), 3);
  g4_std::string::Destroy(&v15);
  if ( *(uint32_t *)&v10[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v10[4] + 44))(*(uint32_t *)&v10[4]);
  g4_std::string::Destroy(&v14);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "The occupant vehicle. Deprecated.", (int)(uintptr_t)(v10));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Vehicle", (int)(uintptr_t)(&v9) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v11 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v17, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Vehicle", (int)(uintptr_t)(&v9) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v18), v7, 1, 1, (int)(uintptr_t)(&v19), 3);
  g4_std::string::Destroy(&v18);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v17);
  return ((g4_std::string::Destroy(&v19)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83D5D0_ea83d5d0  (binary VA: 0x83d5d0)
// Original: sub_83D5D0
// ----------------------------------------------------------------------------
int sub_83D5D0_ea83d5d0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef long double _g4_t_v12 __attribute__((aligned(1)));
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v5)) > _g4_s2 ? (12u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v6)) > _g4_s3 ? (12u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v7)) > _g4_s4 ? (12u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (30u + sizeof(_g4_t_v8)) > _g4_s5 ? (30u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v9)) > _g4_s6 ? (32u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v10)) > _g4_s7 ? (36u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v11)) > _g4_s8 ? (40u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v12)) > _g4_s9 ? (44u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v13)) > _g4_s10 ? (56u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v14)) > _g4_s11 ? (60u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v15)) > _g4_s12 ? (64u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v16)) > _g4_s13 ? (68u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v17)) > _g4_s14 ? (72u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v18)) > _g4_s15 ? (76u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v19)) > _g4_s16 ? (80u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v20)) > _g4_s17 ? (84u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v21)) > _g4_s18 ? (88u + sizeof(_g4_t_v21)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v22)) > _g4_s19 ? (92u + sizeof(_g4_t_v22)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v23)) > _g4_s20 ? (96u + sizeof(_g4_t_v23)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v24)) > _g4_s21 ? (100u + sizeof(_g4_t_v24)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v25)) > _g4_s22 ? (104u + sizeof(_g4_t_v25)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v26)) > _g4_s23 ? (108u + sizeof(_g4_t_v26)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v27)) > _g4_s24 ? (112u + sizeof(_g4_t_v27)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v28)) > _g4_s25 ? (116u + sizeof(_g4_t_v28)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v29)) > _g4_s26 ? (120u + sizeof(_g4_t_v29)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v30)) > _g4_s27 ? (124u + sizeof(_g4_t_v30)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 30u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 36u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 40u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 44u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 92u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 100u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 104u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 108u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 112u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 116u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 120u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 124u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Toggle Aggro", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Characters", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Enable", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Disable", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v28, 1, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Toggle", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v29, 1, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), "Out", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddPin(a1, 3, v30, 0, -1);
  g4_std::string::Destroy(v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character wich wil have his aggro toggled", (int)(uintptr_t)(&v9) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v9));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v12) = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v15, 9, (char *)&v12 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v9) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v6, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( DWORD1(v12) != 0 )
    G4_VCALL<void>(DWORD1(v12), 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The range of the target awarness", (int)(uintptr_t)(&v10) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Range", (int)(uintptr_t)(&v9) + 3);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v3), (int)(uintptr_t)(&v18), 2, 0.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Range", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "The angle of wich the character will be aware (in degree)", (int)(uintptr_t)(&v11));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Angle", (int)(uintptr_t)(&v10) + 2);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v4), (int)(uintptr_t)(&v21), 2, -1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Angle", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v4, 0, 1, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Is the character will go back in his position after losing his target", (int)(uintptr_t)(&v11) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "StayWithin", (int)(uintptr_t)(&v11) + 1);
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Stay Within", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v7, 1, 0, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  return ((g4_std::string::Destroy(&v26)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83DC00_ea83dc00  (binary VA: 0x83dc00)
// Original: sub_83DC00
// ----------------------------------------------------------------------------
int sub_83DC00_ea83dc00(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v3)) > _g4_s0 ? (0u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v4)) > _g4_s1 ? (0u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v5)) > _g4_s2 ? (0u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v6)) > _g4_s3 ? (12u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v7)) > _g4_s4 ? (12u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v8)) > _g4_s5 ? (16u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v9)) > _g4_s6 ? (20u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v10)) > _g4_s7 ? (24u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v11)) > _g4_s8 ? (28u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v12)) > _g4_s9 ? (32u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v13)) > _g4_s10 ? (48u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v14)) > _g4_s11 ? (52u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v15)) > _g4_s12 ? (56u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v16)) > _g4_s13 ? (60u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v17)) > _g4_s14 ? (64u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v18)) > _g4_s15 ? (68u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v19)) > _g4_s16 ? (72u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v20)) > _g4_s17 ? (76u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v21)) > _g4_s18 ? (80u + sizeof(_g4_t_v21)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v22)) > _g4_s19 ? (84u + sizeof(_g4_t_v22)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v23)) > _g4_s20 ? (88u + sizeof(_g4_t_v23)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v24)) > _g4_s21 ? (92u + sizeof(_g4_t_v24)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v25)) > _g4_s22 ? (96u + sizeof(_g4_t_v25)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v26)) > _g4_s23 ? (100u + sizeof(_g4_t_v26)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v27)) > _g4_s24 ? (104u + sizeof(_g4_t_v27)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v28)) > _g4_s25 ? (108u + sizeof(_g4_t_v28)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 0u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 48u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 56u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 60u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 68u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 72u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 76u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 84u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 88u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 92u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 96u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 100u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 104u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 108u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Set Combat Properties", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Characters", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "In", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddPin(a1, 0, &v27, 1, -1);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v28), "Out", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddPin(a1, 1, v28, 0, -1);
  g4_std::string::Destroy(v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character who will be able or not to fight", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v15, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v7, 1, 1, (int)(uintptr_t)(&v17), 1);
  g4_std::string::Destroy(&v16);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Can fight in general (except player)", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Can Fight", (int)(uintptr_t)(&v9) + 1);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v18, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Can Fight", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v3, 1, 1, (int)(uintptr_t)(&v20), 1);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v18);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Can move during combat", (int)(uintptr_t)(&v10) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Can Combat Move", (int)(uintptr_t)(&v10));
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v21, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Can Combat Move", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v22), v4, 1, 1, (int)(uintptr_t)(&v23), 1);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Can use covers during combat", (int)(uintptr_t)(&v11) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Can Use Covers", (int)(uintptr_t)(&v10) + 3);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v24, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Can Use Covers", (int)(uintptr_t)(&v11));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v25), v5, 1, 1, (int)(uintptr_t)(&v26), 1);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v24);
  return ((g4_std::string::Destroy(&v26)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83E190_ea83e190  (binary VA: 0x83e190)
// Original: sub_83E190
// ----------------------------------------------------------------------------
int sub_83E190_ea83e190(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef g4_int128_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v5)) > _g4_s2 ? (27u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v6)) > _g4_s3 ? (28u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v7)) > _g4_s4 ? (32u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v8)) > _g4_s5 ? (48u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v9)) > _g4_s6 ? (52u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v10)) > _g4_s7 ? (56u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v11)) > _g4_s8 ? (60u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v12)) > _g4_s9 ? (64u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v13)) > _g4_s10 ? (68u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v14)) > _g4_s11 ? (72u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v15)) > _g4_s12 ? (76u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v16)) > _g4_s13 ? (80u + sizeof(_g4_t_v16)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 27u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Toggle Flee", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Characters", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Enable", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Disable", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Toggle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The character who will Flee", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83E4C0_ea83e4c0  (binary VA: 0x83e4c0)
// Original: sub_83E4C0
// ----------------------------------------------------------------------------
int sub_83E4C0_ea83e4c0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
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
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v8)) > _g4_s4 ? (8u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v9)) > _g4_s5 ? (8u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v10)) > _g4_s6 ? (16u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v11)) > _g4_s7 ? (32u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v12)) > _g4_s8 ? (36u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v13)) > _g4_s9 ? (40u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v14)) > _g4_s10 ? (44u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v15)) > _g4_s11 ? (48u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v16)) > _g4_s12 ? (52u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v17)) > _g4_s13 ? (68u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v18)) > _g4_s14 ? (84u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v19)) > _g4_s15 ? (88u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v20)) > _g4_s16 ? (92u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v21)) > _g4_s17 ? (96u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v22)) > _g4_s18 ? (100u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v23)) > _g4_s19 ? (104u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v24)) > _g4_s20 ? (108u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v25)) > _g4_s21 ? (112u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v26)) > _g4_s22 ? (116u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v27)) > _g4_s23 ? (120u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v28)) > _g4_s24 ? (124u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v29)) > _g4_s25 ? (128u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v30)) > _g4_s26 ? (132u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v31)) > _g4_s27 ? (136u + sizeof(_g4_t_v31)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v32)) > _g4_s28 ? (140u + sizeof(_g4_t_v32)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v33)) > _g4_s29 ? (144u + sizeof(_g4_t_v33)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v34)) > _g4_s30 ? (148u + sizeof(_g4_t_v34)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v35)) > _g4_s31 ? (152u + sizeof(_g4_t_v35)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v36)) > _g4_s32 ? (156u + sizeof(_g4_t_v36)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v37)) > _g4_s33 ? (160u + sizeof(_g4_t_v37)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 96u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 104u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 108u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 112u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 116u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 120u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 132u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 136u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 140u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 148u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 152u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 156u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 160u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Toggle Ruberbanding", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Characters", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Enable", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v35, 1, -1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Disable", (int)(uintptr_t)(&v15) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v36, 1, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), "Out", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddPin(a1, 2, v37, 0, -1);
  g4_std::string::Destroy(v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "The character who will be chased.", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Target", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v16 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v20, 9, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Target", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v21), v5, 1, 1, (int)(uintptr_t)(&v22), 1);
  g4_std::string::Destroy(&v21);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "List of characters who will pursue the target.", (int)(uintptr_t)(&v12) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Pursuer", (int)(uintptr_t)(&v12) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v17 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v23, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Pursuers", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v24), v7, 1, 1, (int)(uintptr_t)(&v25), 1);
  g4_std::string::Destroy(&v24);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v28),
    "Distance ahead (or behind if negative) that the pursuer will consider it's ideal position, in cm.",
    (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Distance", (int)(uintptr_t)(&v13));
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v10), (int)(uintptr_t)(&v26), 2, 1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Distance", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v27), v10, 1, 1, (int)(uintptr_t)(&v28), 1);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v31),
    "Percentage of maximum increase or decrease in pursuer's speed to reach ideal position. [0 - 100]",
    (int)(uintptr_t)(&v14) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Max Speed Modifier", (int)(uintptr_t)(&v13) + 3);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v8), (int)(uintptr_t)(&v29), 2, 1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Max speed modifier", (int)(uintptr_t)(&v14));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v30), v8, 1, 1, (int)(uintptr_t)(&v31), 1);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v34),
    "Radius around the ideal position at which the maximum modifier applies. Inside radius, the modifier applied is linea"
    "rly interpolated.",
    (int)(uintptr_t)(&v15));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Speed Update Radius", (int)(uintptr_t)(&v14) + 2);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v9), (int)(uintptr_t)(&v32), 2, 1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Speed update radius", (int)(uintptr_t)(&v14) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v33), v9, 1, 1, (int)(uintptr_t)(&v34), 1);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v32);
  return ((g4_std::string::Destroy(&v34)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83EC20_ea83ec20  (binary VA: 0x83ec20)
// Original: sub_83EC20
// ----------------------------------------------------------------------------
int sub_83EC20_ea83ec20(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v8)) > _g4_s4 ? (32u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v9)) > _g4_s5 ? (36u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v10)) > _g4_s6 ? (40u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v11)) > _g4_s7 ? (44u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v12)) > _g4_s8 ? (60u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v13)) > _g4_s9 ? (76u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v14)) > _g4_s10 ? (80u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v15)) > _g4_s11 ? (84u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v16)) > _g4_s12 ? (88u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v17)) > _g4_s13 ? (92u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v18)) > _g4_s14 ? (96u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v19)) > _g4_s15 ? (100u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v20)) > _g4_s16 ? (104u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v21)) > _g4_s17 ? (108u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v22)) > _g4_s18 ? (112u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v23)) > _g4_s19 ? (116u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v24)) > _g4_s20 ? (120u + sizeof(_g4_t_v24)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 76u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 80u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 84u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 88u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 92u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 96u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 100u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 104u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 108u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 112u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 116u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 120u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Toggle Scripted", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Characters", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Enable", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddPin(a1, 0, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Disable", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Toggle", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 3, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The list of characters who will be scripted or not", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Target", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v11 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Target", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The name of the script to fire if the character enters the scripted behavior", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Scripted Script", (int)(uintptr_t)(&v9) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 4, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Scripted Script", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  return ((g4_std::string::Destroy(&v20)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83F0C0_ea83f0c0  (binary VA: 0x83f0c0)
// Original: sub_83F0C0
// ----------------------------------------------------------------------------
int sub_83F0C0_ea83f0c0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef g4_int128_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v5)) > _g4_s2 ? (27u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v6)) > _g4_s3 ? (28u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v7)) > _g4_s4 ? (32u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v8)) > _g4_s5 ? (48u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v9)) > _g4_s6 ? (52u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v10)) > _g4_s7 ? (56u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v11)) > _g4_s8 ? (60u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v12)) > _g4_s9 ? (64u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v13)) > _g4_s10 ? (68u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v14)) > _g4_s11 ? (72u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v15)) > _g4_s12 ? (76u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v16)) > _g4_s13 ? (80u + sizeof(_g4_t_v16)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 27u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Can Use Cover", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Characters", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Enable", (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Disable", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Toggle", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "the character who will be allowed to use cover", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 1, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83F3F0_ea83f3f0  (binary VA: 0x83f3f0)
// Original: sub_83F3F0
// ----------------------------------------------------------------------------
int sub_83F3F0_ea83f3f0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[20];
  typedef uint32_t *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v4)) > _g4_s0 ? (0u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v5)) > _g4_s1 ? (0u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v6)) > _g4_s2 ? (0u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v7)) > _g4_s3 ? (0u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v8)) > _g4_s4 ? (8u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (15u + sizeof(_g4_t_v9)) > _g4_s5 ? (15u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v10)) > _g4_s6 ? (16u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v11)) > _g4_s7 ? (20u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v12)) > _g4_s8 ? (24u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v13)) > _g4_s9 ? (44u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v14)) > _g4_s10 ? (56u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v15)) > _g4_s11 ? (60u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v16)) > _g4_s12 ? (64u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v17)) > _g4_s13 ? (68u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v18)) > _g4_s14 ? (72u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v19)) > _g4_s15 ? (76u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v20)) > _g4_s16 ? (80u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v21)) > _g4_s17 ? (84u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v22)) > _g4_s18 ? (88u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v23)) > _g4_s19 ? (92u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v24)) > _g4_s20 ? (96u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v25)) > _g4_s21 ? (100u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v26)) > _g4_s22 ? (104u + sizeof(_g4_t_v26)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 0u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 15u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 56u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Turn Toward", (int)(uintptr_t)(&v9));
  grapher::ActorBase::SetDisplayName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "AI", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetCategoryName(a1, &v15);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "In", (int)(uintptr_t)(&v12[2]));
  grapher::ActorBase::AddPin(a1, 0, &v25, 1, -1);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v26), "Out", (int)(uintptr_t)(&v12[3]));
  grapher::ActorBase::AddPin(a1, 1, v26, 0, -1);
  g4_std::string::Destroy(v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "The character to turn.", (int)(uintptr_t)(&v10) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Subject", (int)(uintptr_t)(&v10) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v12[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v16, 9, &v12[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Subject", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v17), v5, 1, 1, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  if ( *(uint32_t *)&v12[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v12[4] + 44))(*(uint32_t *)&v12[4]);
  g4_std::string::Destroy(&v16);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "The object to look at.", (int)(uintptr_t)(&v11) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Target", (int)(uintptr_t)(&v11));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v13 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v19, 9, &v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Target", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v20), v7, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( v13 != nullptr )
    G4_VCALL<void>(v13, 44);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Immediately or not.", (int)(uintptr_t)(&v12[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Immediately", (int)(uintptr_t)(&v11) + 3);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v22, 0, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Immediately", (int)(uintptr_t)(v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v23), v8, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v22);
  return ((g4_std::string::Destroy(&v24)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83F8F0_ea83f8f0  (binary VA: 0x83f8f0)
// Original: sub_83F8F0
// ----------------------------------------------------------------------------
int sub_83F8F0_ea83f8f0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef uint32_t *_g4_t_v3;
  typedef void *_g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef g4_int128_t _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[4];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (27u + sizeof(_g4_t_v5)) > _g4_s2 ? (27u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v6)) > _g4_s3 ? (28u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v7)) > _g4_s4 ? (32u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v8)) > _g4_s5 ? (48u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v9)) > _g4_s6 ? (52u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v10)) > _g4_s7 ? (56u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v11)) > _g4_s8 ? (60u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v12)) > _g4_s9 ? (64u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v13)) > _g4_s10 ? (68u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v14)) > _g4_s11 ? (72u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v15)) > _g4_s12 ? (76u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v16)) > _g4_s13 ? (80u + sizeof(_g4_t_v16)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 27u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 48u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 52u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 64u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 68u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 72u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 76u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 80u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "Use Cover", (int)(uintptr_t)(&v5));
  grapher::ActorBase::SetDisplayName(a1, &v8);
  g4_std::string::Destroy(&v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "Player", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetCategoryName(a1, &v9);
  g4_std::string::Destroy(&v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), (char *)&off_1B2B462, (int)(uintptr_t)(&v7));
  grapher::ActorBase::AddPin(a1, 0, &v13, 1, -1);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Use & Lock", (int)(uintptr_t)(&v7) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v14, 1, -1);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Unlock", (int)(uintptr_t)(&v7) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v15, 1, -1);
  g4_std::string::Destroy(&v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), "Out", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddPin(a1, 3, v16, 0, -1);
  g4_std::string::Destroy(v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "The Player (not needed)", (int)(uintptr_t)(&v6) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Target", (int)(uintptr_t)(&v6) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v3 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  DWORD1(v7) = (uint32_t)(uintptr_t)(v3);
  v4 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v4, &v10, 9, (char *)&v7 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Target", (int)(uintptr_t)(&v6) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v11), v4, 1, 0, (int)(uintptr_t)(&v12), 3);
  g4_std::string::Destroy(&v11);
  if ( DWORD1(v7) != 0 )
    G4_VCALL<void>(DWORD1(v7), 44);
  g4_std::string::Destroy(&v10);
  return ((g4_std::string::Destroy(&v12)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_83FC20_ea83fc20  (binary VA: 0x83fc20)
// Original: sub_83FC20
// ----------------------------------------------------------------------------
int sub_83FC20_ea83fc20(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v6)) > _g4_s2 ? (12u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v7)) > _g4_s3 ? (12u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v8)) > _g4_s4 ? (32u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v9)) > _g4_s5 ? (36u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v10)) > _g4_s6 ? (40u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v11)) > _g4_s7 ? (44u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v12)) > _g4_s8 ? (60u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v13)) > _g4_s9 ? (76u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (80u + sizeof(_g4_t_v14)) > _g4_s10 ? (80u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (84u + sizeof(_g4_t_v15)) > _g4_s11 ? (84u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (88u + sizeof(_g4_t_v16)) > _g4_s12 ? (88u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (92u + sizeof(_g4_t_v17)) > _g4_s13 ? (92u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (96u + sizeof(_g4_t_v18)) > _g4_s14 ? (96u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (100u + sizeof(_g4_t_v19)) > _g4_s15 ? (100u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (104u + sizeof(_g4_t_v20)) > _g4_s16 ? (104u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v21)) > _g4_s17 ? (108u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v22)) > _g4_s18 ? (112u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v23)) > _g4_s19 ? (116u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v24)) > _g4_s20 ? (120u + sizeof(_g4_t_v24)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 36u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 44u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 76u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 80u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 84u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 88u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 92u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 96u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 100u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 104u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 108u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 112u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 116u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 120u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Vehicle Door", (int)(uintptr_t)(&v8));
  grapher::ActorBase::SetDisplayName(a1, &v13);
  g4_std::string::Destroy(&v13);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "AI", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v14);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Open", (int)(uintptr_t)(&v10));
  grapher::ActorBase::AddPin(a1, 0, &v21, 1, -1);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Force", (int)(uintptr_t)(&v10) + 1);
  grapher::ActorBase::AddPin(a1, 1, &v22, 1, -1);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Close", (int)(uintptr_t)(&v10) + 2);
  grapher::ActorBase::AddPin(a1, 2, &v23, 1, -1);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "Out", (int)(uintptr_t)(&v10) + 3);
  grapher::ActorBase::AddPin(a1, 3, v24, 0, -1);
  g4_std::string::Destroy(v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "The character opening door.", (int)(uintptr_t)(&v9));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "Subject", (int)(uintptr_t)(&v8) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v11 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v15, 9, &v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Subject", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v16), v5, 1, 1, (int)(uintptr_t)(&v17), 3);
  g4_std::string::Destroy(&v16);
  if ( v11 != nullptr )
    G4_VCALL<void>(v11, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "The door vehicle.", (int)(uintptr_t)(&v9) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Vehicle", (int)(uintptr_t)(&v9) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v12 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v18, 9, &v12);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Vehicle", (int)(uintptr_t)(&v9) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v19), v7, 1, 1, (int)(uintptr_t)(&v20), 3);
  g4_std::string::Destroy(&v19);
  if ( v12 != nullptr )
    G4_VCALL<void>(v12, 44);
  g4_std::string::Destroy(&v18);
  return ((g4_std::string::Destroy(&v20)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8400C0_ea8400c0  (binary VA: 0x8400c0)
// Original: sub_8400C0
// ----------------------------------------------------------------------------
int sub_8400C0_ea8400c0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef void *_g4_t_v13;
  typedef uint32_t *_g4_t_v14;
  typedef void *_g4_t_v15;
  typedef void *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef void *_g4_t_v18;
  typedef void *_g4_t_v19;
  typedef void *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint8_t _g4_t_v29[20];
  typedef uint32_t *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
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
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66[4];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v8)) > _g4_s1 ? (0u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v9)) > _g4_s2 ? (0u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v10)) > _g4_s3 ? (0u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v11)) > _g4_s4 ? (0u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v12)) > _g4_s5 ? (0u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v13)) > _g4_s6 ? (0u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v14)) > _g4_s7 ? (0u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v15)) > _g4_s8 ? (0u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v16)) > _g4_s9 ? (0u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v17)) > _g4_s10 ? (0u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_v18)) > _g4_s11 ? (0u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_v19)) > _g4_s12 ? (0u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (4u + sizeof(_g4_t_v20)) > _g4_s13 ? (4u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (31u + sizeof(_g4_t_v21)) > _g4_s14 ? (31u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v22)) > _g4_s15 ? (32u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v23)) > _g4_s16 ? (36u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v24)) > _g4_s17 ? (40u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v25)) > _g4_s18 ? (44u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v26)) > _g4_s19 ? (48u + sizeof(_g4_t_v26)) : _g4_s19,
    _g4_s21 = (52u + sizeof(_g4_t_v27)) > _g4_s20 ? (52u + sizeof(_g4_t_v27)) : _g4_s20,
    _g4_s22 = (56u + sizeof(_g4_t_v28)) > _g4_s21 ? (56u + sizeof(_g4_t_v28)) : _g4_s21,
    _g4_s23 = (60u + sizeof(_g4_t_v29)) > _g4_s22 ? (60u + sizeof(_g4_t_v29)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v30)) > _g4_s23 ? (80u + sizeof(_g4_t_v30)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v31)) > _g4_s24 ? (96u + sizeof(_g4_t_v31)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v32)) > _g4_s25 ? (112u + sizeof(_g4_t_v32)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v33)) > _g4_s26 ? (128u + sizeof(_g4_t_v33)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v34)) > _g4_s27 ? (140u + sizeof(_g4_t_v34)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v35)) > _g4_s28 ? (144u + sizeof(_g4_t_v35)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v36)) > _g4_s29 ? (148u + sizeof(_g4_t_v36)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v37)) > _g4_s30 ? (152u + sizeof(_g4_t_v37)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v38)) > _g4_s31 ? (156u + sizeof(_g4_t_v38)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v39)) > _g4_s32 ? (160u + sizeof(_g4_t_v39)) : _g4_s32,
    _g4_s34 = (164u + sizeof(_g4_t_v40)) > _g4_s33 ? (164u + sizeof(_g4_t_v40)) : _g4_s33,
    _g4_s35 = (168u + sizeof(_g4_t_v41)) > _g4_s34 ? (168u + sizeof(_g4_t_v41)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v42)) > _g4_s35 ? (172u + sizeof(_g4_t_v42)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v43)) > _g4_s36 ? (176u + sizeof(_g4_t_v43)) : _g4_s36,
    _g4_s38 = (180u + sizeof(_g4_t_v44)) > _g4_s37 ? (180u + sizeof(_g4_t_v44)) : _g4_s37,
    _g4_s39 = (184u + sizeof(_g4_t_v45)) > _g4_s38 ? (184u + sizeof(_g4_t_v45)) : _g4_s38,
    _g4_s40 = (188u + sizeof(_g4_t_v46)) > _g4_s39 ? (188u + sizeof(_g4_t_v46)) : _g4_s39,
    _g4_s41 = (192u + sizeof(_g4_t_v47)) > _g4_s40 ? (192u + sizeof(_g4_t_v47)) : _g4_s40,
    _g4_s42 = (196u + sizeof(_g4_t_v48)) > _g4_s41 ? (196u + sizeof(_g4_t_v48)) : _g4_s41,
    _g4_s43 = (200u + sizeof(_g4_t_v49)) > _g4_s42 ? (200u + sizeof(_g4_t_v49)) : _g4_s42,
    _g4_s44 = (204u + sizeof(_g4_t_v50)) > _g4_s43 ? (204u + sizeof(_g4_t_v50)) : _g4_s43,
    _g4_s45 = (208u + sizeof(_g4_t_v51)) > _g4_s44 ? (208u + sizeof(_g4_t_v51)) : _g4_s44,
    _g4_s46 = (212u + sizeof(_g4_t_v52)) > _g4_s45 ? (212u + sizeof(_g4_t_v52)) : _g4_s45,
    _g4_s47 = (216u + sizeof(_g4_t_v53)) > _g4_s46 ? (216u + sizeof(_g4_t_v53)) : _g4_s46,
    _g4_s48 = (220u + sizeof(_g4_t_v54)) > _g4_s47 ? (220u + sizeof(_g4_t_v54)) : _g4_s47,
    _g4_s49 = (224u + sizeof(_g4_t_v55)) > _g4_s48 ? (224u + sizeof(_g4_t_v55)) : _g4_s48,
    _g4_s50 = (228u + sizeof(_g4_t_v56)) > _g4_s49 ? (228u + sizeof(_g4_t_v56)) : _g4_s49,
    _g4_s51 = (232u + sizeof(_g4_t_v57)) > _g4_s50 ? (232u + sizeof(_g4_t_v57)) : _g4_s50,
    _g4_s52 = (236u + sizeof(_g4_t_v58)) > _g4_s51 ? (236u + sizeof(_g4_t_v58)) : _g4_s51,
    _g4_s53 = (240u + sizeof(_g4_t_v59)) > _g4_s52 ? (240u + sizeof(_g4_t_v59)) : _g4_s52,
    _g4_s54 = (244u + sizeof(_g4_t_v60)) > _g4_s53 ? (244u + sizeof(_g4_t_v60)) : _g4_s53,
    _g4_s55 = (248u + sizeof(_g4_t_v61)) > _g4_s54 ? (248u + sizeof(_g4_t_v61)) : _g4_s54,
    _g4_s56 = (252u + sizeof(_g4_t_v62)) > _g4_s55 ? (252u + sizeof(_g4_t_v62)) : _g4_s55,
    _g4_s57 = (256u + sizeof(_g4_t_v63)) > _g4_s56 ? (256u + sizeof(_g4_t_v63)) : _g4_s56,
    _g4_s58 = (260u + sizeof(_g4_t_v64)) > _g4_s57 ? (260u + sizeof(_g4_t_v64)) : _g4_s57,
    _g4_s59 = (264u + sizeof(_g4_t_v65)) > _g4_s58 ? (264u + sizeof(_g4_t_v65)) : _g4_s58,
    _g4_s60 = (268u + sizeof(_g4_t_v66)) > _g4_s59 ? (268u + sizeof(_g4_t_v66)) : _g4_s59
  };
  alignas(16) uint8_t _g4_sf[_g4_s60];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 4u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 31u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 80u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 96u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 128u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 140u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 144u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 148u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 152u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 156u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 160u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 164u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 168u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 172u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 176u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 180u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 184u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 188u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 192u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 196u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 200u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 204u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 208u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 212u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 216u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 220u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 224u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 228u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 232u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 236u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 240u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 244u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 248u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 252u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 256u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 260u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 264u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 268u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Dialog", (int)(uintptr_t)(&v21));
  grapher::ActorBase::SetDisplayName(a1, &v34);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Cinematics", (int)(uintptr_t)(&v22));
  grapher::ActorBase::SetCategoryName(a1, &v35);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v64), "In", (int)(uintptr_t)(&v29[1]));
  grapher::ActorBase::AddPin(a1, 0, &v64, 1, -1);
  g4_std::string::Destroy(&v64);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v65), "Out", (int)(uintptr_t)(&v29[2]));
  grapher::ActorBase::AddPin(a1, 1, &v65, 0, -1);
  g4_std::string::Destroy(&v65);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v66), "Completed", (int)(uintptr_t)(&v29[3]));
  grapher::ActorBase::AddPin(a1, 2, v66, 0, -1);
  g4_std::string::Destroy(v66);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "The character who will talk", (int)(uintptr_t)(&v22) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Speaker", (int)(uintptr_t)(&v22) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v29[4] = (uint32_t)(uintptr_t)(v7);
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v36, 9, &v29[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v37), "Speaker", (int)(uintptr_t)(&v22) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v37), v8, 1, 1, (int)(uintptr_t)(&v38), 3);
  g4_std::string::Destroy(&v37);
  if ( *(uint32_t *)&v29[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v29[4] + 44))(*(uint32_t *)&v29[4]);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), "The text label specified as PACK_ID.TEXT_ID", (int)(uintptr_t)(&v23) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Text", (int)(uintptr_t)(&v23));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v30 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v39, 4, &v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Text", (int)(uintptr_t)(&v23) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v40), v10, 1, 1, (int)(uintptr_t)(&v41), 3);
  g4_std::string::Destroy(&v40);
  if ( v30 != nullptr )
    G4_VCALL<void>(v30, 44);
  g4_std::string::Destroy(&v39);
  g4_std::string::Destroy(&v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v44), "How many time the dialog stay displayed", (int)(uintptr_t)(&v24) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v42), "Time", (int)(uintptr_t)(&v23) + 3);
  v20 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v20, &v42, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v43), "Time", (int)(uintptr_t)(&v24));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v43), v20, 1, 0, (int)(uintptr_t)(&v44), 3);
  g4_std::string::Destroy(&v43);
  g4_std::string::Destroy(&v42);
  g4_std::string::Destroy(&v44);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "The single animation when talking", (int)(uintptr_t)(&v25));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "TalkAnimation", (int)(uintptr_t)(&v24) + 2);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v11 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v31 = v11;
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v45, 4, &v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v46), "Talk Animation", (int)(uintptr_t)(&v24) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v46), v12, 1, 1, (int)(uintptr_t)(&v47), 3);
  g4_std::string::Destroy(&v46);
  if ( v31 != nullptr )
    G4_VCALL<void>(v31, 44);
  g4_std::string::Destroy(&v45);
  g4_std::string::Destroy(&v47);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v50), "Pick one animation randomly from this list", (int)(uintptr_t)(&v25) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v48), "TARandom", (int)(uintptr_t)(&v25) + 1);
  v13 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v13, &v48, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v49), "T.Anim Random", (int)(uintptr_t)(&v25) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 5, (int)(uintptr_t)(&v49), v13, 1, 0, (int)(uintptr_t)(&v50), 3);
  g4_std::string::Destroy(&v49);
  g4_std::string::Destroy(&v48);
  g4_std::string::Destroy(&v50);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v53), "The single animation when listening", (int)(uintptr_t)(&v26) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v51), "ListenAnimation", (int)(uintptr_t)(&v26));
  v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v4 = (uint32_t)(uintptr_t)(&off_205C408);
  v4[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v14 = v4;
  grapher::HolderT_string_e830be::From(v4, &unk_20D67EC);
  v32 = v14;
  v15 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v15, &v51, 4, &v32);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v52), "Listen Animation", (int)(uintptr_t)(&v26) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 6, (int)(uintptr_t)(&v52), v15, 1, 1, (int)(uintptr_t)(&v53), 3);
  g4_std::string::Destroy(&v52);
  if ( v32 != nullptr )
    G4_VCALL<void>(v32, 44);
  g4_std::string::Destroy(&v51);
  g4_std::string::Destroy(&v53);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "Pick one animation randomly from this list", (int)(uintptr_t)(&v27) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "LARandom", (int)(uintptr_t)(&v26) + 3);
  v16 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v16, &v54, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v55), "L.Anim Random", (int)(uintptr_t)(&v27));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 7, (int)(uintptr_t)(&v55), v16, 1, 0, (int)(uintptr_t)(&v56), 3);
  g4_std::string::Destroy(&v55);
  g4_std::string::Destroy(&v54);
  g4_std::string::Destroy(&v56);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60), "Type of dialog from dialogs_.xml", (int)(uintptr_t)(&v28) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "Dialog Type", (int)(uintptr_t)(&v27) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v57), "Dialogs.SubtitleDialog", (int)(uintptr_t)(&v27) + 2);
  v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v5 = (uint32_t)(uintptr_t)(&off_205C408);
  v5[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v17 = v5;
  grapher::HolderT_string_e830be::From(v5, &v57);
  v33 = v17;
  v18 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v18, &v58, 11, &v33);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v59), "Dialog Type", (int)(uintptr_t)(&v28));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 8, (int)(uintptr_t)(&v59), v18, 1, 1, (int)(uintptr_t)(&v60), 3);
  g4_std::string::Destroy(&v59);
  if ( v33 != nullptr )
    G4_VCALL<void>(v33, 44);
  g4_std::string::Destroy(&v57);
  g4_std::string::Destroy(&v58);
  g4_std::string::Destroy(&v60);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v63), "What % of sound duration to leave after sound finished", (int)(uintptr_t)(v29));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v61), "PercentAfterSound", (int)(uintptr_t)(&v28) + 2);
  v19 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v19, &v61, 1, -1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "% After Sound", (int)(uintptr_t)(&v28) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v62), v19, 1, 0, (int)(uintptr_t)(&v63), 3);
  g4_std::string::Destroy(&v62);
  g4_std::string::Destroy(&v61);
  return ((g4_std::string::Destroy(&v63)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_840D90_ea840d90  (binary VA: 0x840d90)
// Original: sub_840D90
// ----------------------------------------------------------------------------
int sub_840D90_ea840d90(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v5)) > _g4_s2 ? (8u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v7)) > _g4_s4 ? (20u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v8)) > _g4_s5 ? (24u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v9)) > _g4_s6 ? (28u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v10)) > _g4_s7 ? (44u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v11)) > _g4_s8 ? (48u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v12)) > _g4_s9 ? (52u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v13)) > _g4_s10 ? (56u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v14)) > _g4_s11 ? (60u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v15)) > _g4_s12 ? (64u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v16)) > _g4_s13 ? (68u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v17)) > _g4_s14 ? (72u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v18)) > _g4_s15 ? (76u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v19)) > _g4_s16 ? (80u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v20)) > _g4_s17 ? (84u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v21)) > _g4_s18 ? (88u + sizeof(_g4_t_v21)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Fade In", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Cinematics", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "In", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Out", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Complete", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 2, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Time to fade in (<0 ==> use xml value :: 0 == instant :: >0 == its time in MS)", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "TransitionTime", (int)(uintptr_t)(&v6) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 1, 150);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Transition Time", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v3, 1, 0, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "FadeInfo, see giv_fadeinfos.xml", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "FadeInfo", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "FadeInfos.Script", (int)(uintptr_t)(&v7) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v15);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v16, 11, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "FadeInfo", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v5, 1, 0, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v16);
  return ((g4_std::string::Destroy(&v18)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_841190_ea841190  (binary VA: 0x841190)
// Original: sub_841190
// ----------------------------------------------------------------------------
int sub_841190_ea841190(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  typedef void *_g4_t_v3;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[4];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v3)) > _g4_s0 ? (8u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v4)) > _g4_s1 ? (8u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v5)) > _g4_s2 ? (8u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v6)) > _g4_s3 ? (16u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v7)) > _g4_s4 ? (20u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v8)) > _g4_s5 ? (24u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v9)) > _g4_s6 ? (28u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v10)) > _g4_s7 ? (44u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v11)) > _g4_s8 ? (48u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v12)) > _g4_s9 ? (52u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v13)) > _g4_s10 ? (56u + sizeof(_g4_t_v13)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v14)) > _g4_s11 ? (60u + sizeof(_g4_t_v14)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v15)) > _g4_s12 ? (64u + sizeof(_g4_t_v15)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v16)) > _g4_s13 ? (68u + sizeof(_g4_t_v16)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v17)) > _g4_s14 ? (72u + sizeof(_g4_t_v17)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v18)) > _g4_s15 ? (76u + sizeof(_g4_t_v18)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v19)) > _g4_s16 ? (80u + sizeof(_g4_t_v19)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v20)) > _g4_s17 ? (84u + sizeof(_g4_t_v20)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v21)) > _g4_s18 ? (88u + sizeof(_g4_t_v21)) : _g4_s18
  };
  alignas(16) uint8_t _g4_sf[_g4_s19];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 44u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 48u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 52u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 56u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 60u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 68u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 72u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 76u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 80u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 88u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10), "Fade Out", (int)(uintptr_t)(&v6));
  grapher::ActorBase::SetDisplayName(a1, &v10);
  g4_std::string::Destroy(&v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "Cinematics", (int)(uintptr_t)(&v6) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v11);
  g4_std::string::Destroy(&v11);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "In", (int)(uintptr_t)(&v8) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Out", (int)(uintptr_t)(&v8) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Complete", (int)(uintptr_t)(&v8) + 3);
  grapher::ActorBase::AddPin(a1, 2, v21, 0, -1);
  g4_std::string::Destroy(v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "Time to fade out (<0 ==> use xml value :: 0 == instant :: >0 == its time in MS)", (int)(uintptr_t)(&v7));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v12), "TransitionTime", (int)(uintptr_t)(&v6) + 2);
  v3 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v3, &v12, 1, 300);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), "Transition Time", (int)(uintptr_t)(&v6) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v13), v3, 1, 0, (int)(uintptr_t)(&v14), 3);
  g4_std::string::Destroy(&v13);
  g4_std::string::Destroy(&v12);
  g4_std::string::Destroy(&v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "FadeInfo, see giv_fadeinfos.xml", (int)(uintptr_t)(&v8));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "FadeInfo", (int)(uintptr_t)(&v7) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "FadeInfos.Script", (int)(uintptr_t)(&v7) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &v15);
  v9 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v16, 11, &v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "FadeInfo", (int)(uintptr_t)(&v7) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v17), v5, 1, 0, (int)(uintptr_t)(&v18), 3);
  g4_std::string::Destroy(&v17);
  if ( v9 != nullptr )
    G4_VCALL<void>(v9, 44);
  g4_std::string::Destroy(&v15);
  g4_std::string::Destroy(&v16);
  return ((g4_std::string::Destroy(&v18)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_841590_ea841590  (binary VA: 0x841590)
// Original: sub_841590
// ----------------------------------------------------------------------------
int sub_841590_ea841590(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef void *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[20];
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
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
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41[4];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v8)) > _g4_s3 ? (8u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v9)) > _g4_s4 ? (8u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v10)) > _g4_s5 ? (8u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v11)) > _g4_s6 ? (16u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v12)) > _g4_s7 ? (16u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (31u + sizeof(_g4_t_v13)) > _g4_s8 ? (31u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v14)) > _g4_s9 ? (32u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v15)) > _g4_s10 ? (36u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v16)) > _g4_s11 ? (40u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (44u + sizeof(_g4_t_v17)) > _g4_s12 ? (44u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v18)) > _g4_s13 ? (48u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v19)) > _g4_s14 ? (68u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v20)) > _g4_s15 ? (84u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v21)) > _g4_s16 ? (96u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v22)) > _g4_s17 ? (100u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v23)) > _g4_s18 ? (104u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v24)) > _g4_s19 ? (108u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v25)) > _g4_s20 ? (112u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v26)) > _g4_s21 ? (116u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (120u + sizeof(_g4_t_v27)) > _g4_s22 ? (120u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (124u + sizeof(_g4_t_v28)) > _g4_s23 ? (124u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v29)) > _g4_s24 ? (128u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v30)) > _g4_s25 ? (132u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v31)) > _g4_s26 ? (136u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v32)) > _g4_s27 ? (140u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (144u + sizeof(_g4_t_v33)) > _g4_s28 ? (144u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (148u + sizeof(_g4_t_v34)) > _g4_s29 ? (148u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v35)) > _g4_s30 ? (152u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (156u + sizeof(_g4_t_v36)) > _g4_s31 ? (156u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (160u + sizeof(_g4_t_v37)) > _g4_s32 ? (160u + sizeof(_g4_t_v37)) : _g4_s32,
    _g4_s34 = (164u + sizeof(_g4_t_v38)) > _g4_s33 ? (164u + sizeof(_g4_t_v38)) : _g4_s33,
    _g4_s35 = (168u + sizeof(_g4_t_v39)) > _g4_s34 ? (168u + sizeof(_g4_t_v39)) : _g4_s34,
    _g4_s36 = (172u + sizeof(_g4_t_v40)) > _g4_s35 ? (172u + sizeof(_g4_t_v40)) : _g4_s35,
    _g4_s37 = (176u + sizeof(_g4_t_v41)) > _g4_s36 ? (176u + sizeof(_g4_t_v41)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 31u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 48u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 84u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 96u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 104u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 108u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 112u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 116u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 120u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 132u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 136u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 140u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 148u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 152u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 156u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 160u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 164u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 168u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 172u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 176u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Play Cinematic", (int)(uintptr_t)(&v13));
  grapher::ActorBase::SetDisplayName(a1, &v21);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Cinematics", (int)(uintptr_t)(&v14));
  grapher::ActorBase::SetCategoryName(a1, &v22);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "In", (int)(uintptr_t)(v18));
  grapher::ActorBase::AddPin(a1, 0, &v38, 1, -1);
  g4_std::string::Destroy(&v38);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v39), "Out", (int)(uintptr_t)(&v18[1]));
  grapher::ActorBase::AddPin(a1, 1, &v39, 0, -1);
  g4_std::string::Destroy(&v39);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v40), "Completed", (int)(uintptr_t)(&v18[2]));
  grapher::ActorBase::AddPin(a1, 2, &v40, 0, -1);
  g4_std::string::Destroy(&v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v41), "Skip", (int)(uintptr_t)(&v18[3]));
  grapher::ActorBase::AddPin(a1, 3, v41, 0, -1);
  g4_std::string::Destroy(v41);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Name of the cinematic to play", (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "CineName", (int)(uintptr_t)(&v14) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v18[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v23, 4, &v18[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "CineName", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v24), v6, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  if ( *(uint32_t *)&v18[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v18[4] + 44))(*(uint32_t *)&v18[4]);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Marker where the cinematic will be played", (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Marker", (int)(uintptr_t)(&v15));
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v19 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v26, 9, &v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Marker", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v27), v8, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  if ( v19 != nullptr )
    G4_VCALL<void>(v19, 44);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Music to play during the cinematic", (int)(uintptr_t)(&v16) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Music", (int)(uintptr_t)(&v15) + 3);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v20 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v29, 4, &v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Music", (int)(uintptr_t)(&v16));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v30), v10, 1, 1, (int)(uintptr_t)(&v31), 3);
  g4_std::string::Destroy(&v30);
  if ( v20 != nullptr )
    G4_VCALL<void>(v20, 44);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "Enable automatic fades.", (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Use Fades", (int)(uintptr_t)(&v16) + 2);
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v32, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Use Fades", (int)(uintptr_t)(&v16) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v33), v11, 1, 1, (int)(uintptr_t)(&v34), 3);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v32);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v37),
    "Restore the HUD at the end of the cinematic. Set it to false to chain cinematics together.",
    (int)(uintptr_t)(&v17) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "Restore Hud", (int)(uintptr_t)(&v17) + 1);
  v12 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v12, &v35, 0, 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Restore Hud", (int)(uintptr_t)(&v17) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v36), v12, 1, 1, (int)(uintptr_t)(&v37), 3);
  g4_std::string::Destroy(&v36);
  g4_std::string::Destroy(&v35);
  return ((g4_std::string::Destroy(&v37)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_841DB0_ea841db0  (binary VA: 0x841db0)
// Original: sub_841DB0
// ----------------------------------------------------------------------------
int sub_841DB0_ea841db0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef void *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint8_t _g4_t_v16[20];
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
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
  typedef int _g4_t_v35[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v6)) > _g4_s1 ? (0u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v7)) > _g4_s2 ? (0u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v8)) > _g4_s3 ? (0u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v9)) > _g4_s4 ? (0u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v10)) > _g4_s5 ? (0u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v11)) > _g4_s6 ? (0u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (31u + sizeof(_g4_t_v12)) > _g4_s7 ? (31u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v13)) > _g4_s8 ? (32u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v14)) > _g4_s9 ? (36u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v15)) > _g4_s10 ? (40u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v16)) > _g4_s11 ? (44u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v17)) > _g4_s12 ? (64u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v18)) > _g4_s13 ? (80u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v19)) > _g4_s14 ? (92u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v20)) > _g4_s15 ? (96u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v21)) > _g4_s16 ? (100u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v22)) > _g4_s17 ? (104u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v23)) > _g4_s18 ? (108u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v24)) > _g4_s19 ? (112u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v25)) > _g4_s20 ? (116u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v26)) > _g4_s21 ? (120u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v27)) > _g4_s22 ? (124u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (128u + sizeof(_g4_t_v28)) > _g4_s23 ? (128u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v29)) > _g4_s24 ? (132u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v30)) > _g4_s25 ? (136u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (140u + sizeof(_g4_t_v31)) > _g4_s26 ? (140u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v32)) > _g4_s27 ? (144u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (148u + sizeof(_g4_t_v33)) > _g4_s28 ? (148u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (152u + sizeof(_g4_t_v34)) > _g4_s29 ? (152u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v35)) > _g4_s30 ? (156u + sizeof(_g4_t_v35)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 31u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 64u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 80u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 104u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 108u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 112u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 116u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 120u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 124u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 128u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 132u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 136u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 140u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 144u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 148u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 152u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 156u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 2, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Play VFX", (int)(uintptr_t)(&v12));
  grapher::ActorBase::SetDisplayName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Cinematics", (int)(uintptr_t)(&v13));
  grapher::ActorBase::SetCategoryName(a1, &v20);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), "In", (int)(uintptr_t)(&v16[2]));
  grapher::ActorBase::AddPin(a1, 0, &v34, 1, -1);
  g4_std::string::Destroy(&v34);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v35), "Out", (int)(uintptr_t)(&v16[3]));
  grapher::ActorBase::AddPin(a1, 1, v35, 0, -1);
  g4_std::string::Destroy(v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "VFX to play (from GIV_vfx.xml)", (int)(uintptr_t)(&v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "VFX", (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "VFXInfos.", (int)(uintptr_t)(&v13) + 1);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &v21);
  *(uint32_t *)&v16[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v22, 11, &v16[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "VFX", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v23), v6, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  if ( *(uint32_t *)&v16[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v16[4] + 44))(*(uint32_t *)&v16[4]);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Target where to play the VFX", (int)(uintptr_t)(&v14) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Target", (int)(uintptr_t)(&v14) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v17 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v25, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Target", (int)(uintptr_t)(&v14) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v26), v8, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v25);
  g4_std::string::Destroy(&v27);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v30),
    "VFXInfo overwrite : < 0 : infinite, 0 == invalid, > 0 : play X times. ?, 666 = Use VFXInfo. value.",
    (int)(uintptr_t)(&v15) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "LoopCount", (int)(uintptr_t)(&v15));
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v28, 1, 666);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "LoopCount", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v29), v9, 1, 1, (int)(uintptr_t)(&v30), 3);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Sound to play with the VFX", (int)(uintptr_t)(&v16[1]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Sound", (int)(uintptr_t)(&v15) + 3);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v18 = v10;
  v11 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v11, &v31, 4, &v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "Sound", (int)(uintptr_t)(v16));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v32), v11, 1, 1, (int)(uintptr_t)(&v33), 3);
  g4_std::string::Destroy(&v32);
  if ( v18 != nullptr )
    G4_VCALL<void>(v18, 44);
  g4_std::string::Destroy(&v31);
  return ((g4_std::string::Destroy(&v33)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_842450_ea842450  (binary VA: 0x842450)
// Original: sub_842450
// ----------------------------------------------------------------------------
int sub_842450_ea842450(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
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
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37[4];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v4)) > _g4_s0 ? (8u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v5)) > _g4_s1 ? (8u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v6)) > _g4_s2 ? (8u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v7)) > _g4_s3 ? (8u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v8)) > _g4_s4 ? (8u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v9)) > _g4_s5 ? (8u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (8u + sizeof(_g4_t_v10)) > _g4_s6 ? (8u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v11)) > _g4_s7 ? (32u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v12)) > _g4_s8 ? (36u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v13)) > _g4_s9 ? (40u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v14)) > _g4_s10 ? (44u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v15)) > _g4_s11 ? (48u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v16)) > _g4_s12 ? (52u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v17)) > _g4_s13 ? (68u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v18)) > _g4_s14 ? (84u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v19)) > _g4_s15 ? (88u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v20)) > _g4_s16 ? (92u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v21)) > _g4_s17 ? (96u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v22)) > _g4_s18 ? (100u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v23)) > _g4_s19 ? (104u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v24)) > _g4_s20 ? (108u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v25)) > _g4_s21 ? (112u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v26)) > _g4_s22 ? (116u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v27)) > _g4_s23 ? (120u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v28)) > _g4_s24 ? (124u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v29)) > _g4_s25 ? (128u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v30)) > _g4_s26 ? (132u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v31)) > _g4_s27 ? (136u + sizeof(_g4_t_v31)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v32)) > _g4_s28 ? (140u + sizeof(_g4_t_v32)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v33)) > _g4_s29 ? (144u + sizeof(_g4_t_v33)) : _g4_s29,
    _g4_s31 = (148u + sizeof(_g4_t_v34)) > _g4_s30 ? (148u + sizeof(_g4_t_v34)) : _g4_s30,
    _g4_s32 = (152u + sizeof(_g4_t_v35)) > _g4_s31 ? (152u + sizeof(_g4_t_v35)) : _g4_s31,
    _g4_s33 = (156u + sizeof(_g4_t_v36)) > _g4_s32 ? (156u + sizeof(_g4_t_v36)) : _g4_s32,
    _g4_s34 = (160u + sizeof(_g4_t_v37)) > _g4_s33 ? (160u + sizeof(_g4_t_v37)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 8u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 96u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 104u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 108u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 112u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 116u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 120u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 132u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 136u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 140u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 144u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 148u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 152u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 156u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 160u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 5);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Set Cam", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Cinematics", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v19);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "In", (int)(uintptr_t)(&v15) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v35, 1, -1);
  g4_std::string::Destroy(&v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "Out", (int)(uintptr_t)(&v15) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v36, 0, -1);
  g4_std::string::Destroy(&v36);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v37), "Completed", (int)(uintptr_t)(&v15) + 3);
  grapher::ActorBase::AddPin(a1, 2, v37, 0, -1);
  g4_std::string::Destroy(v37);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Camera to set", (int)(uintptr_t)(&v12));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Camera", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  v16 = v4;
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v20, 9, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Camera", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v21), v5, 1, 1, (int)(uintptr_t)(&v22), 3);
  g4_std::string::Destroy(&v21);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v20);
  g4_std::string::Destroy(&v22);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Target of the camera (use only on relative camera)", (int)(uintptr_t)(&v12) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Target", (int)(uintptr_t)(&v12) + 1);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v17 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v23, 9, &v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Target", (int)(uintptr_t)(&v12) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v24), v7, 1, 1, (int)(uintptr_t)(&v25), 3);
  g4_std::string::Destroy(&v24);
  if ( v17 != nullptr )
    G4_VCALL<void>(v17, 44);
  g4_std::string::Destroy(&v23);
  g4_std::string::Destroy(&v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Time to reach the camera position", (int)(uintptr_t)(&v13) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "TransitionTime", (int)(uintptr_t)(&v13));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v26, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Transition Time", (int)(uintptr_t)(&v13) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v27), v8, 1, 1, (int)(uintptr_t)(&v28), 3);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v26);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Percent of transition time after which camera will move slower", (int)(uintptr_t)(&v14) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "SlowTimePercent", (int)(uintptr_t)(&v13) + 3);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v29, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Slow time percent", (int)(uintptr_t)(&v14));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v30), v9, 1, 0, (int)(uintptr_t)(&v31), 3);
  g4_std::string::Destroy(&v30);
  g4_std::string::Destroy(&v29);
  g4_std::string::Destroy(&v31);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v34),
    "Ratio for camera speed in slow motion: original speed will divide on this value after reach SlowTimePercent",
    (int)(uintptr_t)(&v15));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "SlowValue", (int)(uintptr_t)(&v14) + 2);
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct((int)(uintptr_t)(v10), (int)(uintptr_t)(&v32), 2, 1.0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v33), "Slow value", (int)(uintptr_t)(&v14) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 4, (int)(uintptr_t)(&v33), v10, 1, 0, (int)(uintptr_t)(&v34), 3);
  g4_std::string::Destroy(&v33);
  g4_std::string::Destroy(&v32);
  return ((g4_std::string::Destroy(&v34)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_842BB0_ea842bb0  (binary VA: 0x842bb0)
// Original: sub_842BB0
// ----------------------------------------------------------------------------
int sub_842BB0_ea842bb0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  uint32_t *v3;
  typedef uint32_t *_g4_t_v5;
  typedef void *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef void *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[20];
  typedef uint32_t *_g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31[4];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v6)) > _g4_s1 ? (0u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v7)) > _g4_s2 ? (0u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v8)) > _g4_s3 ? (0u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v9)) > _g4_s4 ? (0u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v10)) > _g4_s5 ? (0u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (17u + sizeof(_g4_t_v11)) > _g4_s6 ? (17u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v12)) > _g4_s7 ? (20u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v13)) > _g4_s8 ? (24u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v14)) > _g4_s9 ? (28u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v15)) > _g4_s10 ? (48u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v16)) > _g4_s11 ? (64u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v17)) > _g4_s12 ? (68u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v18)) > _g4_s13 ? (72u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v19)) > _g4_s14 ? (76u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v20)) > _g4_s15 ? (80u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v21)) > _g4_s16 ? (84u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v22)) > _g4_s17 ? (88u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v23)) > _g4_s18 ? (92u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v24)) > _g4_s19 ? (96u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (100u + sizeof(_g4_t_v25)) > _g4_s20 ? (100u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v26)) > _g4_s21 ? (104u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v27)) > _g4_s22 ? (108u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v28)) > _g4_s23 ? (112u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v29)) > _g4_s24 ? (116u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v30)) > _g4_s25 ? (120u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v31)) > _g4_s26 ? (124u + sizeof(_g4_t_v31)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 0u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 17u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 76u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 80u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 84u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 88u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 92u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 96u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 100u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 104u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 108u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 112u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 116u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 120u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 124u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 4, 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Set Preanimated Cam", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetDisplayName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Cinematics", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::SetCategoryName(a1, &v18);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Play", (int)(uintptr_t)(v14));
  grapher::ActorBase::AddPin(a1, 0, &v28, 1, -1);
  g4_std::string::Destroy(&v28);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Pause", (int)(uintptr_t)(&v14[1]));
  grapher::ActorBase::AddPin(a1, 1, &v29, 1, -1);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Out", (int)(uintptr_t)(&v14[2]));
  grapher::ActorBase::AddPin(a1, 2, &v30, 0, -1);
  g4_std::string::Destroy(&v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v31), "Completed", (int)(uintptr_t)(&v14[3]));
  grapher::ActorBase::AddPin(a1, 3, v31, 0, -1);
  g4_std::string::Destroy(v31);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Bdae in which to get the camera.", (int)(uintptr_t)(&v12) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "File", (int)(uintptr_t)(&v11) + 2);
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v5 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v14[4] = (uint32_t)(uintptr_t)(v5);
  v6 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v6, &v19, 4, &v14[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "File", (int)(uintptr_t)(&v12));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v20), v6, 1, 1, (int)(uintptr_t)(&v21), 3);
  g4_std::string::Destroy(&v20);
  if ( *(uint32_t *)&v14[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v14[4] + 44))(*(uint32_t *)&v14[4]);
  g4_std::string::Destroy(&v19);
  g4_std::string::Destroy(&v21);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "The marker to align the camera on.", (int)(uintptr_t)(&v13));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Marker", (int)(uintptr_t)(&v12) + 2);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v7 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v7;
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v22, 9, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "Marker", (int)(uintptr_t)(&v12) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v23), v8, 1, 1, (int)(uintptr_t)(&v24), 3);
  g4_std::string::Destroy(&v23);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v22);
  g4_std::string::Destroy(&v24);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "The clip to play in the camera animation.", (int)(uintptr_t)(&v13) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Clip", (int)(uintptr_t)(&v13) + 1);
  v3 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v3 = (uint32_t)(uintptr_t)(&off_205C408);
  v3[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v9 = v3;
  grapher::HolderT_string_e830be::From(v3, &unk_20D67EC);
  v16 = v9;
  v10 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v10, &v25, 4, &v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "Clip", (int)(uintptr_t)(&v13) + 2);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v26), v10, 1, 1, (int)(uintptr_t)(&v27), 3);
  g4_std::string::Destroy(&v26);
  if ( v16 != nullptr )
    G4_VCALL<void>(v16, 44);
  g4_std::string::Destroy(&v25);
  return ((g4_std::string::Destroy(&v27)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_8431B0_ea8431b0  (binary VA: 0x8431b0)
// Original: sub_8431B0
// ----------------------------------------------------------------------------
int sub_8431B0_ea8431b0(grapher::ActorBase::Self *a1)
{
  uint32_t *v1;
  uint32_t *v2;
  typedef uint32_t *_g4_t_v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef void *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[20];
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32[4];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v5)) > _g4_s1 ? (4u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v6)) > _g4_s2 ? (4u + sizeof(_g4_t_v6)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v7)) > _g4_s3 ? (4u + sizeof(_g4_t_v7)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v8)) > _g4_s4 ? (4u + sizeof(_g4_t_v8)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v9)) > _g4_s5 ? (12u + sizeof(_g4_t_v9)) : _g4_s5,
    _g4_s7 = (31u + sizeof(_g4_t_v10)) > _g4_s6 ? (31u + sizeof(_g4_t_v10)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v11)) > _g4_s7 ? (32u + sizeof(_g4_t_v11)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v12)) > _g4_s8 ? (36u + sizeof(_g4_t_v12)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v13)) > _g4_s9 ? (40u + sizeof(_g4_t_v13)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v14)) > _g4_s10 ? (44u + sizeof(_g4_t_v14)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v15)) > _g4_s11 ? (64u + sizeof(_g4_t_v15)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v16)) > _g4_s12 ? (76u + sizeof(_g4_t_v16)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v17)) > _g4_s13 ? (80u + sizeof(_g4_t_v17)) : _g4_s13,
    _g4_s15 = (84u + sizeof(_g4_t_v18)) > _g4_s14 ? (84u + sizeof(_g4_t_v18)) : _g4_s14,
    _g4_s16 = (88u + sizeof(_g4_t_v19)) > _g4_s15 ? (88u + sizeof(_g4_t_v19)) : _g4_s15,
    _g4_s17 = (92u + sizeof(_g4_t_v20)) > _g4_s16 ? (92u + sizeof(_g4_t_v20)) : _g4_s16,
    _g4_s18 = (96u + sizeof(_g4_t_v21)) > _g4_s17 ? (96u + sizeof(_g4_t_v21)) : _g4_s17,
    _g4_s19 = (100u + sizeof(_g4_t_v22)) > _g4_s18 ? (100u + sizeof(_g4_t_v22)) : _g4_s18,
    _g4_s20 = (104u + sizeof(_g4_t_v23)) > _g4_s19 ? (104u + sizeof(_g4_t_v23)) : _g4_s19,
    _g4_s21 = (108u + sizeof(_g4_t_v24)) > _g4_s20 ? (108u + sizeof(_g4_t_v24)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v25)) > _g4_s21 ? (112u + sizeof(_g4_t_v25)) : _g4_s21,
    _g4_s23 = (116u + sizeof(_g4_t_v26)) > _g4_s22 ? (116u + sizeof(_g4_t_v26)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v27)) > _g4_s23 ? (120u + sizeof(_g4_t_v27)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v28)) > _g4_s24 ? (124u + sizeof(_g4_t_v28)) : _g4_s24,
    _g4_s26 = (128u + sizeof(_g4_t_v29)) > _g4_s25 ? (128u + sizeof(_g4_t_v29)) : _g4_s25,
    _g4_s27 = (132u + sizeof(_g4_t_v30)) > _g4_s26 ? (132u + sizeof(_g4_t_v30)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v31)) > _g4_s27 ? (136u + sizeof(_g4_t_v31)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v32)) > _g4_s28 ? (140u + sizeof(_g4_t_v32)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 31u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 76u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 80u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 84u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 88u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 92u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 96u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 100u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 104u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 108u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 112u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 116u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 120u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 124u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 128u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 132u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 136u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 140u);

  sub_84C720(a1);
  grapher::ActorBase::SetArraySize(a1, 3, 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), "Set Action Zone", (int)(uintptr_t)(&v10));
  grapher::ActorBase::SetDisplayName(a1, &v16);
  g4_std::string::Destroy(&v16);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "Characters", (int)(uintptr_t)(&v11));
  grapher::ActorBase::SetCategoryName(a1, &v17);
  g4_std::string::Destroy(&v17);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "Set", (int)(uintptr_t)(&v11) + 1);
  grapher::ActorBase::AddPin(a1, 0, &v18, 1, -1);
  g4_std::string::Destroy(&v18);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "Clear", (int)(uintptr_t)(&v11) + 2);
  grapher::ActorBase::AddPin(a1, 1, &v19, 1, -1);
  g4_std::string::Destroy(&v19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "Out", (int)(uintptr_t)(&v11) + 3);
  grapher::ActorBase::AddPin(a1, 2, &v20, 0, -1);
  g4_std::string::Destroy(&v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "List of objects that must stay in the zone.", (int)(uintptr_t)(&v12) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "Target", (int)(uintptr_t)(&v12));
  v1 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v1 = (uint32_t)(uintptr_t)(&off_205C408);
  v1[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v4 = v1;
  grapher::HolderT_string_e830be::From(v1, &unk_20D67EC);
  *(uint32_t *)&v14[4] = (uint32_t)(uintptr_t)(v4);
  v5 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v5, &v21, 9, &v14[4]);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "Target", (int)(uintptr_t)(&v12) + 1);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 0, (int)(uintptr_t)(&v22), v5, 1, 1, (int)(uintptr_t)(&v23), 3);
  g4_std::string::Destroy(&v22);
  if ( *(uint32_t *)&v14[4] != 0 )
    (*(void (**)(uint32_t))(**(uint32_t **)&v14[4] + 44))(*(uint32_t *)&v14[4]);
  g4_std::string::Destroy(&v21);
  g4_std::string::Destroy(&v23);
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v26),
    "TriggerZone where to stay (If it's a LevelObject other than Target, then will stay in Radius around Zone).",
    (int)(uintptr_t)(&v13) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "Zone", (int)(uintptr_t)(&v12) + 3);
  v2 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
  *v2 = (uint32_t)(uintptr_t)(&off_205C408);
  v2[1] = (uint32_t)(uintptr_t)(&dword_213B814);
  v6 = v2;
  grapher::HolderT_string_e830be::From(v2, &unk_20D67EC);
  v15 = v6;
  v7 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v7, &v24, 9, &v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "Zone", (int)(uintptr_t)(&v13));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 1, (int)(uintptr_t)(&v25), v7, 1, 1, (int)(uintptr_t)(&v26), 3);
  g4_std::string::Destroy(&v25);
  if ( v15 != nullptr )
    G4_VCALL<void>(v15, 44);
  g4_std::string::Destroy(&v24);
  g4_std::string::Destroy(&v26);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), "Zone radius (if Zone is not a TriggerZone).", (int)(uintptr_t)(v14));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "Radius", (int)(uintptr_t)(&v13) + 2);
  v9 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v9, &v27, 1, 0);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), "Radius", (int)(uintptr_t)(&v13) + 3);
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 2, (int)(uintptr_t)(&v28), v9, 1, 1, (int)(uintptr_t)(&v29), 3);
  g4_std::string::Destroy(&v28);
  g4_std::string::Destroy(&v27);
  g4_std::string::Destroy(&v29);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v32), "Center radius.", (int)(uintptr_t)(&v14[3]));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "Radius", (int)(uintptr_t)(&v14[1]));
  v8 = (void *)sub_4EBBF0(0x10u, 1);
  grapher::ActorVariable::Construct(v8, &v30, 1, 100);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "Inner radius", (int)(uintptr_t)(&v14[2]));
  grapher::ActorBase::AddProperty((int)(uintptr_t)(a1), 3, (int)(uintptr_t)(&v31), v8, 1, 0, (int)(uintptr_t)(v32), 3);
  g4_std::string::Destroy(&v31);
  g4_std::string::Destroy(&v30);
  return ((g4_std::string::Destroy(v32)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_843810_ea843810  (binary VA: 0x843810)
// Original: sub_843810
// ----------------------------------------------------------------------------
int sub_843810_ea843810()
{
  int *v0;

  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v0 = nullptr;
  if ( byte_20D5248 == 0 )
    v0 = (int *)(&dword_20D5240);
  return sub_9767D0(v0) ^ 1;
}

// ----------------------------------------------------------------------------
// Function: sub_8438B0_ea8438b0  (binary VA: 0x8438b0)
// Original: sub_8438B0
// ----------------------------------------------------------------------------
int * sub_8438B0_ea8438b0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *result;

  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  result = nullptr;
  if ( byte_20D5248 == 0 )
    result = (int *)(&dword_20D5240);
  if ( result[4] == 0 )
  {
    G4_VCALL<void>(a1, 28, a3);
    return (int *)grapher::ActorBase::FireEvent(a1, 1, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_843990_ea843990  (binary VA: 0x843990)
// Original: sub_843990
// ----------------------------------------------------------------------------
int sub_843990_ea843990(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int *v2;

  grapher::ActorBase::Cancel(a1, a2);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D5248 == 0 )
    v2 = (int *)(&dword_20D5240);
  return sub_976820(v2, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_843A60_ea843a60  (binary VA: 0x843a60)
// Original: sub_843A60
// ----------------------------------------------------------------------------
int sub_843A60_ea843a60(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  int *v4;
  int *v5;
  int *v6;
  int *v7;
  int *v8;

  result = *((uint32_t *)a1 + 13);
  if ( *(uint32_t *)(result + 8) == 0 )
  {
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v4 = nullptr;
    if ( byte_20D5248 == 0 )
      v4 = (int *)(&dword_20D5240);
    if ( (uint8_t)sub_9767E0(v4) == 0 && byte_20D186E == 0 )
    {
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v5 = nullptr;
      if ( byte_20D49A8 == 0 )
        v5 = (int *)(&dword_20D49A0);
      if ( (uint8_t)sub_82AAD0((int)(uintptr_t)(v5)) == 0 )
      {
        if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v6 = nullptr;
        if ( byte_20D49A8 == 0 )
          v6 = (int *)(&dword_20D49A0);
        sub_82D430((int)(uintptr_t)(v6), 0);
        if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v7 = nullptr;
        if ( byte_20D49A8 == 0 )
          v7 = (int *)(&dword_20D49A0);
        sub_82A420((int)(uintptr_t)(v7), 1, 1);
        if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
        {
          sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
          __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
        }
        v8 = nullptr;
        if ( byte_20D49A8 == 0 )
          v8 = (int *)(&dword_20D49A0);
        sub_82AAC0((int)(uintptr_t)(v8));
      }
    }
    grapher::ActorBase::FireEvent(a1, 2, a3);
    return G4_VCALL<int>(a1, 28, a3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_843D70_ea843d70  (binary VA: 0x843d70)
// Original: sub_843D70
// ----------------------------------------------------------------------------
int sub_843D70_ea843d70(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int *v2;
  vox::EmitterHandle::Self *v3;
  void *obj;

  grapher::ActorBase::Cancel(a1, a2);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D5248 == 0 )
    v2 = (int *)(&dword_20D5240);
  v3 = (vox::EmitterHandle::Self *)sub_977870(v2, obj);
  return ((sub_99BC10(v3)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_843E30_ea843e30  (binary VA: 0x843e30)
// Original: sub_843E30
// ----------------------------------------------------------------------------
int sub_843E30_ea843e30(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int result;
  void *obj;

  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D5248 == 0 )
    v3 = (int *)(&dword_20D5240);
  result = sub_977870(v3, obj);
  if ( *(uint8_t *)(result + 74) != 0 )
  {
    G4_VCALL<void>(a1, 28, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_843F10_ea843f10  (binary VA: 0x843f10)
// Original: sub_843F10
// ----------------------------------------------------------------------------
int sub_843F10_ea843f10(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  char v2;
  char v3;
  int *v4;
  int *v5;
  int *v7;

  grapher::ActorBase::Cancel(a1, a2);
  v2 = byte_20D5220;
  if ( byte_20D5220 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v2 = byte_20D5220;
  }
  v3 = byte_20D5248;
  v4 = nullptr;
  if ( byte_20D5248 == 0 )
    v4 = (int *)(&dword_20D5240);
  if ( *((uint8_t *)v4 + 208) == 0 )
  {
    if ( v2 != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
  if ( v2 == 0 )
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v3 = byte_20D5248;
  }
  v7 = nullptr;
  if ( v3 == 0 )
    v7 = (int *)(&dword_20D5240);
  sub_99B750(v7);
  if ( byte_20D5220 == 0 )
  {
LABEL_13:
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
  }
LABEL_6:
  v5 = nullptr;
  if ( byte_20D5248 == 0 )
    v5 = (int *)(&dword_20D5240);
  return sub_976840(v5, 0, 0);
}

// ----------------------------------------------------------------------------
// Function: sub_8440D0_ea8440d0  (binary VA: 0x8440d0)
// Original: sub_8440D0
// ----------------------------------------------------------------------------
int sub_8440D0_ea8440d0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  char v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  bool v12;
  int *v13;
  int *v14;
  int *v16;

  G4_VCALL<void>(a1, 28, a3);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v4 = byte_20D5248;
  v5 = nullptr;
  if ( byte_20D5248 == 0 )
    v5 = (int *)(&dword_20D5240);
  if ( v5[4] == 2 )
  {
    if ( byte_20D5220 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
      {
        sub_976230(&dword_20D5240);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
        __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      }
      v4 = byte_20D5248;
    }
    v16 = nullptr;
    if ( v4 == 0 )
      v16 = (int *)(&dword_20D5240);
    sub_9F3AA0(v16, 3, 0);
  }
  v6 = sub_8F0680(v3);
  G4_VCALL<void>(v6, 120, 136, 0);
  *(uint8_t *)(sub_8F0680(v7) + 2896) = 0;
  v9 = sub_8F0680(v8);
  sub_8F3630(v9);
  v11 = sub_8F0680(v10);
  v12 = byte_20D4A50 == 0;
  *(uint8_t *)(v11 + 190) = 0;
  if ( v12 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
  {
    sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
    __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
  }
  v13 = nullptr;
  if ( byte_20D4A64 == 0 )
    v13 = (int *)(&dword_20D4A60);
  sub_5B4A20((int)(uintptr_t)(v13), 0, (int (*)(int))sub_83A000, (int (*)(int))sub_839F50);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
  {
    sub_ADB4E0(&dword_20D4AC0);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
    __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
  }
  v14 = nullptr;
  if ( byte_20D4AC4 == 0 )
    v14 = (int *)(&dword_20D4AC0);
  return sub_AB55E0((int)(uintptr_t)(v14), 1u);
}

// ----------------------------------------------------------------------------
// Function: sub_8443E0  (binary VA: 0x8443e0)
// Original: sub_8443E0
// ----------------------------------------------------------------------------
int * sub_8443E0(uint32_t *a1)
{
  uint32_t *v1;
  volatile int32_t *v2;

  if ( a1 != nullptr )
    __sync_add_and_fetch((uint32_t *)((char *)a1 + *(uint32_t *)(*a1 - 16) + 4), 1u);
  v1 = (uint32_t *)dword_20D6780;
  dword_20D6780 = (int)(uintptr_t)(a1);
  if ( v1 != nullptr )
  {
    v2 = (volatile int32_t *)((uint32_t *)((char *)v1 + *(uint32_t *)(*v1 - 16)));
    if ( __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v2, 8);
      G4_VCALL<void>(v2, 4);
    }
  }
  return (int *)(&dword_20D6780);
}

// ----------------------------------------------------------------------------
// Function: sub_844460  (binary VA: 0x844460)
// Original: sub_844460
// ----------------------------------------------------------------------------
int sub_844460()
{
  void *v0;
  int *v1;
  void *v2;
  uint32_t *v3;
  volatile int32_t *v4;
  int result;
  uint32_t *v6;
  volatile int32_t *v7;

  if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
  {
    sub_9C9CC0(&unk_20D4E60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
    __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
  }
  v0 = nullptr;
  if ( byte_20D4E64 == 0 )
    v0 = &unk_20D4E60;
  sub_9CE370(v0, 0);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D5248 == 0 )
    v1 = (int *)(&dword_20D5240);
  sub_9CD080((int)(uintptr_t)(v1), nullptr);
  if ( byte_20D4E40 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
  {
    sub_9C9CC0(&unk_20D4E60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
    __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
  }
  v2 = nullptr;
  if ( byte_20D4E64 == 0 )
    v2 = &unk_20D4E60;
  sub_974D70((int)(uintptr_t)(v2), nullptr);
  v3 = (uint32_t *)dword_20D6780;
  dword_20D6780 = 0;
  if ( v3 != nullptr )
  {
    v4 = (volatile int32_t *)((uint32_t *)((char *)v3 + *(uint32_t *)(*v3 - 16)));
    if ( __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v4, 8);
      G4_VCALL<void>(v4, 4);
    }
  }
  result = G4_VCALL<int>(dword_20D6790, 132);
  v6 = (uint32_t *)dword_20D6790;
  dword_20D6790 = 0;
  if ( v6 != nullptr )
  {
    v7 = (volatile int32_t *)((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 16)));
    result = __sync_fetch_and_add(v7 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      G4_VCALL<void>(v7, 8);
      return G4_VCALL<int>(v7, 4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_844690_ea844690  (binary VA: 0x844690)
// Original: sub_844690
// ----------------------------------------------------------------------------
int sub_844690_ea844690(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  int result;

  grapher::ActorBase::Cancel(a1, a2);
  result = dword_20D6790;
  if ( dword_20D6790 != 0 )
    return sub_844460();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_8446D0  (binary VA: 0x8446d0)
// Original: sub_8446D0
// ----------------------------------------------------------------------------
int * sub_8446D0(int *result, uint32_t *a2, int a3, int *a4)
{
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef char _g4_t_v15;
  typedef char _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v18)) > _g4_s3 ? (8u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v19)) > _g4_s4 ? (12u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v20)) > _g4_s5 ? (12u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v21)) > _g4_s6 ? (12u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v22)) > _g4_s7 ? (16u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v23)) > _g4_s8 ? (20u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v24)) > _g4_s9 ? (20u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v25)) > _g4_s10 ? (20u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (20u + sizeof(_g4_t_v26)) > _g4_s11 ? (20u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v27)) > _g4_s12 ? (24u + sizeof(_g4_t_v27)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);

  v22 = result;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 )
      goto LABEL_19;
    v10 = a2[4];
    v26 = v10;
    if ( *(uint32_t *)(v10 + 16) >= (unsigned int)*a4 )
      goto LABEL_19;
    v15 = v10 == a3;
    v11 = opNew(0x18u);
    if ( v11 != -16 )
    {
      v12 = *a4;
      *(uint32_t *)(v11 + 20) = a4[1];
      *(uint32_t *)(v11 + 16) = v12;
    }
    v21 = v11;
    sub_1904970(v15, v11, v26, a3);
    ++a2[5];
    *v22 = v21;
    return v22;
  }
  else
  {
    if ( (unsigned int)*a4 < *(uint32_t *)(a3 + 16) )
    {
      if ( a3 == a2[3] )
      {
        sub_8393B0(result, (int)(uintptr_t)(a2), a3, a3, a4);
        return v22;
      }
      v19 = *a4;
      v17 = a2 + 1;
      v5 = (uint32_t *)sub_1904940(a3);
      v23 = v5;
      if ( v19 > v5[4] )
      {
        if ( v5[3] != 0 )
        {
          v6 = opNew(0x18u);
          v24 = v6;
          if ( v6 != -16 )
          {
            v7 = a4[1];
            *(uint32_t *)(v6 + 16) = *a4;
            *(uint32_t *)(v6 + 20) = v7;
          }
          sub_1904970(1, v6, a3, v17);
          ++a2[5];
          *v22 = v24;
          return v22;
        }
        else
        {
          v16 = v17 == v5;
          v13 = opNew(0x18u);
          if ( v13 != -16 )
          {
            v14 = *a4;
            *(uint32_t *)(v13 + 20) = a4[1];
            *(uint32_t *)(v13 + 16) = v14;
          }
          sub_1904970(v16, v13, v23, v17);
          ++a2[5];
          *v22 = v13;
          return v22;
        }
      }
LABEL_19:
      sub_83AC10((int)(uintptr_t)(v27), a2, a4);
      *v22 = v27[0];
      return v22;
    }
    if ( (unsigned int)*a4 <= *(uint32_t *)(a3 + 16) )
    {
      *result = a3;
      return result;
    }
    if ( a3 == a2[4] )
      goto LABEL_27;
    v20 = *a4;
    v18 = a2 + 1;
    v25 = sub_19048E0(a3);
    if ( v20 >= *(uint32_t *)(v25 + 16) )
      goto LABEL_19;
    if ( *(uint32_t *)(a3 + 12) == 0 )
    {
LABEL_27:
      sub_8393B0(v22, (int)(uintptr_t)(a2), 0, a3, a4);
      return v22;
    }
    v8 = opNew(0x18u);
    if ( v8 != -16 )
    {
      v9 = *a4;
      *(uint32_t *)(v8 + 20) = a4[1];
      *(uint32_t *)(v8 + 16) = v9;
    }
    sub_1904970(1, v8, v25, v18);
    ++a2[5];
    *v22 = v8;
    return v22;
  }
}



// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterShoot::ActorGameCharacterShoot(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSnapToTarget::ActorGameCharacterSnapToTarget(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterState::ActorGameCharacterState(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: sub_844A80  (binary VA: 0x844a80)
// Original: sub_844A80
// ----------------------------------------------------------------------------
int sub_844A80(int a1, int a2)
{
  int v2;
  int *v3;
  int *v4;
  int result;
  uint32_t *src;
  unsigned int v7;
  int v8;
  uint32_t *v9;
  int v10;
  unsigned int v11;
  uint32_t *v12;
  int v13;
  unsigned int v14;
  void *dest;
  void *v16;
  uint32_t *v17;

  v3 = (int *)dword_20D67A0;
  if ( (int *)dword_20D67A0 == (int *)(uintptr_t)(&dword_20D67A0) )
  {
LABEL_7:
    v4 = sub_839D60(v2, a2);
    result = (int)(uintptr_t)(v4 + 1);
    if ( (int *)(a2 + 464) == v4 + 1 )
      goto LABEL_6;
    goto LABEL_8;
  }
  while ( a2 != v3[2] )
  {
    v3 = (int *)*v3;
    if ( v3 == (int *)(uintptr_t)(&dword_20D67A0) )
      goto LABEL_7;
  }
  v4 = v3 + 2;
  result = (int)(uintptr_t)(v4 + 1);
  if ( (int *)(a2 + 464) != v4 + 1 )
  {
LABEL_8:
    src = *(uint32_t **)(a2 + 464);
    dest = (void *)v4[1];
    v17 = *(uint32_t **)(a2 + 468);
    v7 = v17 - src;
    v14 = v7;
    if ( v7 <= (v4[3] - (int)(uintptr_t)(dest)) >> 2 )
    {
      result = v4[2];
      v11 = (result - (int)(uintptr_t)(dest)) >> 2;
      if ( v7 > v11 )
      {
        v12 = &src[v11];
        if ( v11 != 0 )
        {
          memmove(dest, src, 4 * v11);
          result = v4[2];
          v17 = *(uint32_t **)(a2 + 468);
          dest = (void *)v4[1];
          v12 = (uint32_t *)(*(uint32_t *)(a2 + 464) + ((result - (uint32_t)(uintptr_t)(dest)) & 0xFFFFFFFC));
        }
        if ( v17 == v12 )
        {
          result = (int)(uintptr_t)(dest);
          v10 = (int)(uintptr_t)(dest) + 4 * v14;
        }
        else
        {
          do
          {
            if ( result != 0 )
              *(uint32_t *)result = *v12;
            ++v12;
            result += 4;
          }
          while ( v12 != v17 );
          v10 = v4[1] + 4 * v14;
        }
      }
      else
      {
        result = v17 - src;
        v10 = v4[1];
        if ( v7 != 0 )
        {
          result = (int)(uintptr_t)(memmove(dest, src, 4 * v7));
          v10 = 4 * v14 + v4[1];
        }
      }
    }
    else
    {
      v8 = 0;
      v16 = nullptr;
      if ( v7 != 0 )
      {
        v16 = (void *)(4 * v7);
        v8 = sub_4EB830(4 * v7);
      }
      if ( src != v17 )
      {
        v9 = (uint32_t *)v8;
        do
        {
          if ( v9 != nullptr )
            *v9 = *src;
          ++src;
          ++v9;
        }
        while ( v17 != src );
      }
      result = v4[1];
      if ( result != 0 )
      {
        v13 = v8;
        result = sub_4EB870(result);
        v8 = v13;
      }
      v4[1] = v8;
      v10 = (int)(uintptr_t)(v16) + v8;
      v4[3] = v10;
    }
    v4[2] = v10;
  }
LABEL_6:
  v4[4] = *(uint32_t *)(a2 + 652);
  v4[5] = *(uint32_t *)(a2 + 656);
  v4[6] = *(uint32_t *)(a2 + 660);
  v4[7] = *(uint32_t *)(a2 + 664);
  v4[8] = *(uint32_t *)(a2 + 668);
  v4[9] = *(uint32_t *)(a2 + 672);
  v4[10] = *(uint32_t *)(a2 + 676);
  v4[11] = *(uint32_t *)(a2 + 680);
  v4[12] = *(uint32_t *)(a2 + 684);
  v4[13] = *(uint32_t *)(a2 + 688);
  *((uint8_t *)v4 + 56) = *(uint8_t *)(a2 + 692);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_844CE0  (binary VA: 0x844ce0)
// Original: sub_844CE0
// ----------------------------------------------------------------------------
int sub_844CE0(int a1, uint32_t *a2)
{
  int v2;
  int *v3;
  int *v4;
  int result;
  uint32_t *src;
  unsigned int v7;
  int v8;
  uint32_t *v9;
  int v10;
  int v11;
  char *v12;
  unsigned int v13;
  uint32_t *v14;
  int v15;
  unsigned int v16;
  uint8_t *dest;
  void *v18;
  uint32_t *v19;

  v3 = (int *)dword_20D67A0;
  if ( (int *)dword_20D67A0 == (int *)(uintptr_t)(&dword_20D67A0) )
  {
LABEL_9:
    v4 = sub_839D60(v2, (int)(uintptr_t)(a2));
    if ( v4 + 1 == (int *)(uintptr_t)(a2 + 116) )
      goto LABEL_6;
    goto LABEL_10;
  }
  while ( a2 != (uint32_t *)v3[2] )
  {
    v3 = (int *)*v3;
    if ( v3 == (int *)(uintptr_t)(&dword_20D67A0) )
      goto LABEL_9;
  }
  v4 = v3 + 2;
  if ( v4 + 1 != (int *)(uintptr_t)(a2 + 116) )
  {
LABEL_10:
    src = (uint32_t *)v4[1];
    dest = (uint8_t *)a2[116];
    v19 = (uint32_t *)v4[2];
    v7 = v19 - src;
    v16 = v7;
    if ( v7 <= (a2[118] - (int)(uintptr_t)(dest)) >> 2 )
    {
      v12 = (char *)a2[117];
      v13 = (v12 - (char *)(dest)) >> 2;
      if ( v7 > v13 )
      {
        v14 = &src[v13];
        if ( v13 != 0 )
        {
          memmove(dest, src, 4 * v13);
          v12 = (char *)a2[117];
          v19 = (uint32_t *)v4[2];
          dest = (uint8_t *)a2[116];
          v14 = (uint32_t *)(v4[1] + ((v12 - (char *)(dest)) & 0xFFFFFFFC));
        }
        if ( v19 == v14 )
        {
          v11 = (int)(uintptr_t)(&dest[4 * v16]);
        }
        else
        {
          do
          {
            if ( v12 != nullptr )
              *(uint32_t *)v12 = *v14;
            ++v14;
            v12 += 4;
          }
          while ( v14 != v19 );
          v11 = a2[116] + 4 * v16;
        }
      }
      else
      {
        v11 = a2[116];
        if ( v7 != 0 )
        {
          memmove(dest, src, 4 * v7);
          v11 = 4 * v16 + a2[116];
        }
      }
    }
    else
    {
      v8 = 0;
      v18 = nullptr;
      if ( v7 != 0 )
      {
        v18 = (void *)(4 * v7);
        v8 = sub_4EB830(4 * v7);
      }
      if ( src != v19 )
      {
        v9 = (uint32_t *)v8;
        do
        {
          if ( v9 != nullptr )
            *v9 = *src;
          ++src;
          ++v9;
        }
        while ( v19 != src );
      }
      v10 = a2[116];
      if ( v10 != 0 )
      {
        v15 = v8;
        sub_4EB870(v10);
        v8 = v15;
      }
      a2[116] = v8;
      v11 = (int)(uintptr_t)(v18) + v8;
      a2[118] = v11;
    }
    a2[117] = v11;
  }
LABEL_6:
  result = v4[10];
  if ( result >= 0 )
    return sub_9D4450(a2, result, v4[9], v4[13], v4[12], 0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_844F20_ea844f20  (binary VA: 0x844f20)
// Original: sub_844F20
// ----------------------------------------------------------------------------
int sub_844F20_ea844f20(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *v3;
  uint32_t *v4;
  int *v5;

  v3 = (uint32_t *)sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != nullptr )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        if ( a2 != 0 )
        {
          if ( a2 == 1 )
            sub_844CE0((int)(uintptr_t)(a1), v4);
        }
        else
        {
          sub_844A80((int)(uintptr_t)(a1), (int)(uintptr_t)(v4));
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_844FF0  (binary VA: 0x844ff0)
// Original: sub_844FF0
// ----------------------------------------------------------------------------
int * sub_844FF0(int a1, int a2)
{
  int *v2;

  v2 = (int *)dword_20D67A0;
  if ( (int *)dword_20D67A0 == (int *)(uintptr_t)(&dword_20D67A0) )
    return sub_839D60((int)(uintptr_t)(v2), a2);
  while ( v2[2] != a2 )
  {
    v2 = (int *)*v2;
    if ( v2 == (int *)(uintptr_t)(&dword_20D67A0) )
      return sub_839D60((int)(uintptr_t)(v2), a2);
  }
  return v2 + 2;
}



// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterSteerTowardDeepWater::ActorGameCharacterSteerTowardDeepWater(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterStopForObject::ActorGameCharacterStopForObject(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterThrownOutVehicle::ActorGameCharacterThrownOutVehicle(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterThrowOutOfVehicle::ActorGameCharacterThrowOutOfVehicle(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterToggleAggro::ActorGameCharacterToggleAggro(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: sub_845180  (binary VA: 0x845180)
// Original: sub_845180
// ----------------------------------------------------------------------------
int sub_845180(int a1, int a2)
{
  return sub_983620(a2, 0, 0);
}



// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterToggleFight::ActorGameCharacterToggleFight(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterToggleFlee::ActorGameCharacterToggleFlee(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterToggleRubberBanding::ActorGameCharacterToggleRubberBanding(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterToggleScripted::ActorGameCharacterToggleScripted(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterToggleUseCover::ActorGameCharacterToggleUseCover(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterTurnToward::ActorGameCharacterTurnToward(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterUseCover::ActorGameCharacterUseCover(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterVehicleDoor::ActorGameCharacterVehicleDoor(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCharacterWantedLevel::ActorGameCharacterWantedLevel(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameSetActionZone::ActorGameSetActionZone(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCinematicDialog::ActorGameCinematicDialog(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCinematicFadeIn::ActorGameCinematicFadeIn(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCinematicFadeOut::ActorGameCinematicFadeOut(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCinematicPlay::ActorGameCinematicPlay(int, unsigned int))
// ----------------------------------------------------------------------------
// Function: sub_845570  (binary VA: 0x845570)
// Original: sub_845570
// ----------------------------------------------------------------------------
int sub_845570(int a1)
{
  int *v1;
  int result;

  if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
  {
    sub_9BA6C0(&dword_20D5DA8);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
    __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
  }
  v1 = nullptr;
  if ( byte_20D5DAC == 0 )
    v1 = (int *)(&dword_20D5DA8);
  result = sub_99C000(v1, 8);
  *(uint32_t *)(a1 + 56) = result;
  if ( result != 0 )
    result = sub_99B4D0(result, 2);
  *(uint8_t *)(a1 + 53) = 1;
  return result;
}



// [Deduplicated: canonical definition in Actors module] (ActorGameCinematicSetCam::ActorGameCinematicSetCam(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCinematicSetPreanimatedCam::ActorGameCinematicSetPreanimatedCam(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: sub_8456D0  (binary VA: 0x8456d0)
// Original: sub_8456D0
// ----------------------------------------------------------------------------
int sub_8456D0()
{
  int result;

  result = dword_20D6790;
  if ( dword_20D6790 != 0 )
    return sub_844460();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_845700  (binary VA: 0x845700)
// Original: sub_845700
// ----------------------------------------------------------------------------
int sub_845700(const char **a1, int a2)
{
  int v2;
  char v3;
  unsigned int v4;
  int v5;
  uint32_t *v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  void *v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  volatile int32_t *v14;
  volatile int32_t *v15;
  int v16;
  uint32_t **Animators;
  uint32_t *v18;
  int v19;
  int v21;
  int v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25;
  typedef void *_g4_t_objb;
  typedef volatile int32_t *_g4_t_obj;
  typedef volatile int32_t *_g4_t_obja;
  typedef g4_cxa_guard_t *_g4_t_v29;
  typedef g4_cxa_guard_t *_g4_t_v30;
  typedef uint32_t *_g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef uint8_t _g4_t_v34[12];
  typedef uint32_t _g4_t_v35[11];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v23)) > _g4_s0 ? (0u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v25)) > _g4_s2 ? (16u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_objb)) > _g4_s3 ? (20u + sizeof(_g4_t_objb)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_obj)) > _g4_s4 ? (20u + sizeof(_g4_t_obj)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_obja)) > _g4_s5 ? (20u + sizeof(_g4_t_obja)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v29)) > _g4_s6 ? (24u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v30)) > _g4_s7 ? (24u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v31)) > _g4_s8 ? (28u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v32)) > _g4_s9 ? (44u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v33)) > _g4_s10 ? (56u + sizeof(_g4_t_v33)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v34)) > _g4_s11 ? (60u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v35)) > _g4_s12 ? (72u + sizeof(_g4_t_v35)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_objb &objb = *reinterpret_cast<_g4_t_objb *>(_g4_sf + 20u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 20u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);

  v35[7] = (uint32_t)(uintptr_t)(&a1);
  v2 = a2;
  glitch::collada::CColladaDatabase::Construct((glitch::collada::CColladaDatabase::Self *)v35, *a1, nullptr);
  v3 = 0;
  if ( v35[0] != 0 && v2 != 0 )
  {
    v4 = sub_B97E20(v35[0]);
    glitch::collada::CColladaDatabase::constructScene(
      (glitch::collada::CColladaDatabase::Self *)&v31,
      (glitch::video::IVideoDriver::Self *)v35,
      v4);
    v5 = (int)(uintptr_t)(v31);
    if ( v31 != nullptr )
      __sync_add_and_fetch((uint32_t *)((char *)v31 + *(uint32_t *)(*v31 - 16) + 4), 1u);
    v6 = (uint32_t *)dword_20D6790;
    dword_20D6790 = v5;
    if ( v6 != nullptr )
    {
      v7 = (volatile int32_t *)((uint32_t *)((char *)v6 + *(uint32_t *)(*v6 - 16)));
      if ( __sync_fetch_and_add(v7 + 1, 0xFFFFFFFF) == 1 )
      {
        obj = v7;
        G4_VCALL<void>(v7, 8);
        G4_VCALL<void>(obj, 4);
      }
    }
    if ( v31 != nullptr )
    {
      v8 = (volatile int32_t *)((uint32_t *)((char *)v31 + *(uint32_t *)(*v31 - 16)));
      if ( __sync_fetch_and_add(v8 + 1, 0xFFFFFFFF) == 1 )
      {
        obja = v8;
        G4_VCALL<void>(v8, 8);
        G4_VCALL<void>(obja, 4);
      }
    }
    v3 = 0;
    if ( dword_20D6790 != 0 )
    {
      if ( byte_20D4D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D70) != 0 )
      {
        sub_5BEF40((int)(uintptr_t)(&unk_20D4D80));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D70);
        __cxa_atexit((void (*)(void *))sub_5BEE10, &unk_20D4D80, &unk_20D1280);
      }
      v9 = nullptr;
      if ( byte_20D4D84 == 0 )
        v9 = &unk_20D4D80;
      v10 = sub_5B9810((int)(uintptr_t)(v9));
      G4_VCALL<void>(v10, 104, &dword_20D6790);
      objb = (void *)dword_20D6790;
      v29 = *(g4_cxa_guard_t **)(*(uint32_t *)dword_20D6790 + 184);
      (*(void (**)(uint8_t *, int))(*(uint32_t *)v2 + 52))(v34, v2);
      ((void (*)(void *))v29)(objb);
      v30 = *(g4_cxa_guard_t **)(*(uint32_t *)dword_20D6790 + 176);
      v24 = dword_20D6790;
      v11 = G4_VCALL<int>(v2, 56);
      ((void (*)(int, int))v30)(v24, v11);
      v23 = dword_20D6790;
      glitch::scene::ISceneNode::getSceneNodeFromType(&v32);
      v12 = (int)(uintptr_t)(v32);
      if ( v32 != nullptr )
        __sync_add_and_fetch((uint32_t *)((char *)v32 + *(uint32_t *)(*v32 - 16) + 4), 1u);
      v13 = (uint32_t *)dword_20D6780;
      dword_20D6780 = v12;
      if ( v13 != nullptr )
      {
        v14 = (volatile int32_t *)((uint32_t *)((char *)v13 + *(uint32_t *)(*v13 - 16)));
        if ( __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v14, 8, v23, 1130717540, 3);
          G4_VCALL<void>(v14, 4);
        }
      }
      if ( v32 != nullptr )
      {
        v15 = (volatile int32_t *)((uint32_t *)((char *)v32 + *(uint32_t *)(*v32 - 16)));
        if ( __sync_fetch_and_add(v15 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v15, 8);
          G4_VCALL<void>(v15, 4);
        }
      }
      v16 = dword_20D6780;
      if ( dword_20D6780 != 0 )
        goto LABEL_24;
      glitch::scene::ISceneNode::getSceneNodeFromType(&v33);
      sub_8443E0(v33);
      if ( v33 != nullptr )
        sub_5459C0((uint32_t *)((char *)v33 + *(uint32_t *)(*v33 - 16)));
      v16 = dword_20D6780;
      if ( dword_20D6780 != 0 )
      {
LABEL_24:
        G4_VCALL<void>(v16, 336, 1101004800);
        Animators = (uint32_t **)glitch::scene::ISceneNode::getAnimators((glitch::scene::ISceneNode::Self *)dword_20D6790);
        v18 = *Animators;
        v3 = 0;
        if ( Animators != (uint32_t **)(uintptr_t)(*Animators) )
        {
          v19 = 0;
          do
          {
            v18 = (uint32_t *)*v18;
            ++v19;
          }
          while ( Animators != (uint32_t **)(uintptr_t)(v18) );
          v3 = 0;
          if ( v19 == 1 )
          {
            v21 = (int)(uintptr_t)(glitch::scene::ISceneNode::getAnimators((glitch::scene::ISceneNode::Self *)dword_20D6790));
            v22 = *(uint32_t *)(*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)v21 + 8) + 68))(*(uint32_t *)(*(uint32_t *)v21 + 8));
            v3 = 0;
            if ( v22 != 0 )
            {
              G4_VCALL<void>(v22, 72, 0);
              G4_VCALL<void>(v22, 80, 0);
              G4_VCALL<void>(v22, 20, 0);
              v3 = 1;
            }
          }
        }
      }
      else
      {
        v3 = 0;
      }
    }
  }
  v25 = v3;
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v35);
  return v25;
}



// [Deduplicated: canonical definition in Actors module] (ActorGameCinematicShakeCam::ActorGameCinematicShakeCam(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCinematicStart::ActorGameCinematicStart(grapher::ActorBase::Self*, unsigned int))


// [Deduplicated: canonical definition in Actors module] (ActorGameCinematicStop::ActorGameCinematicStop(grapher::ActorBase::Self*, unsigned int))
// ----------------------------------------------------------------------------
// Function: ActorGameCinematicPlayFX::Construct_ea845bd0  (binary VA: 0x845bd0)
// Original: ActorGameCinematicPlayFX::ActorGameCinematicPlayFX
// ----------------------------------------------------------------------------
int ActorGameCinematicPlayFX::Construct_ea845bd0(grapher::ActorBase::Self *a1, unsigned int a2)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CB88);
  return sub_84BB20((char *)a1 + 52, *((uint32_t *)a1 + 13));
}

// ----------------------------------------------------------------------------
// Function: ActorGameCharacterSpawnAI::Construct_ea845c30  (binary VA: 0x845c30)
// Original: ActorGameCharacterSpawnAI::ActorGameCharacterSpawnAI
// ----------------------------------------------------------------------------
int ActorGameCharacterSpawnAI::Construct_ea845c30(grapher::ActorBase::Self *a1, unsigned int a2)
{
  int v3;

  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *((uint32_t *)a1 + 15) = -1;
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205C648);
  *((uint32_t *)a1 + 16) = 0;
  v3 = *((uint32_t *)a1 + 14);
  *((uint32_t *)a1 + 17) = 0;
  sub_84BB20((char *)a1 + 56, v3);
  sub_84BB20((char *)a1 + 52, *((uint32_t *)a1 + 13));
  sub_84BB20((char *)a1 + 60, *((uint32_t *)a1 + 15));
  return sub_84BB20((char *)a1 + 64, *((uint32_t *)a1 + 16));
}

// ----------------------------------------------------------------------------
// Function: sub_845CD0_ea845cd0  (binary VA: 0x845cd0)
// Original: sub_845CD0
// ----------------------------------------------------------------------------
int sub_845CD0_ea845cd0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  sub_84BD50(a2, (char *)a1 + 60);
  return grapher::ActorBase::Cancel(a1, a2);
}

// ----------------------------------------------------------------------------
// Function: sub_845D20_ea845d20  (binary VA: 0x845d20)
// Original: sub_845D20
// ----------------------------------------------------------------------------
uint32_t * sub_845D20_ea845d20(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  char *v2;
  void *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *result;
  uint32_t *v7;
  int v8;
  typedef void *_g4_t_obj;
  typedef int _g4_t_v10;
  typedef void *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_obj)) > _g4_s0 ? (4u + sizeof(_g4_t_obj)) : _g4_s0,
    _g4_s2 = (56u + sizeof(_g4_t_v10)) > _g4_s1 ? (56u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (60u + sizeof(_g4_t_v11)) > _g4_s2 ? (60u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 56u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 60u);

  grapher::ActorBase::Cancel(a1, a2);
  v2 = (char *)a1 + 52;
  sub_84BD50(a2, (char *)a1 + 52);
  v10 = *((uint32_t *)a1 + 13);
  if ( byte_20D4B60 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60) != 0 )
  {
    sub_7B3590(v8, &dword_20D4B80, obj);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
    __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
  }
  v3 = nullptr;
  if ( byte_20D4B84 == 0 )
    v3 = &dword_20D4B80;
  sub_78CBD0(v3, sub_78C5B0, &v10, sub_7B19E0, 0);
  v4 = *((uint32_t **)a2 + 3);
  v11 = (char *)a1 + 52;
  if ( v4 == nullptr )
    goto LABEL_12;
  v5 = (uint32_t *)((char *)a2 + 8);
  do
  {
    while ( (unsigned int)(uintptr_t)(v2) <= v4[4] )
    {
      v5 = v4;
      v4 = (uint32_t *)v4[2];
      if ( v4 == nullptr )
        goto LABEL_9;
    }
    v4 = (uint32_t *)v4[3];
  }
  while ( v4 != nullptr );
LABEL_9:
  if ( v5 == (uint32_t *)((char *)a2 + 8) || (unsigned int)(uintptr_t)(v2) < v5[4] )
  {
LABEL_12:
    v7 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v7 = (uint32_t)(uintptr_t)(&off_205CD10);
    v7[1] = *((uint32_t *)a1 + 13);
    result = (uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                         (grapher::ActorContext::Self *)((char *)a2 + 4),
                         &v11);
    *result = (uint32_t)(uintptr_t)(v7);
  }
  else
  {
    result = (uint32_t *)v5[5];
    result[1] = *((uint32_t *)a1 + 13);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_846140_ea845ea0  (binary VA: 0x845ea0)
// Original: sub_846140
// ----------------------------------------------------------------------------
int sub_846140_ea845ea0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *v4;
  grapher::ActorContext::Self *v5;
  int *v6;
  int *v8;
  int v9;
  grapher::ActorVariable::Self *v10;
  int *v11;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v13;
  grapher::ActorContext::Self *v14;
  int v15;
  grapher::ActorContext::Self *obj;
  int v17;
  int v18;
  int *v19;
  grapher::ActorContext::Self *v20;
  g4_cxa_guard_t *v21;
  g4_cxa_guard_t *v22;
  g4_cxa_guard_t *v23;
  g4_cxa_guard_t *v24;
  g4_cxa_guard_t *v25;
  int v26;
  int v27;
  int v28;

  switch ( a3 )
  {
    case 1:
      if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
      {
        v19 = (int *)(&dword_20D3BC0);
        sub_971D40(&dword_20D3BC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
        __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
      }
      v11 = nullptr;
      if ( byte_20D3BC4 == 0 )
        v11 = (int *)(&dword_20D3BC0);
      v23 = (g4_cxa_guard_t *)sub_971F30(v11);
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
      v13 = sub_837200((int)(uintptr_t)(a2), Variable, a4, v17, v18, (int)(uintptr_t)(v19), (int)(uintptr_t)(v23), (int)(uintptr_t)(v25), v26, v27, v28, a1);
      v14 = (grapher::ActorContext::Self *)((char *)v24 + (uint32_t)(uintptr_t)(v13));
      if ( byte_20D3BA0 == 0 )
      {
        v20 = (grapher::ActorContext::Self *)((char *)v24 + (uint32_t)(uintptr_t)(v13));
        v15 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0);
        v14 = v20;
        if ( v15 != 0 )
        {
          sub_971D40(&dword_20D3BC0);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
          __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
          v14 = v20;
        }
      }
      v6 = nullptr;
      obj = v14;
      if ( byte_20D3BC4 == 0 )
        v6 = (int *)(&dword_20D3BC0);
      goto LABEL_7;
    case 2:
      if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
      {
        v19 = (int *)(&dword_20D3BC0);
        sub_971D40(&dword_20D3BC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
        __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
      }
      v8 = nullptr;
      if ( byte_20D3BC4 == 0 )
        v8 = (int *)(&dword_20D3BC0);
      v9 = sub_971F30(v8);
      v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
      v5 = (grapher::ActorContext::Self *)(v9
                                   - (uint32_t)(uintptr_t)sub_837200(
                                               (int)(uintptr_t)(a2),
                                               v10,
                                               a4,
                                               v17,
                                               v18,
                                               (int)(uintptr_t)(v19),
                                               (int)(uintptr_t)(&dword_20D3BC0),
                                               (int)(uintptr_t)(v25),
                                               v26,
                                               v27,
                                               v28,
                                               a1));
      if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
      {
        sub_971D40(v22);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
        __cxa_atexit((void (*)(void *))sub_964D30, v22, &unk_20D1280);
      }
      goto LABEL_5;
    case 0:
      v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
      v5 = sub_837200((int)(uintptr_t)(a2), v4, a4, v17, v18, (int)(uintptr_t)(v19), (int)(uintptr_t)(v21), (int)(uintptr_t)(v25), v26, v27, v28, a1);
      if ( byte_20D3BA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3BA0) != 0 )
      {
        sub_971D40(&dword_20D3BC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3BA0);
        __cxa_atexit((void (*)(void *))sub_964D30, &dword_20D3BC0, &unk_20D1280);
      }
LABEL_5:
      v6 = nullptr;
      obj = v5;
      if ( byte_20D3BC4 == 0 )
        v6 = (int *)(&dword_20D3BC0);
LABEL_7:
      sub_972630(v6, obj);
      break;
    default:
      break;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 3, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_8464A0_ea8464a0  (binary VA: 0x8464a0)
// Original: sub_8464A0
// ----------------------------------------------------------------------------
int sub_8464A0_ea8464a0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int *v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v8;
  int *v9;
  int *v10;
  int v11;
  grapher::ActorVariable::Self *v12;
  grapher::ActorContext::Self *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  void *v18;
  int *v19;
  g4_cxa_guard_t *v20;
  g4_cxa_guard_t *v21;
  g4_cxa_guard_t *v22;
  g4_cxa_guard_t *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  grapher::ActorContext::Self *v30;

  if ( a3 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
    v8 = sub_837200((int)(uintptr_t)(a2), Variable, nullptr, v14, v16, (int)(uintptr_t)(v18), (int)(uintptr_t)(v20), (int)(uintptr_t)(v22), v24, v26, v28, a1);
    if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
    {
      v19 = (int *)(&dword_20D5DA8);
      sub_9BA6C0(&dword_20D5DA8);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
      __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
    }
    v9 = nullptr;
    if ( byte_20D5DAC == 0 )
      v9 = (int *)(&dword_20D5DA8);
    v21 = (g4_cxa_guard_t *)(&dword_20D5DA8);
    if ( (uint8_t)sub_977C30(v9, v8) != 0 )
    {
      if ( byte_20D5DA0 == 0 )
      {
        v23 = (g4_cxa_guard_t *)&byte_20D5DA0;
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
        {
          sub_9BA6C0(&dword_20D5DA8);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
          __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
        }
      }
      v10 = nullptr;
      if ( byte_20D5DAC == 0 )
        v10 = (int *)(&dword_20D5DA8);
      v11 = sub_99C000(v10, v8);
      *((uint32_t *)a2 + 13) = v11;
      if ( v11 != 0 )
      {
        if ( byte_20D5B50 == 0 )
        {
          v21 = (g4_cxa_guard_t *)&byte_20D5B50;
          if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
          {
            grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
            __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
          }
        }
        grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a2, a4);
        v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
        v13 = sub_837200((int)(uintptr_t)(a2), v12, nullptr, v15, v17, (int)(uintptr_t)(v19), (int)(uintptr_t)(v21), (int)(uintptr_t)(v23), v25, v27, v29, v30);
        if ( (int)(uintptr_t)(v13) >= 0 )
          *(uint32_t *)(*((uint32_t *)a2 + 13) + 20) = (uint32_t)(uintptr_t)(v13);
      }
      else
      {
        grapher::ActorBase::FireEvent(a2, 2, a4);
      }
    }
  }
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v4 = nullptr;
  if ( byte_20D49A8 == 0 )
    v4 = (int *)(&dword_20D49A0);
  sub_82A420((int)(uintptr_t)(v4), 1, 0);
  if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
  {
    sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
    __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
  }
  v5 = nullptr;
  if ( byte_20D49A8 == 0 )
    v5 = (int *)(&dword_20D49A0);
  sub_82D060((int)(uintptr_t)(v5), 0);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_846830_ea846830  (binary VA: 0x846830)
// Original: sub_846830
// ----------------------------------------------------------------------------
int sub_846830_ea846830(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorContext::Self *v6;
  int *v7;
  int *v8;
  int v9;
  grapher::ActorVariable::Self *v10;
  grapher::ActorContext::Self *v11;
  int v12;
  int v13;
  int v14;
  int v15;
  void *v16;
  int *v17;
  g4_cxa_guard_t *v18;
  g4_cxa_guard_t *v19;
  g4_cxa_guard_t *v20;
  g4_cxa_guard_t *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  grapher::ActorContext::Self *v28;

  if ( a3 == 0 )
  {
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
    v6 = sub_837200((int)(uintptr_t)(a2), Variable, nullptr, v12, v14, (int)(uintptr_t)(v16), (int)(uintptr_t)(v18), (int)(uintptr_t)(v20), v22, v24, v26, a1);
    if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
    {
      v17 = (int *)(&dword_20D5DA8);
      sub_9BA6C0(&dword_20D5DA8);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
      __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
    }
    v7 = nullptr;
    if ( byte_20D5DAC == 0 )
      v7 = (int *)(&dword_20D5DA8);
    v19 = (g4_cxa_guard_t *)(&dword_20D5DA8);
    if ( (uint8_t)sub_977C30(v7, v6) != 0 )
    {
      if ( byte_20D5DA0 == 0 )
      {
        v21 = (g4_cxa_guard_t *)&byte_20D5DA0;
        if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
        {
          sub_9BA6C0(&dword_20D5DA8);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
          __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
        }
      }
      v8 = nullptr;
      if ( byte_20D5DAC == 0 )
        v8 = (int *)(&dword_20D5DA8);
      v9 = sub_99C110(v8, v6);
      *((uint32_t *)a2 + 13) = v9;
      if ( v9 != 0 )
      {
        if ( byte_20D5B50 == 0 )
        {
          v19 = (g4_cxa_guard_t *)&byte_20D5B50;
          if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
          {
            grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
            __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
          }
        }
        grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a2, a4);
        v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
        v11 = sub_837200((int)(uintptr_t)(a2), v10, nullptr, v13, v15, (int)(uintptr_t)(v17), (int)(uintptr_t)(v19), (int)(uintptr_t)(v21), v23, v25, v27, v28);
        if ( (int)(uintptr_t)(v11) >= 0 )
          *(uint32_t *)(*((uint32_t *)a2 + 13) + 24) = (uint32_t)(uintptr_t)(v11);
      }
      else
      {
        grapher::ActorBase::FireEvent(a2, 2, a4);
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a2, 1, a4));
}

// ----------------------------------------------------------------------------
// Function: sub_846AB0  (binary VA: 0x846ab0)
// Original: sub_846AB0
// ----------------------------------------------------------------------------
int sub_846AB0(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  grapher::ActorVariable::Self *Variable;
  int v3;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::Cancel((grapher::ActorManager::Self *)&unk_20D5B60, a1, a2, true, 1);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, nullptr, v6, v7, v8, v9, v10, v11, v12) != 0 )
  {
    if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
    {
      sub_9BA6C0(&dword_20D5DA8);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
      __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
    }
    v5 = nullptr;
    if ( byte_20D5DAC == 0 )
      v5 = (int *)(&dword_20D5DA8);
    sub_99C000(v5, 11);
  }
  *(uint8_t *)(sub_8F0680(v3) + 190) = 0;
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a2));
}

// ----------------------------------------------------------------------------
// Function: sub_846C40  (binary VA: 0x846c40)
// Original: sub_846C40
// ----------------------------------------------------------------------------
int sub_846C40(grapher::ActorBase::Self *a1, grapher::ActorContext::Self *a2)
{
  grapher::ActorVariable::Self *Variable;
  int v3;
  uint32_t *v4;
  uint32_t *v5;
  unsigned int v6;
  uint32_t *v7;
  int i;
  uint32_t *v9;
  unsigned int v11;
  unsigned int v12;
  uint32_t *v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v15)) > _g4_s1 ? (16u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v16)) > _g4_s2 ? (20u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v17)) > _g4_s3 ? (24u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v18)) > _g4_s4 ? (28u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v19)) > _g4_s5 ? (32u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v20)) > _g4_s6 ? (36u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v21)) > _g4_s7 ? (44u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v22)) > _g4_s8 ? (48u + sizeof(_g4_t_v22)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 48u);

  v22[0] = (uint32_t)(uintptr_t)(v22);
  v22[1] = (uint32_t)(uintptr_t)(v22);
  sub_8560A0(a1, 5, (int)(uintptr_t)(v22), (int)(uintptr_t)(a2), 0x7FFFFFFF);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 6);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a2, v14, v15, v16, v17, v18, v19, v20) != 0 )
  {
    v11 = lrand48();
    v4 = (uint32_t *)v22[0];
    v12 = 0;
    if ( (uint32_t *)v22[0] != v22 )
    {
      v13 = (uint32_t *)v22[0];
      do
      {
        v13 = (uint32_t *)*v13;
        ++v12;
      }
      while ( v13 != v22 );
    }
    v3 = v11 % v12;
  }
  else
  {
    v3 = *((uint32_t *)a1 + 16);
    *((uint32_t *)a1 + 16) = v3 + 1;
    v4 = (uint32_t *)v22[0];
    if ( (uint32_t *)v22[0] == v22 )
      goto LABEL_14;
    v5 = (uint32_t *)v22[0];
    v6 = 0;
    do
    {
      v5 = (uint32_t *)*v5;
      ++v6;
    }
    while ( v5 != v22 );
    if ( v3 + 1 >= v6 )
LABEL_14:
      *((uint32_t *)a1 + 16) = 0;
  }
  v7 = v4;
  if ( v3 > 0 )
  {
    for ( i = 0; i != v3; ++i )
      v7 = (uint32_t *)*v7;
  }
  v21 = v7[2];
  if ( v4 != v22 )
  {
    while ( 1 )
    {
      v9 = (uint32_t *)*v4;
      opDelete(v4);
      if ( v9 == v22 )
        break;
      v4 = v9;
    }
  }
  return v21;
}

// ----------------------------------------------------------------------------
// Function: sub_846D60_ea846d60  (binary VA: 0x846d60)
// Original: sub_846D60
// ----------------------------------------------------------------------------
int sub_846D60_ea846d60(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint8_t *v3;
  uint8_t *v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  uint8_t v8;
  grapher::ActorVariable::Self *v9;
  uint8_t v10;
  grapher::ActorVariable::Self *v11;
  uint8_t v12;
  grapher::ActorVariable::Self *v13;
  uint8_t v14;
  grapher::ActorVariable::Self *v15;
  int v16;
  int v17;
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
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  void (*v37)(uint8_t *, int, uint32_t);
  int v38;
  void (*v39)(uint8_t *, int, uint32_t);
  int v40;
  void (*v41)(uint8_t *, int, uint32_t);
  int v42;
  void (*v43)(uint8_t *, int, uint32_t);
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

  v3 = (uint8_t *)sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != nullptr )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        v36 = *(uint32_t *)(*(uint32_t *)v4 + 120);
        Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
        v8 = sub_837730((int)(uintptr_t)(a1), Variable, a3, v16, v21, v26, v31, v36, v44, v49);
        v37(v4, 118, v8);
        v38 = *(uint32_t *)(*(uint32_t *)v4 + 120);
        v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
        v10 = sub_837730((int)(uintptr_t)(a1), v9, a3, v17, v22, v27, v32, v38, v45, v50);
        v39(v4, 119, v10);
        v40 = *(uint32_t *)(*(uint32_t *)v4 + 120);
        v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
        v12 = sub_837730((int)(uintptr_t)(a1), v11, a3, v18, v23, v28, v33, v40, v46, v51);
        v41(v4, 120, v12);
        v42 = *(uint32_t *)(*(uint32_t *)v4 + 120);
        v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
        v14 = sub_837730((int)(uintptr_t)(a1), v13, a3, v19, v24, v29, v34, v42, v47, v52);
        v43(v4, 121, v14);
        v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
        v4[2213] = sub_837730((int)(uintptr_t)(a1), v15, a3, v20, v25, v30, v35, (int)(uintptr_t)(v43), v48, v53);
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_846F00_ea846f00  (binary VA: 0x846f00)
// Original: sub_846F00
// ----------------------------------------------------------------------------
int sub_846F00_ea846f00(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int v7;
  grapher::ActorVariable::Self *Variable;
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24[6];
  typedef uint8_t _g4_t_v25[40];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v19)) > _g4_s4 ? (20u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v21)) > _g4_s6 ? (24u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v22)) > _g4_s7 ? (28u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v23)) > _g4_s8 ? (32u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v24)) > _g4_s9 ? (36u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v25)) > _g4_s10 ? (60u + sizeof(_g4_t_v25)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);

  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 != 0 )
  {
    v5 = (int *)G4_VCALL<int>(v3, 16);
    if ( v5 != nullptr )
    {
      if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
      {
LABEL_8:
        v7 = sub_857260(a1, 1, a3);
        if ( v7 != 0 )
        {
          v19 = v7;
          Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
          if ( (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v15, v16, v17, v18, v19, v21, v22) != 0 )
          {
            (*(void (**)(float *))(*(uint32_t *)v4 + 52))(v24);
            (*(void (**)(int *))(*(uint32_t *)v20 + 52))(&v21);
            v9 = *(float *)&v21 - v24[0];
            v10 = *(float *)&v22 - v24[1];
            v11 = v23 - v24[2];
            v12 = (float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11);
            if ( v12 != 0.0 )
            {
              v13 = 1.0 / fsqrt(v12);
              v14 = (float)((float)((float)(v12 * v13) * v13) + -3.0) * (float)(v13 * -0.5);
              v9 = v9 * v14;
              v10 = v10 * v14;
              v11 = v11 * v14;
            }
            v24[3] = v9;
            v24[4] = v10;
            v24[5] = v11;
            sub_98EFF0(v4);
          }
          else
          {
            (*(void (**)(uint8_t *))(*(uint32_t *)v20 + 52))(v25);
            sub_980500(v4, v25);
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (int *)v5[1];
          if ( v5 == nullptr )
            break;
          if ( v5 == (int *)(uintptr_t)(&dword_20D75F0) )
            goto LABEL_8;
        }
      }
    }
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_8470D0_ea8470d0  (binary VA: 0x8470d0)
// Original: sub_8470D0
// ----------------------------------------------------------------------------
void sub_8470D0_ea8470d0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  grapher::ActorVariable::Self *Variable;
  char v5; // bp
  char v6;
  int *v7;
  int *v8;
  int *v9;
  int *v10;
  int *v11;
  int *v12;
  int *v13;
  int *v14;
  int v15;
  int v16;
  int v17;
  float v18;
  void *v19;
  g4_cxa_guard_t *v20;
  float v21;
  int v22;
  int v23;

  if ( !sub_62ED90() )
  {
    if ( *((uint8_t *)a1 + 53) != 0 )
    {
      if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
      {
        sub_976230(&dword_20D5240);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
        __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      }
      v3 = nullptr;
      if ( byte_20D5248 == 0 )
        v3 = (int *)(&dword_20D5240);
      if ( *((uint8_t *)v3 + 208) == 0 )
      {
        G4_VCALL<void>(a1, 28, a3);
        grapher::ActorBase::FireEvent(a1, 3, a3);
      }
    }
    else
    {
      Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
      v5 = sub_837730((int)(uintptr_t)(a1), Variable, a3, v15, v16, v17, (int)(uintptr_t)(v19), (int)(uintptr_t)(v20), v22, v23);
      if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
      {
        sub_976230(&dword_20D5240);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
        __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      }
      v6 = byte_20D5248;
      v7 = nullptr;
      if ( byte_20D5248 == 0 )
        v7 = (int *)(&dword_20D5240);
      if ( *((uint8_t *)v7 + 208) != 0 )
        goto LABEL_22;
      if ( v5 != 0 && *((uint32_t *)a1 + 14) != 0 && (uint8_t)sub_977A40(*((uint32_t *)a1 + 14)) != 0 )
        goto LABEL_20;
      if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
      {
        sub_976230(&dword_20D5240);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
        __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      }
      v6 = byte_20D5248;
      v8 = nullptr;
      if ( byte_20D5248 == 0 )
        v8 = (int *)(&dword_20D5240);
      if ( *((uint8_t *)v8 + 194) != 0 )
      {
LABEL_20:
        G4_VCALL<void>(a1, 28, a3);
        if ( *((uint8_t *)a1 + 52) == 0 )
        {
          if ( byte_20D5530 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
          {
            sub_902F90(&dword_20D5540);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
            __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
          }
          byte_20D5570 = 0;
        }
        grapher::ActorBase::FireEvent(a1, 2, a3);
      }
      else
      {
LABEL_22:
        if ( v5 != 0 )
        {
          if ( byte_20D5220 == 0 )
          {
            if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
            {
              sub_976230(&dword_20D5240);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
              __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
            }
            v6 = byte_20D5248;
          }
          v9 = nullptr;
          if ( v6 == 0 )
            v9 = (int *)(&dword_20D5240);
          if ( (uint8_t)sub_977850(v9) != 0 )
            goto LABEL_64;
          if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
          {
            sub_976230(&dword_20D5240);
            _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
            __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
          }
          v14 = nullptr;
          if ( byte_20D5248 == 0 )
            v14 = (int *)(&dword_20D5240);
          if ( (uint8_t)sub_9767D0(v14) != 0 )
          {
LABEL_64:
            if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
            {
              sub_976230(&dword_20D5240);
              _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
              __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
            }
            v10 = nullptr;
            if ( byte_20D5248 == 0 )
              v10 = (int *)(&dword_20D5240);
            if ( (uint8_t)sub_976D00(v10) == 0
              && (*((uint32_t *)a1 + 14) == 0 || (uint8_t)sub_977A60(*((uint32_t *)a1 + 14)) != 0) )
            {
              if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
              {
                sub_976230(&dword_20D5240);
                _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
                __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
              }
              v11 = nullptr;
              if ( byte_20D5248 == 0 )
                v11 = (int *)(&dword_20D5240);
              v21 = sub_977810(v11);
              if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
              {
                sub_976230(&dword_20D5240);
                _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
                __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
              }
              v12 = nullptr;
              if ( byte_20D5248 == 0 )
                v12 = (int *)(&dword_20D5240);
              v18 = sub_977800(v12);
              if ( (float)(v21 - v18) <= 700.0 )
              {
                if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
                {
                  sub_9BA6C0(&dword_20D5DA8);
                  _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
                  __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
                }
                v13 = nullptr;
                if ( byte_20D5DAC == 0 )
                  v13 = (int *)(&dword_20D5DA8);
                *((uint32_t *)a1 + 14) = sub_99C000(v13, 8);
              }
            }
          }
        }
      }
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_847700_ea847700  (binary VA: 0x847700)
// Original: sub_847700
// ----------------------------------------------------------------------------
int sub_847700_ea847700(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int *v3;
  int result;
  bool v5;
  int *v6;
  int v7;
  int v8;
  grapher::ActorVariable::Self *Variable;
  int v10;
  int *v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  int *v16;
  g4_cxa_guard_t *v17;
  int v18;
  int v19;

  if ( *((uint8_t *)a1 + 52) != 0 )
  {
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v3 = nullptr;
    if ( byte_20D5248 == 0 )
      v3 = (int *)(&dword_20D5240);
    result = sub_9767E0(v3);
    if ( (uint8_t)result == 0 )
      return G4_VCALL<int>(a1, 28, a3);
  }
  else
  {
    v5 = byte_20D4A50 == 0;
    *((uint8_t *)a1 + 52) = 1;
    if ( v5 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
    {
      v16 = (int *)(&dword_20D4A60);
      sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
      __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
    }
    v6 = nullptr;
    if ( byte_20D4A64 == 0 )
      v6 = (int *)(&dword_20D4A60);
    sub_5B4A20((int)(uintptr_t)(v6), 0, (int (*)(int))sub_83A040, (int (*)(int))sub_838FD0);
    v8 = sub_8F0680(v7);
    sub_8F5010(v8);
    Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
    v10 = (uint8_t)sub_837730((int)(uintptr_t)(a1), Variable, a3, v13, v14, v15, (int)(uintptr_t)(v16), (int)(uintptr_t)(v17), v18, v19) == 0 ? 2 : 0;
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v11 = nullptr;
    if ( byte_20D5248 == 0 )
      v11 = (int *)(&dword_20D5240);
    sub_9F3AA0(v11, 1, v10);
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v12 = nullptr;
    if ( byte_20D5248 == 0 )
      v12 = (int *)(&dword_20D5240);
    sub_976820(v12, a1, a3);
    return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_8479E0_ea8479e0  (binary VA: 0x8479e0)
// Original: sub_8479E0
// ----------------------------------------------------------------------------
void sub_8479E0_ea8479e0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  char v4; // bp
  int v5;
  bool v6;
  grapher::ActorVariable::Self *Variable;
  char *v8;
  size_t v9;
  uint8_t *v10;
  void **v11;
  void **v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef void **_g4_t_v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_s;
  typedef void *_g4_t_v19[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v14)) > _g4_s1 ? (4u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v15)) > _g4_s2 ? (8u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v16)) > _g4_s3 ? (12u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_s)) > _g4_s5 ? (20u + sizeof(_g4_t_s)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v19)) > _g4_s6 ? (24u + sizeof(_g4_t_v19)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);

  v16 = v19;
  v19[0] = v19;
  v19[1] = v19;
  sub_8392C0(a1, 0, (int)(uintptr_t)(v19), (int)(uintptr_t)(a3));
  v3 = (void **)v19[0];
  if ( v19[0] != v19 )
  {
    do
    {
      v10 = (uint8_t *)(v3[2]);
      if ( v10 != nullptr )
      {
        if ( a2 != 0 )
        {
          if ( a2 == 2 )
          {
            v6 = G4_VCALL<int>(v10, 116, 136) == 0;
            v5 = v6;
            v4 = !v6;
          }
          else
          {
            v4 = 1;
            v5 = 0;
            v6 = false;
          }
        }
        else
        {
          v4 = 0;
          v5 = 1;
          v6 = true;
        }
        LOBYTE(v15) = v6;
        G4_VCALL<void>(v10, 120, 136, v5);
        v10[2896] = v15;
        v10[1964] = v4;
        Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
        sub_837C70(&s, (int)(uintptr_t)(a1), Variable, a3, v13, v14, v15, (int)(uintptr_t)(v16), v17, (int)(uintptr_t)(s), (int)(uintptr_t)(v19[0]));
        v8 = s;
        v9 = strlen(s);
        g4_std_compat::string_assign((int)(uintptr_t)(v10 + 3168), v8, v9);
        g4_std::string::Destroy(&s);
      }
      v3 = (void **)*v3;
    }
    while ( v3 != v16 );
  }
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v11 = (void **)v19[0];
  if ( v19[0] != v16 )
  {
    while ( 1 )
    {
      v12 = (void **)*v11;
      opDelete(v11);
      if ( v12 == v16 )
        break;
      v11 = v12;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_847B80_ea847b80  (binary VA: 0x847b80)
// Original: sub_847B80
// ----------------------------------------------------------------------------
int sub_847B80_ea847b80(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v8;
  grapher::ActorVariable::Self *v9;
  grapher::ActorVariable::Self *v10;
  grapher::ActorVariable::Self *v11;
  grapher::ActorVariable::Self *v12;
  grapher::ActorVariable::Self *v13;
  int v14;
  char *v15;
  int *v16;
  int v17;
  typedef void *_g4_t_obj;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
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
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
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
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef grapher::ActorContext::Self *_g4_t_v81;
  typedef grapher::ActorContext::Self *_g4_t_v82;
  typedef grapher::ActorContext::Self *_g4_t_v83;
  typedef grapher::ActorContext::Self *_g4_t_v84;
  typedef grapher::ActorContext::Self *_g4_t_v85;
  typedef grapher::ActorContext::Self *_g4_t_v86;
  typedef grapher::ActorContext::Self *_g4_t_v87;
  typedef grapher::ActorContext::Self *_g4_t_v88;
  typedef grapher::ActorContext::Self *_g4_t_v89;
  typedef grapher::ActorContext::Self *_g4_t_v90;
  typedef uint8_t _g4_t_v91[5];
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (4u + sizeof(_g4_t_obj)) > _g4_s0 ? (4u + sizeof(_g4_t_obj)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v20)) > _g4_s1 ? (12u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v22)) > _g4_s3 ? (12u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v23)) > _g4_s4 ? (12u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v24)) > _g4_s5 ? (12u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v25)) > _g4_s6 ? (16u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v26)) > _g4_s7 ? (16u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v27)) > _g4_s8 ? (16u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v28)) > _g4_s9 ? (16u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v29)) > _g4_s10 ? (16u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v30)) > _g4_s11 ? (16u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v31)) > _g4_s12 ? (16u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v32)) > _g4_s13 ? (16u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (20u + sizeof(_g4_t_v33)) > _g4_s14 ? (20u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (20u + sizeof(_g4_t_v34)) > _g4_s15 ? (20u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (20u + sizeof(_g4_t_v35)) > _g4_s16 ? (20u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (20u + sizeof(_g4_t_v36)) > _g4_s17 ? (20u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (20u + sizeof(_g4_t_v37)) > _g4_s18 ? (20u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (20u + sizeof(_g4_t_v38)) > _g4_s19 ? (20u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (20u + sizeof(_g4_t_v39)) > _g4_s20 ? (20u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (20u + sizeof(_g4_t_v40)) > _g4_s21 ? (20u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (24u + sizeof(_g4_t_v41)) > _g4_s22 ? (24u + sizeof(_g4_t_v41)) : _g4_s22,
    _g4_s24 = (24u + sizeof(_g4_t_v42)) > _g4_s23 ? (24u + sizeof(_g4_t_v42)) : _g4_s23,
    _g4_s25 = (24u + sizeof(_g4_t_v43)) > _g4_s24 ? (24u + sizeof(_g4_t_v43)) : _g4_s24,
    _g4_s26 = (24u + sizeof(_g4_t_v44)) > _g4_s25 ? (24u + sizeof(_g4_t_v44)) : _g4_s25,
    _g4_s27 = (24u + sizeof(_g4_t_v45)) > _g4_s26 ? (24u + sizeof(_g4_t_v45)) : _g4_s26,
    _g4_s28 = (24u + sizeof(_g4_t_v46)) > _g4_s27 ? (24u + sizeof(_g4_t_v46)) : _g4_s27,
    _g4_s29 = (24u + sizeof(_g4_t_v47)) > _g4_s28 ? (24u + sizeof(_g4_t_v47)) : _g4_s28,
    _g4_s30 = (24u + sizeof(_g4_t_v48)) > _g4_s29 ? (24u + sizeof(_g4_t_v48)) : _g4_s29,
    _g4_s31 = (28u + sizeof(_g4_t_v49)) > _g4_s30 ? (28u + sizeof(_g4_t_v49)) : _g4_s30,
    _g4_s32 = (28u + sizeof(_g4_t_v50)) > _g4_s31 ? (28u + sizeof(_g4_t_v50)) : _g4_s31,
    _g4_s33 = (28u + sizeof(_g4_t_v51)) > _g4_s32 ? (28u + sizeof(_g4_t_v51)) : _g4_s32,
    _g4_s34 = (28u + sizeof(_g4_t_v52)) > _g4_s33 ? (28u + sizeof(_g4_t_v52)) : _g4_s33,
    _g4_s35 = (28u + sizeof(_g4_t_v53)) > _g4_s34 ? (28u + sizeof(_g4_t_v53)) : _g4_s34,
    _g4_s36 = (28u + sizeof(_g4_t_v54)) > _g4_s35 ? (28u + sizeof(_g4_t_v54)) : _g4_s35,
    _g4_s37 = (28u + sizeof(_g4_t_v55)) > _g4_s36 ? (28u + sizeof(_g4_t_v55)) : _g4_s36,
    _g4_s38 = (28u + sizeof(_g4_t_v56)) > _g4_s37 ? (28u + sizeof(_g4_t_v56)) : _g4_s37,
    _g4_s39 = (32u + sizeof(_g4_t_v57)) > _g4_s38 ? (32u + sizeof(_g4_t_v57)) : _g4_s38,
    _g4_s40 = (32u + sizeof(_g4_t_v58)) > _g4_s39 ? (32u + sizeof(_g4_t_v58)) : _g4_s39,
    _g4_s41 = (32u + sizeof(_g4_t_v59)) > _g4_s40 ? (32u + sizeof(_g4_t_v59)) : _g4_s40,
    _g4_s42 = (32u + sizeof(_g4_t_v60)) > _g4_s41 ? (32u + sizeof(_g4_t_v60)) : _g4_s41,
    _g4_s43 = (32u + sizeof(_g4_t_v61)) > _g4_s42 ? (32u + sizeof(_g4_t_v61)) : _g4_s42,
    _g4_s44 = (32u + sizeof(_g4_t_v62)) > _g4_s43 ? (32u + sizeof(_g4_t_v62)) : _g4_s43,
    _g4_s45 = (32u + sizeof(_g4_t_v63)) > _g4_s44 ? (32u + sizeof(_g4_t_v63)) : _g4_s44,
    _g4_s46 = (32u + sizeof(_g4_t_v64)) > _g4_s45 ? (32u + sizeof(_g4_t_v64)) : _g4_s45,
    _g4_s47 = (36u + sizeof(_g4_t_v65)) > _g4_s46 ? (36u + sizeof(_g4_t_v65)) : _g4_s46,
    _g4_s48 = (36u + sizeof(_g4_t_v66)) > _g4_s47 ? (36u + sizeof(_g4_t_v66)) : _g4_s47,
    _g4_s49 = (36u + sizeof(_g4_t_v67)) > _g4_s48 ? (36u + sizeof(_g4_t_v67)) : _g4_s48,
    _g4_s50 = (36u + sizeof(_g4_t_v68)) > _g4_s49 ? (36u + sizeof(_g4_t_v68)) : _g4_s49,
    _g4_s51 = (36u + sizeof(_g4_t_v69)) > _g4_s50 ? (36u + sizeof(_g4_t_v69)) : _g4_s50,
    _g4_s52 = (36u + sizeof(_g4_t_v70)) > _g4_s51 ? (36u + sizeof(_g4_t_v70)) : _g4_s51,
    _g4_s53 = (36u + sizeof(_g4_t_v71)) > _g4_s52 ? (36u + sizeof(_g4_t_v71)) : _g4_s52,
    _g4_s54 = (36u + sizeof(_g4_t_v72)) > _g4_s53 ? (36u + sizeof(_g4_t_v72)) : _g4_s53,
    _g4_s55 = (40u + sizeof(_g4_t_v73)) > _g4_s54 ? (40u + sizeof(_g4_t_v73)) : _g4_s54,
    _g4_s56 = (40u + sizeof(_g4_t_v74)) > _g4_s55 ? (40u + sizeof(_g4_t_v74)) : _g4_s55,
    _g4_s57 = (40u + sizeof(_g4_t_v75)) > _g4_s56 ? (40u + sizeof(_g4_t_v75)) : _g4_s56,
    _g4_s58 = (40u + sizeof(_g4_t_v76)) > _g4_s57 ? (40u + sizeof(_g4_t_v76)) : _g4_s57,
    _g4_s59 = (40u + sizeof(_g4_t_v77)) > _g4_s58 ? (40u + sizeof(_g4_t_v77)) : _g4_s58,
    _g4_s60 = (40u + sizeof(_g4_t_v78)) > _g4_s59 ? (40u + sizeof(_g4_t_v78)) : _g4_s59,
    _g4_s61 = (40u + sizeof(_g4_t_v79)) > _g4_s60 ? (40u + sizeof(_g4_t_v79)) : _g4_s60,
    _g4_s62 = (40u + sizeof(_g4_t_v80)) > _g4_s61 ? (40u + sizeof(_g4_t_v80)) : _g4_s61,
    _g4_s63 = (44u + sizeof(_g4_t_v81)) > _g4_s62 ? (44u + sizeof(_g4_t_v81)) : _g4_s62,
    _g4_s64 = (44u + sizeof(_g4_t_v82)) > _g4_s63 ? (44u + sizeof(_g4_t_v82)) : _g4_s63,
    _g4_s65 = (44u + sizeof(_g4_t_v83)) > _g4_s64 ? (44u + sizeof(_g4_t_v83)) : _g4_s64,
    _g4_s66 = (44u + sizeof(_g4_t_v84)) > _g4_s65 ? (44u + sizeof(_g4_t_v84)) : _g4_s65,
    _g4_s67 = (44u + sizeof(_g4_t_v85)) > _g4_s66 ? (44u + sizeof(_g4_t_v85)) : _g4_s66,
    _g4_s68 = (56u + sizeof(_g4_t_v86)) > _g4_s67 ? (56u + sizeof(_g4_t_v86)) : _g4_s67,
    _g4_s69 = (60u + sizeof(_g4_t_v87)) > _g4_s68 ? (60u + sizeof(_g4_t_v87)) : _g4_s68,
    _g4_s70 = (64u + sizeof(_g4_t_v88)) > _g4_s69 ? (64u + sizeof(_g4_t_v88)) : _g4_s69,
    _g4_s71 = (68u + sizeof(_g4_t_v89)) > _g4_s70 ? (68u + sizeof(_g4_t_v89)) : _g4_s70,
    _g4_s72 = (72u + sizeof(_g4_t_v90)) > _g4_s71 ? (72u + sizeof(_g4_t_v90)) : _g4_s71,
    _g4_s73 = (95u + sizeof(_g4_t_v91)) > _g4_s72 ? (95u + sizeof(_g4_t_v91)) : _g4_s72,
    _g4_s74 = (100u + sizeof(_g4_t_v92)) > _g4_s73 ? (100u + sizeof(_g4_t_v92)) : _g4_s73,
    _g4_s75 = (104u + sizeof(_g4_t_v93)) > _g4_s74 ? (104u + sizeof(_g4_t_v93)) : _g4_s74,
    _g4_s76 = (108u + sizeof(_g4_t_v94)) > _g4_s75 ? (108u + sizeof(_g4_t_v94)) : _g4_s75
  };
  alignas(16) uint8_t _g4_sf[_g4_s76];
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 12u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 16u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 16u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 20u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 20u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 20u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 20u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 24u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 24u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 28u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 28u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 32u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 32u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 32u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 32u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 32u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 32u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 36u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 36u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 36u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 36u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 36u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 40u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 40u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 40u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 40u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 40u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 40u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 40u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 44u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 44u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 44u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 44u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 44u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 56u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 60u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 64u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 68u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 72u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 95u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 100u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 104u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 108u);

  G4_VCALL<void>(a1, 28, a3);
  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  while ( v5 != (int *)(uintptr_t)(&dword_20D75F0) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_7;
  }
LABEL_8:
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
  sub_837C70(&v91[1], (int)(uintptr_t)(a1), Variable, a3, v25, v33, v41, v49, v57, v65, v73);
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 6);
  sub_837C70(&v92, (int)(uintptr_t)(a1), v7, a3, v26, v34, v42, v50, v58, v66, v74);
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 5);
  v86 = sub_837200((int)(uintptr_t)(a1), v8, a3, v20, v27, v35, v43, v51, v59, v67, v75, v81);
  v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 7);
  v87 = sub_837200((int)(uintptr_t)(a1), v9, a3, v21, v28, v36, v44, v52, v60, v68, v76, v82);
  v10 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v88 = sub_837200((int)(uintptr_t)(a1), v10, a3, v22, v29, v37, v45, v53, v61, v69, v77, v83);
  v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v89 = sub_837200((int)(uintptr_t)(a1), v11, a3, v23, v30, v38, v46, v54, v62, v70, v78, v84);
  v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
  sub_837C70(&v93, (int)(uintptr_t)(a1), v12, a3, v31, v39, v47, v55, v63, v71, v79);
  v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 8);
  v90 = sub_837200((int)(uintptr_t)(a1), v13, a3, v24, v32, v40, v48, v56, v64, v72, v80, v85);
  if ( v4 != 0 )
  {
    v14 = sub_984520(v4);
    v15 = (char *)sub_AC5E50(*(uint32_t **)(dword_20DDDC0 + 864), v14);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v94), v15, (int)(uintptr_t)(v91));
    if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
    }
    v16 = nullptr;
    if ( byte_20D5248 == 0 )
      v16 = (int *)(&dword_20D5240);
    v17 = sub_977870(v16, obj);
    if ( (uint8_t)sub_9FECE0(v17, v4, v94, &v93, v90, &v91[1], v86, &v92, v87, v88, v89) != 0 )
    {
      if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
    }
    g4_std::string::Destroy(v94);
  }
  else
  {
    grapher::ActorBase::FireEvent(a1, 2, a3);
  }
  grapher::ActorBase::FireEvent(a1, 1, a3);
  g4_std::string::Destroy(&v93);
  g4_std::string::Destroy(&v92);
  return ((g4_std::string::Destroy(&v91[1])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_847F40_ea847f40  (binary VA: 0x847f40)
// Original: sub_847F40
// ----------------------------------------------------------------------------
int sub_847F40_ea847f40(long double a1, grapher::ActorBase::Self *a2, int a3, grapher::ActorContext::Self *a4)
{
  int v4;
  int v5;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v7;
  grapher::ActorVariable::Self *v8;
  grapher::ActorVariable::Self *v9;
  grapher::ActorManager::Self *v10;
  int v11;
  int *v12;
  int *v13;
  bool v14;
  char v16;
  int v17;
  int *v18;
  int *v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
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
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
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
  typedef char *_g4_t_v48;
  typedef grapher::ActorManager::Self *_g4_t_v49;
  typedef uint8_t _g4_t_v50;
  typedef uint8_t _g4_t_v51[5];
  typedef char *_g4_t_v52;
  typedef int _g4_t_v53[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v20)) > _g4_s0 ? (12u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v22)) > _g4_s2 ? (16u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v23)) > _g4_s3 ? (16u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v24)) > _g4_s4 ? (16u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v25)) > _g4_s5 ? (16u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v26)) > _g4_s6 ? (20u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v27)) > _g4_s7 ? (20u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v28)) > _g4_s8 ? (20u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v29)) > _g4_s9 ? (20u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v30)) > _g4_s10 ? (24u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v31)) > _g4_s11 ? (24u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v32)) > _g4_s12 ? (24u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v33)) > _g4_s13 ? (24u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v34)) > _g4_s14 ? (28u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v35)) > _g4_s15 ? (28u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v36)) > _g4_s16 ? (28u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v37)) > _g4_s17 ? (28u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v38)) > _g4_s18 ? (32u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v39)) > _g4_s19 ? (32u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v40)) > _g4_s20 ? (32u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v41)) > _g4_s21 ? (32u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v42)) > _g4_s22 ? (36u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v43)) > _g4_s23 ? (36u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (36u + sizeof(_g4_t_v44)) > _g4_s24 ? (36u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (36u + sizeof(_g4_t_v45)) > _g4_s25 ? (36u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (40u + sizeof(_g4_t_v46)) > _g4_s26 ? (40u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (40u + sizeof(_g4_t_v47)) > _g4_s27 ? (40u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (40u + sizeof(_g4_t_v48)) > _g4_s28 ? (40u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (48u + sizeof(_g4_t_v49)) > _g4_s29 ? (48u + sizeof(_g4_t_v49)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v50)) > _g4_s30 ? (60u + sizeof(_g4_t_v50)) : _g4_s30,
    _g4_s32 = (67u + sizeof(_g4_t_v51)) > _g4_s31 ? (67u + sizeof(_g4_t_v51)) : _g4_s31,
    _g4_s33 = (72u + sizeof(_g4_t_v52)) > _g4_s32 ? (72u + sizeof(_g4_t_v52)) : _g4_s32,
    _g4_s34 = (76u + sizeof(_g4_t_v53)) > _g4_s33 ? (76u + sizeof(_g4_t_v53)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 32u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 32u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 36u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 36u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 36u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 40u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 60u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 67u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 72u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 76u);

  G4_VCALL<void>(a2, 28, a4);
  if ( byte_20D5530 != 0 )
  {
    *((uint8_t *)a2 + 52) = byte_20D5570;
  }
  else
  {
    if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
    {
      sub_902F90(&dword_20D5540);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
      __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
    }
    v16 = byte_20D5530;
    *((uint8_t *)a2 + 52) = byte_20D5570;
    if ( v16 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5530) != 0 )
    {
      sub_902F90(&dword_20D5540);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5530);
      __cxa_atexit((void (*)(void *))sub_901820, &dword_20D5540, &unk_20D1280);
    }
  }
  byte_20D5570 = 1;
  v5 = sub_8F0680(v4);
  sub_8F5010(v5);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 3);
  if ( (uint8_t)sub_837730((int)(uintptr_t)(a2), Variable, a4, v20, v22, v26, v30, v34, v38, v42) != 0 )
  {
    if ( byte_20D5DA0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5DA0) != 0 )
    {
      sub_9BA6C0(&dword_20D5DA8);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5DA0);
      __cxa_atexit((void (*)(void *))sub_9657F0, &dword_20D5DA8, &unk_20D1280);
    }
    v19 = nullptr;
    if ( byte_20D5DAC == 0 )
      v19 = (int *)(&dword_20D5DA8);
    *((uint32_t *)a2 + 14) = sub_99C110(v19, 8);
  }
  if ( byte_20D186E == 0 )
  {
    if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
    {
      sub_ADB4E0(&dword_20D4AC0);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
      __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
    }
    v18 = nullptr;
    if ( byte_20D4AC4 == 0 )
      v18 = (int *)(&dword_20D4AC0);
    sub_AB0860((int)(uintptr_t)(v18), 2, "sfx", 0.0);
  }
  v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 0);
  sub_837C70(&v51[1], (int)(uintptr_t)(a2), v7, a4, v23, v27, v31, v35, v39, v43, v46);
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 2);
  sub_837C70(&v52, (int)(uintptr_t)(a2), v8, a4, v24, v28, v32, v36, v40, v44, v47);
  v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 4);
  v50 = sub_837730((int)(uintptr_t)(a2), v9, a4, v21, v25, v29, v33, v37, v41, v45);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v53), v52, (int)(uintptr_t)(v51));
  v10 = (grapher::ActorManager::Self *)sub_857260(a2, 1, a4);
  v11 = (int)(uintptr_t)(v10);
  v48 = *(char **)&v51[1];
  if ( byte_20D5220 == 0 )
  {
    v49 = v10;
    v17 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220);
    v11 = (int)(uintptr_t)(v49);
    if ( v17 != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      v11 = (int)(uintptr_t)(v49);
    }
  }
  v12 = nullptr;
  if ( byte_20D5248 == 0 )
    v12 = (int *)(&dword_20D5240);
  sub_9F4A70(a1, (int)(uintptr_t)(v12), v48, v11, (int)(uintptr_t)(v53), v50);
  g4_std::string::Destroy(v53);
  if ( byte_20D5220 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220) != 0 )
  {
    sub_976230(&dword_20D5240);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
    __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
  }
  v13 = nullptr;
  if ( byte_20D5248 == 0 )
    v13 = (int *)(&dword_20D5240);
  sub_976840(v13, a2, a4);
  v14 = byte_20D5B50 == 0;
  *((uint8_t *)a2 + 53) = 0;
  if ( v14 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a2, a4);
  grapher::ActorBase::FireEvent(a2, 1, a4);
  g4_std::string::Destroy(&v52);
  return ((g4_std::string::Destroy(&v51[1])), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_848450_ea848450  (binary VA: 0x848450)
// Original: sub_848450
// ----------------------------------------------------------------------------
int sub_848450_ea848450(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v4;
  int v5;
  void **v6;
  void *v7;
  void *v8;
  volatile int32_t *v9;
  int v10;
  glf::Self *v11;
  char *v12;
  int v13;
  int v14;
  char *v15;
  uint32_t **v16;
  uint32_t *v17;
  uint32_t *v18;
  grapher::ActorBase::Self *v19;
  void **v20;
  void **v21;
  char *v23;
  int v24;
  int *v25;
  uint32_t *v26;
  typedef void *_g4_t_v27;
  typedef void *_g4_t_v28;
  typedef char *_g4_t_v29;
  typedef grapher::ActorContext::Self *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef grapher::ActorBase::Self *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef void **_g4_t_v35;
  typedef g4_cxa_guard_t *_g4_t_v36;
  typedef uint32_t _g4_t_v37[4];
  typedef void *_g4_t_v38;
  typedef glf::Self *_g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef void *_g4_t_v41[2];
  typedef uint8_t _g4_t_v42[12];
  typedef uint32_t _g4_t_v43[14];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v28)) > _g4_s1 ? (12u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v29)) > _g4_s2 ? (40u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v30)) > _g4_s3 ? (44u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v31)) > _g4_s4 ? (48u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v32)) > _g4_s5 ? (52u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v33)) > _g4_s6 ? (56u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v34)) > _g4_s7 ? (60u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v35)) > _g4_s8 ? (64u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v36)) > _g4_s9 ? (68u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v37)) > _g4_s10 ? (76u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v38)) > _g4_s11 ? (92u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (96u + sizeof(_g4_t_v39)) > _g4_s12 ? (96u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v40)) > _g4_s13 ? (100u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (104u + sizeof(_g4_t_v41)) > _g4_s14 ? (104u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v42)) > _g4_s15 ? (112u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (124u + sizeof(_g4_t_v43)) > _g4_s16 ? (124u + sizeof(_g4_t_v43)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 64u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 68u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 92u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 96u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 100u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 104u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 112u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 124u);

  v43[10] = (uint32_t)(uintptr_t)(&a1);
  v33 = a1;
  v30 = a3;
  grapher::ActorBase::GetVariable(a1, 3);
  sub_837C70(&v39);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v33, 0);
  v31 = (int)(uintptr_t)(sub_837200(v33, Variable, v30));
  v4 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(v33, 2);
  v32 = (int)(uintptr_t)(sub_837200(v33, v4, v30));
  v29 = (char *)v33 + 52;
  sub_84BD50(v30, (char *)v33 + 52);
  v41[0] = v41;
  v41[1] = v41;
  sub_8560A0(v33, 1, (int)(uintptr_t)(v41), (int)(uintptr_t)(v30), 0x7FFFFFFF);
  v5 = dword_20D67C8;
  v6 = (void **)v41[0];
  v35 = (void **)v41[0];
  *((uint32_t *)v33 + 13) = dword_20D67C8;
  dword_20D67C8 = v5 + 1;
  if ( v6 != v41 )
  {
    while ( 1 )
    {
      v7 = v6[2];
      if ( v7 != nullptr )
        break;
LABEL_30:
      v6 = (void **)*v6;
      v35 = v6;
      if ( v6 == v41 )
        goto LABEL_31;
    }
    v40 = nullptr;
    (*(void (**)(uint8_t *))(*(uint32_t *)v7 + 52))(v42);
    if ( byte_20D4B60 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4B60) != 0 )
    {
      sub_7B3590(v24, &dword_20D4B80, v7);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4B60);
      __cxa_atexit((void (*)(void *))sub_7B7D00, &dword_20D4B80, &unk_20D1280);
    }
    v8 = nullptr;
    v28 = v7;
    if ( byte_20D4B84 == 0 )
      v8 = &dword_20D4B80;
    v27 = v8;
    sub_7B30D0(v37);
    if ( v40 != nullptr )
    {
      v9 = (volatile int32_t *)((uint32_t *)((char *)v40 + *(uint32_t *)(*v40 - 16)));
      if ( __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v9, 8, v27, v31, v42, v28, &v40, 0);
        G4_VCALL<void>(v9, 4);
      }
    }
    v10 = v37[0];
    v36 = (g4_cxa_guard_t *)v37[0];
    if ( v37[0] != 0 )
    {
      *(uint32_t *)(v37[0] + 40) = *((uint32_t *)v33 + 13);
      if ( v32 != 666 )
        *(uint32_t *)(v10 + 92) = v32;
    }
    v11 = v39;
    if ( *((uint32_t *)v39 - 3) != 0 )
    {
      if ( byte_20D4AB0 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4AB0) != 0 )
      {
        sub_ADB4E0(&dword_20D4AC0);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4AB0);
        __cxa_atexit((void (*)(void *))sub_ADA1E0, &dword_20D4AC0, &unk_20D1280);
      }
      v25 = nullptr;
      if ( byte_20D4AC4 == 0 )
        v25 = (int *)(&dword_20D4AC0);
      sub_AC4FE0((vox::EmitterHandle::Self *)v43, (int)(uintptr_t)(v25), v11, 1028443341);
      vox::EmitterHandle::Destroy((vox::EmitterHandle::Self *)v43);
      v36 = (g4_cxa_guard_t *)v37[0];
    }
    if ( v36 == nullptr )
    {
LABEL_29:
      v37[0] = 0;
      v6 = v35;
      goto LABEL_30;
    }
    v34 = (char *)v36[2];
    v12 = (char *)v36[1];
    v13 = (v34 - v12) >> 4;
    v14 = (v34 - v12) >> 2;
    if ( v13 > 0 )
    {
      if ( *(uint32_t **)v12 != v37 )
      {
        if ( *((uint32_t **)v12 + 1) == v37 )
        {
          v12 += 4;
        }
        else if ( *((uint32_t **)v12 + 2) == v37 )
        {
          v12 += 8;
        }
        else if ( *((uint32_t **)v12 + 3) == v37 )
        {
          v12 += 12;
        }
        else
        {
          do
          {
            --v13;
            v16 = (uint32_t **)(v12 + 16);
            v12 += 16;
            if ( v13 == 0 )
            {
              v14 = (v34 - v12) >> 2;
              goto LABEL_26;
            }
            if ( *v16 == v37 )
              goto LABEL_49;
            v15 = v12 + 4;
            if ( v16[1] == v37 )
              break;
            v15 = v12 + 8;
            if ( v16[2] == v37 )
              break;
            v15 = v12 + 12;
          }
          while ( v16[3] != v37 );
          v12 = v15;
        }
      }
      goto LABEL_49;
    }
LABEL_26:
    if ( v14 != 2 )
    {
      if ( v14 != 3 )
      {
        if ( v14 != 1 )
          goto LABEL_29;
        goto LABEL_48;
      }
      if ( *(uint32_t **)v12 == v37 )
        goto LABEL_49;
      v12 += 4;
    }
    if ( *(uint32_t **)v12 != v37 )
    {
      v12 += 4;
LABEL_48:
      if ( *(uint32_t **)v12 != v37 )
        goto LABEL_29;
    }
LABEL_49:
    if ( v34 != v12 )
    {
      v23 = v12 + 4;
      if ( v34 != v12 + 4 && (v34 - v23) >> 2 != 0 )
      {
        memmove(v12, v12 + 4, 4 * ((v34 - v23) >> 2));
        v34 = (char *)v36[2];
      }
      v36[2] = (g4_cxa_guard_t)(v34 - 4);
    }
    goto LABEL_29;
  }
LABEL_31:
  v38 = (char *)v33 + 52;
  v17 = *((uint32_t **)v30 + 3);
  if ( v17 == nullptr )
    goto LABEL_63;
  v18 = (uint32_t *)((char *)v30 + 8);
  do
  {
    while ( (unsigned int)(uintptr_t)(v29) <= v17[4] )
    {
      v18 = v17;
      v17 = (uint32_t *)v17[2];
      if ( v17 == nullptr )
        goto LABEL_36;
    }
    v17 = (uint32_t *)v17[3];
  }
  while ( v17 != nullptr );
LABEL_36:
  if ( (uint32_t *)((char *)v30 + 8) == v18 || (unsigned int)(uintptr_t)(v29) < v18[4] )
  {
LABEL_63:
    v26 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v26 = (uint32_t)(uintptr_t)(&off_205CD10);
    v26[1] = *((uint32_t *)v33 + 13);
    *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                 (grapher::ActorContext::Self *)((char *)v30 + 4),
                 &v38) = (uint32_t)(uintptr_t)(v26);
    v19 = v33;
  }
  else
  {
    v19 = v33;
    *(uint32_t *)(v18[5] + 4) = *((uint32_t *)v33 + 13);
  }
  grapher::ActorBase::FireEvent(v19, 1, v30);
  v20 = (void **)v41[0];
  if ( v41[0] != v41 )
  {
    while ( 1 )
    {
      v21 = (void **)*v20;
      opDelete(v20);
      if ( v21 == v41 )
        break;
      v20 = v21;
    }
  }
  return ((g4_std::string::Destroy(&v39)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_848A00_ea848a00  (binary VA: 0x848a00)
// Original: sub_848A00
// ----------------------------------------------------------------------------
int sub_848A00_ea848a00(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  grapher::ActorBase::Self *v4;
  grapher::ActorContext::Self *v5;
  g4_cxa_guard_t *v6;
  glitch::scene::ISceneNode::Self *v7;
  int *v8;
  uint32_t **v9;
  uint32_t *v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  uint32_t *v16;
  volatile int32_t *v17;
  volatile int32_t *v18;
  void *v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  volatile int32_t *v24;
  volatile int32_t *v25;
  int v26;
  uint32_t **Animators;
  uint32_t *v28;
  int v29;
  int v30;
  grapher::ActorManager::Self *v31;
  int v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_Variable;
  typedef grapher::ActorManager::Self *_g4_t_v36;
  typedef grapher::ActorManager::Self *_g4_t_v37;
  typedef grapher::ActorManager::Self *_g4_t_v38;
  typedef grapher::ActorManager::Self *_g4_t_v39;
  typedef grapher::ActorManager::Self *_g4_t_v40;
  typedef grapher::ActorManager::Self *_g4_t_v41;
  typedef uint32_t *_g4_t_obj;
  typedef volatile int32_t *_g4_t_obja;
  typedef volatile int32_t *_g4_t_objb;
  typedef g4_cxa_guard_t *_g4_t_v45;
  typedef g4_cxa_guard_t *_g4_t_v46;
  typedef g4_cxa_guard_t *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef uint8_t _g4_t_v52[12];
  typedef uint8_t _g4_t_v53[20];
  typedef uint32_t _g4_t_v54[11];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (4u + sizeof(_g4_t_v33)) > _g4_s0 ? (4u + sizeof(_g4_t_v33)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v34)) > _g4_s1 ? (4u + sizeof(_g4_t_v34)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_Variable)) > _g4_s2 ? (8u + sizeof(_g4_t_Variable)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v36)) > _g4_s3 ? (28u + sizeof(_g4_t_v36)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v37)) > _g4_s4 ? (28u + sizeof(_g4_t_v37)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v38)) > _g4_s5 ? (28u + sizeof(_g4_t_v38)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v39)) > _g4_s6 ? (28u + sizeof(_g4_t_v39)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v40)) > _g4_s7 ? (28u + sizeof(_g4_t_v40)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v41)) > _g4_s8 ? (28u + sizeof(_g4_t_v41)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_obj)) > _g4_s9 ? (32u + sizeof(_g4_t_obj)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_obja)) > _g4_s10 ? (32u + sizeof(_g4_t_obja)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_objb)) > _g4_s11 ? (32u + sizeof(_g4_t_objb)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v45)) > _g4_s12 ? (36u + sizeof(_g4_t_v45)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v46)) > _g4_s13 ? (36u + sizeof(_g4_t_v46)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v47)) > _g4_s14 ? (44u + sizeof(_g4_t_v47)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v48)) > _g4_s15 ? (48u + sizeof(_g4_t_v48)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v49)) > _g4_s16 ? (64u + sizeof(_g4_t_v49)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v50)) > _g4_s17 ? (72u + sizeof(_g4_t_v50)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v51)) > _g4_s18 ? (76u + sizeof(_g4_t_v51)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v52)) > _g4_s19 ? (80u + sizeof(_g4_t_v52)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v53)) > _g4_s20 ? (92u + sizeof(_g4_t_v53)) : _g4_s20,
    _g4_s22 = (112u + sizeof(_g4_t_v54)) > _g4_s21 ? (112u + sizeof(_g4_t_v54)) : _g4_s21
  };
  alignas(16) uint8_t _g4_sf[_g4_s22];
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_Variable &Variable = *reinterpret_cast<_g4_t_Variable *>(_g4_sf + 8u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 28u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 28u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 28u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 28u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 32u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 32u);
  _g4_t_objb &objb = *reinterpret_cast<_g4_t_objb *>(_g4_sf + 32u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 36u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 44u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 48u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 64u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 92u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 112u);

  v54[10] = (uint32_t)(uintptr_t)(&a1);
  result = a2;
  v4 = a1;
  v5 = a3;
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
      return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 2, a3));
    return result;
  }
  *((uint8_t *)a1 + 52) = 0;
  grapher::ActorBase::GetVariable(v4, 0);
  sub_837C70(&v50);
  glitch::collada::CColladaDatabase::Construct((glitch::collada::CColladaDatabase::Self *)v53, v50, nullptr);
  v6 = (g4_cxa_guard_t *)sub_857260(v4, 1, v5);
  v7 = (glitch::scene::ISceneNode::Self *)dword_20D6780;
  v47 = v6;
  if ( dword_20D6780 == 0 )
  {
    glitch::collada::CColladaDatabase::Construct((glitch::collada::CColladaDatabase::Self *)v54, v50, nullptr);
    if ( v54[0] != 0 && v47 != nullptr )
    {
      v14 = sub_B97E20();
      glitch::collada::CColladaDatabase::constructScene(
        (glitch::collada::CColladaDatabase::Self *)&v48,
        (glitch::video::IVideoDriver::Self *)v54,
        v14);
      v15 = (int)(uintptr_t)(v48);
      if ( v48 != nullptr )
        __sync_add_and_fetch((uint32_t *)((char *)v48 + *(uint32_t *)(*v48 - 16) + 4), 1u);
      v16 = (uint32_t *)dword_20D6790;
      dword_20D6790 = v15;
      if ( v16 != nullptr )
      {
        v17 = (volatile int32_t *)((uint32_t *)((char *)v16 + *(uint32_t *)(*v16 - 16)));
        if ( __sync_fetch_and_add(v17 + 1, 0xFFFFFFFF) == 1 )
        {
          obja = v17;
          G4_VCALL<void>(v17, 8);
          G4_VCALL<void>(obja, 4);
        }
      }
      if ( v48 != nullptr )
      {
        v18 = (volatile int32_t *)((uint32_t *)((char *)v48 + *(uint32_t *)(*v48 - 16)));
        if ( __sync_fetch_and_add(v18 + 1, 0xFFFFFFFF) == 1 )
        {
          v37 = (grapher::ActorManager::Self *)v18;
          G4_VCALL<void>(v18, 8);
          G4_VCALL<void>(v37, 4);
        }
      }
      if ( dword_20D6790 != 0 )
      {
        if ( byte_20D4D70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4D70) != 0 )
        {
          sub_5BEF40(&unk_20D4D80);
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4D70);
          __cxa_atexit((void (*)(void *))sub_5BEE10, &unk_20D4D80, &unk_20D1280);
        }
        v19 = nullptr;
        if ( byte_20D4D84 == 0 )
          v19 = &unk_20D4D80;
        v20 = sub_5B9810(v19);
        G4_VCALL<void>(v20, 104, &dword_20D6790);
        v45 = *(g4_cxa_guard_t **)(*(uint32_t *)dword_20D6790 + 184);
        v38 = (grapher::ActorManager::Self *)dword_20D6790;
        (*(void (**)(uint8_t *, g4_cxa_guard_t *))(*v47 + 52))(v52, v47);
        ((void (*)(grapher::ActorManager::Self *))v45)(v38);
        v46 = *(g4_cxa_guard_t **)(*(uint32_t *)dword_20D6790 + 176);
        v39 = (grapher::ActorManager::Self *)dword_20D6790;
        v21 = G4_VCALL<int>(v47, 56);
        ((void (*)(grapher::ActorManager::Self *, int))v46)(v39, v21);
        v33 = dword_20D6790;
        glitch::scene::ISceneNode::getSceneNodeFromType(&v49);
        v22 = (int)(uintptr_t)(v49);
        if ( v49 != nullptr )
          __sync_add_and_fetch((uint32_t *)((char *)v49 + *(uint32_t *)(*v49 - 16) + 4), 1u);
        v23 = (uint32_t *)dword_20D6780;
        dword_20D6780 = v22;
        if ( v23 != nullptr )
        {
          v24 = (volatile int32_t *)((uint32_t *)((char *)v23 + *(uint32_t *)(*v23 - 16)));
          if ( __sync_fetch_and_add(v24 + 1, 0xFFFFFFFF) == 1 )
          {
            objb = v24;
            G4_VCALL<void>(v24, 8, v33, 1130717540, 3);
            G4_VCALL<void>(objb, 4);
          }
        }
        if ( v49 != nullptr )
        {
          v25 = (volatile int32_t *)((uint32_t *)((char *)v49 + *(uint32_t *)(*v49 - 16)));
          if ( __sync_fetch_and_add(v25 + 1, 0xFFFFFFFF) == 1 )
          {
            v40 = (grapher::ActorManager::Self *)v25;
            G4_VCALL<void>(v25, 8);
            G4_VCALL<void>(v40, 4);
          }
        }
        v26 = dword_20D6780;
        if ( dword_20D6780 != 0 )
          goto LABEL_46;
        v34 = dword_20D6790;
        glitch::scene::ISceneNode::getSceneNodeFromType(&v51);
        sub_8443E0(v32, v34, 1667588452);
        if ( v51 != nullptr )
          sub_5459C0((char *)v51 + *(uint32_t *)(*v51 - 16));
        v26 = dword_20D6780;
        if ( dword_20D6780 != 0 )
        {
LABEL_46:
          G4_VCALL<void>(v26, 336, 1101004800);
          Animators = (uint32_t **)glitch::scene::ISceneNode::getAnimators((glitch::scene::ISceneNode::Self *)dword_20D6790);
          v28 = *Animators;
          if ( Animators != (uint32_t **)(uintptr_t)(*Animators) )
          {
            v29 = 0;
            do
            {
              v28 = (uint32_t *)*v28;
              ++v29;
            }
            while ( Animators != (uint32_t **)(uintptr_t)(v28) );
            if ( v29 == 1 )
            {
              v30 = (int)(uintptr_t)(glitch::scene::ISceneNode::getAnimators((glitch::scene::ISceneNode::Self *)dword_20D6790));
              v31 = *(grapher::ActorManager::Self **)(*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)v30 + 8) + 68))(*(uint32_t *)(*(uint32_t *)v30 + 8));
              if ( v31 != nullptr )
              {
                v41 = v31;
                G4_VCALL<void>(v31, 72, 0);
                G4_VCALL<void>(v41, 80, 0);
                G4_VCALL<void>(v41, 20, 0);
              }
            }
          }
        }
      }
    }
    glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v54);
    v7 = (glitch::scene::ISceneNode::Self *)dword_20D6780;
    if ( dword_20D6780 == 0 )
      goto LABEL_13;
  }
  if ( byte_20D5220 == 0 )
  {
    v36 = (grapher::ActorManager::Self *)(v7);
    v12 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5220);
    v7 = (glitch::scene::ISceneNode::Self *)(v36);
    if ( v12 != 0 )
    {
      sub_976230(&dword_20D5240);
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5220);
      __cxa_atexit((void (*)(void *))sub_992DE0, &dword_20D5240, &unk_20D1280);
      v7 = (glitch::scene::ISceneNode::Self *)(v36);
    }
  }
  v8 = nullptr;
  if ( byte_20D5248 == 0 )
    v8 = (int *)(&dword_20D5240);
  sub_9CD080((int)(uintptr_t)(v8), v7);
  v9 = (uint32_t **)glitch::scene::ISceneNode::getAnimators((glitch::scene::ISceneNode::Self *)dword_20D6790);
  v10 = *v9;
  if ( v9 == (uint32_t **)(uintptr_t)(*v9) )
    goto LABEL_13;
  v11 = 0;
  do
  {
    v10 = (uint32_t *)*v10;
    ++v11;
  }
  while ( v9 != (uint32_t **)(uintptr_t)(v10) );
  if ( v11 != 1 )
    goto LABEL_13;
  v13 = (int)(uintptr_t)(glitch::scene::ISceneNode::getAnimators((glitch::scene::ISceneNode::Self *)dword_20D6790));
  obj = *(uint32_t **)(*(int (**)(uint32_t))(**(uint32_t **)(*(uint32_t *)v13 + 8) + 68))(*(uint32_t *)(*(uint32_t *)v13 + 8));
  Variable = grapher::ActorBase::GetVariable(v4, 2);
  sub_837C70(v54);
  if ( obj == nullptr || *(uint32_t *)(v54[0] - 12) == 0 )
  {
    g4_std::string::Destroy(v54);
LABEL_13:
    if ( dword_20D6790 != 0 )
      sub_844460();
    grapher::ActorBase::FireEvent(v4, 2, v5);
    glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v53);
    return ((g4_std::string::Destroy(&v50)), (int)0);
  }
  G4_VCALL<void>(obj, 24, v54[0], Variable, v5);
  G4_VCALL<void>(obj, 80, 1065353216);
  obj[3] = (uint32_t)(uintptr_t)(v4);
  obj[2] = (uint32_t)(uintptr_t)(sub_838960);
  grapher::ActorBase::FireEvent(v4, 2, v5);
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, v4, v5);
  g4_std::string::Destroy(v54);
  glitch::collada::CColladaDatabase::Destroy((glitch::collada::CColladaDatabase::Self *)v53);
  return ((g4_std::string::Destroy(&v50)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_849160  (binary VA: 0x849160)
// Original: sub_849160
// ----------------------------------------------------------------------------
uint32_t * sub_849160(uint32_t *a1, int a2, int *a3, uint32_t *a4)
{
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *i;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v13;
  char v15;

  v15 = 1;
  if ( a2 == 0 && a3 != (int *)(uintptr_t)(&dword_20D67B4) )
    v15 = *a4 < a3[4];
  v4 = (uint32_t *)opNew(0x1Cu);
  v13 = v4;
  if ( v4 != (uint32_t *)-16 )
  {
    v5 = v4 + 5;
    v4[4] = *a4;
    v4[5] = (uint32_t)(uintptr_t)(v4 + 5);
    v4[6] = (uint32_t)(uintptr_t)(v4 + 5);
    for ( i = (uint32_t *)a4[1]; a4 + 1 != i; i = (uint32_t *)*i )
    {
      v7 = opNew(0xCu);
      v8 = v7;
      v9 = v7 + 8;
      if ( v7 != -8 )
      {
        *(uint32_t *)(v7 + 8) = 0;
        v10 = i[2];
        v11 = v10 + 12;
        if ( v10 == 0 )
          v11 = 0;
        sub_84BF80(v9, v11);
      }
      sub_1901920(v8, v5);
    }
  }
  sub_1904970(v15, v13, a3, &dword_20D67B4);
  ++dword_20D67C4;
  *a1 = (uint32_t)(uintptr_t)(v13);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_849290  (binary VA: 0x849290)
// Original: sub_849290
// ----------------------------------------------------------------------------
int sub_849290(int a1, int *a2)
{
  int *v3;
  int v4;
  int *v5;
  char v6; // bp
  int v7;
  int v9;
  typedef int *_g4_t_v11;
  typedef uint32_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v3 = (int *)dword_20D67B8;
  if ( dword_20D67B8 == 0 )
  {
    v3 = (int *)(&dword_20D67B4);
    goto LABEL_11;
  }
  v4 = *a2;
  while ( 1 )
  {
    v7 = v3[4];
    if ( v7 <= v4 )
      break;
    v5 = (int *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (int *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v11 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v7 )
      goto LABEL_9;
LABEL_13:
    sub_849160(v12, 0, v11, a2);
LABEL_14:
    v9 = v12[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_11:
  if ( (int *)dword_20D67BC == v3 )
  {
    sub_849160(v12, 0, v3, a2);
    goto LABEL_14;
  }
  v11 = v3;
  v3 = (int *)sub_19048F0(v3);
  if ( *a2 > v3[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v3);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_849360  (binary VA: 0x849360)
// Original: sub_849360
// ----------------------------------------------------------------------------
int * sub_849360(int *a1)
{
  int *v1;
  int v2;
  int *v3;
  uint32_t *v4;
  uint32_t *v5;
  int *v7;
  int *v8;
  typedef uint32_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef int *_g4_t_v11;
  typedef int *_g4_t_v12;
  typedef int *_g4_t_v13;
  typedef uint32_t _g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[6];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v10)) > _g4_s1 ? (4u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v11)) > _g4_s2 ? (8u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v12)) > _g4_s3 ? (16u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v14)) > _g4_s5 ? (32u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v15)) > _g4_s6 ? (48u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v16)) > _g4_s7 ? (52u + sizeof(_g4_t_v16)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 16u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 52u);

  v1 = (int *)dword_20D67B8;
  v2 = *a1;
  v11 = (int *)(&dword_20D67B4);
  if ( dword_20D67B8 != 0 )
  {
    do
    {
      while ( v1[4] >= v2 )
      {
        v11 = v1;
        v1 = (int *)v1[2];
        if ( v1 == nullptr )
          goto LABEL_6;
      }
      v1 = (int *)v1[3];
    }
    while ( v1 != nullptr );
LABEL_6:
    if ( v11 != (int *)(uintptr_t)(&dword_20D67B4) && v11[4] <= v2 )
      return v11 + 5;
  }
  v15 = *a1;
  v14[0] = (uint32_t)(uintptr_t)(v14);
  v14[1] = (uint32_t)(uintptr_t)(v14);
  v16[0] = (uint32_t)(uintptr_t)(v16);
  v16[1] = (uint32_t)(uintptr_t)(v16);
  if ( v11 == (int *)(uintptr_t)(&dword_20D67B4) )
  {
    if ( dword_20D67C4 != 0 )
    {
      v3 = (int *)dword_20D67C0;
      if ( v2 > *(uint32_t *)(dword_20D67C0 + 16) )
        goto LABEL_31;
    }
  }
  else
  {
    if ( v2 >= v11[4] )
    {
      if ( v2 <= v11[4] )
      {
LABEL_19:
        v5 = (uint32_t *)v14[0];
        if ( (uint32_t *)v14[0] != v14 )
        {
          while ( 1 )
          {
            v10 = (uint32_t *)*v5;
            sub_84BF80(v5 + 2, 0);
            opDelete(v5);
            if ( v10 == v14 )
              break;
            v5 = v10;
          }
        }
        return v11 + 5;
      }
      v7 = v11;
      if ( (int *)dword_20D67C0 != v11 )
      {
        v8 = (int *)sub_19048E0(v11);
        if ( v2 >= v8[4] )
          goto LABEL_32;
        v7 = v11;
        if ( v11[3] != 0 )
        {
          sub_849160(&v13, (int)(uintptr_t)(v8), v8, &v15);
          goto LABEL_14;
        }
      }
      sub_849160(&v13, 0, v7, &v15);
      goto LABEL_14;
    }
    if ( (int *)dword_20D67BC == v11 )
    {
      sub_849160(&v13, (int)(uintptr_t)(v11), v11, &v15);
      goto LABEL_14;
    }
    v3 = (int *)sub_1904940(v11);
    if ( v2 > v3[4] )
    {
      if ( v3[3] != 0 )
      {
        sub_849160(&v13, (int)(uintptr_t)(v11), v11, &v15);
LABEL_14:
        v4 = (uint32_t *)v16[0];
        v11 = v13;
        goto LABEL_15;
      }
LABEL_31:
      sub_849160(&v13, 0, v3, &v15);
      goto LABEL_14;
    }
  }
LABEL_32:
  sub_849290((int)(uintptr_t)(&v12), &v15);
  v4 = (uint32_t *)v16[0];
  v11 = v12;
LABEL_15:
  if ( v4 != v16 )
  {
    while ( 1 )
    {
      v9 = (uint32_t *)*v4;
      sub_84BF80(v4 + 2, 0);
      opDelete(v4);
      if ( v9 == v16 )
        break;
      v4 = v9;
    }
  }
  goto LABEL_19;
}

// ----------------------------------------------------------------------------
// Function: sub_849570_ea849570  (binary VA: 0x849570)
// Original: sub_849570
// ----------------------------------------------------------------------------
int sub_849570_ea849570(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int result;
  int v4;
  int *v5;
  int *v6;
  uint32_t *v7;
  int v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  char *v12;
  char *v13;
  char *v14;
  char *v15;
  char *v16;
  char *v17;
  char *v18;
  char *v19;
  char *v20;
  bool v21;
  int *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;
  uint32_t *v26;
  int v27;
  int v28;
  int v29;
  uint32_t *v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef char *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef int *_g4_t_v37;
  typedef void *_g4_t_v38[4];
  typedef uint32_t _g4_t_v39[4];
  typedef uint32_t _g4_t_v40[7];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v31)) > _g4_s0 ? (0u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v32)) > _g4_s1 ? (0u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v33)) > _g4_s2 ? (4u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v34)) > _g4_s3 ? (8u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v35)) > _g4_s4 ? (12u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v36)) > _g4_s5 ? (16u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v37)) > _g4_s6 ? (20u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v38)) > _g4_s7 ? (32u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v39)) > _g4_s8 ? (48u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v40)) > _g4_s9 ? (64u + sizeof(_g4_t_v40)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 8u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 12u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 16u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 32u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);

  result = a2;
  if ( a2 == 0 )
  {
    v35 = (char *)a1 + 56;
    sub_84BD50(a3, (char *)a1 + 56);
    v34 = (char *)a1 + 52;
    sub_84BD50(a3, (char *)a1 + 52);
    v36 = (char *)a1 + 60;
    sub_84BD50(a3, (char *)a1 + 60);
    v33 = (char *)a1 + 64;
    sub_84BD50(a3, (char *)a1 + 64);
    v4 = dword_20D67A8;
    v40[0] = (uint32_t)(uintptr_t)(v40);
    v40[1] = (uint32_t)(uintptr_t)(v40);
    *((uint32_t *)a1 + 15) = dword_20D67A8;
    *((uint32_t *)a1 + 14) = 0;
    *((uint32_t *)a1 + 13) = 0;
    *((uint32_t *)a1 + 16) = 0;
    dword_20D67A8 = v4 + 1;
    v5 = sub_849360((int *)a1 + 15);
    v37 = v5;
    if ( v5 == (int *)(uintptr_t)(v40) )
    {
LABEL_10:
      v10 = (uint32_t *)v40[0];
      if ( (uint32_t *)v40[0] != v40 )
      {
        while ( 1 )
        {
          v11 = (uint32_t *)*v10;
          sub_84BF80(v10 + 2, 0);
          opDelete(v10);
          if ( v11 == v40 )
            break;
          v10 = v11;
        }
      }
      v12 = (char *)a3 + 8;
      v38[0] = (char *)a1 + 56;
      v13 = *((char **)a3 + 3);
      if ( v13 == nullptr )
        goto LABEL_55;
      v14 = (char *)a3 + 8;
      do
      {
        while ( (unsigned int)(uintptr_t)(v35) <= *((uint32_t *)v13 + 4) )
        {
          v14 = v13;
          v13 = *((char **)v13 + 2);
          if ( v13 == nullptr )
            goto LABEL_19;
        }
        v13 = *((char **)v13 + 3);
      }
      while ( v13 != nullptr );
LABEL_19:
      if ( v12 == v14 || (unsigned int)(uintptr_t)(v35) < *((uint32_t *)v14 + 4) )
      {
LABEL_55:
        v26 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
        *v26 = (uint32_t)(uintptr_t)(&off_205CD10);
        v26[1] = *((uint32_t *)a1 + 14);
        *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                     (grapher::ActorContext::Self *)((char *)a3 + 4),
                     v38) = (uint32_t)(uintptr_t)(v26);
      }
      else
      {
        *(uint32_t *)(*((uint32_t *)v14 + 5) + 4) = *((uint32_t *)a1 + 14);
      }
      v38[0] = (char *)a1 + 52;
      v15 = *((char **)a3 + 3);
      if ( v15 == nullptr )
        goto LABEL_54;
      v16 = (char *)a3 + 8;
      do
      {
        while ( (unsigned int)(uintptr_t)(v34) <= *((uint32_t *)v15 + 4) )
        {
          v16 = v15;
          v15 = *((char **)v15 + 2);
          if ( v15 == nullptr )
            goto LABEL_27;
        }
        v15 = *((char **)v15 + 3);
      }
      while ( v15 != nullptr );
LABEL_27:
      if ( v16 == v12 || (unsigned int)(uintptr_t)(v34) < *((uint32_t *)v16 + 4) )
      {
LABEL_54:
        v25 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
        *v25 = (uint32_t)(uintptr_t)(&off_205CD10);
        v25[1] = *((uint32_t *)a1 + 13);
        *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                     (grapher::ActorContext::Self *)((char *)a3 + 4),
                     v38) = (uint32_t)(uintptr_t)(v25);
      }
      else
      {
        *(uint32_t *)(*((uint32_t *)v16 + 5) + 4) = *((uint32_t *)a1 + 13);
      }
      v38[0] = (char *)a1 + 60;
      v17 = *((char **)a3 + 3);
      if ( v17 == nullptr )
        goto LABEL_53;
      v18 = (char *)a3 + 8;
      do
      {
        while ( (unsigned int)(uintptr_t)(v36) <= *((uint32_t *)v17 + 4) )
        {
          v18 = v17;
          v17 = *((char **)v17 + 2);
          if ( v17 == nullptr )
            goto LABEL_35;
        }
        v17 = *((char **)v17 + 3);
      }
      while ( v17 != nullptr );
LABEL_35:
      if ( v18 == v12 || (unsigned int)(uintptr_t)(v36) < *((uint32_t *)v18 + 4) )
      {
LABEL_53:
        v24 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
        *v24 = (uint32_t)(uintptr_t)(&off_205CD10);
        v24[1] = *((uint32_t *)a1 + 15);
        *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                     (grapher::ActorContext::Self *)((char *)a3 + 4),
                     v38) = (uint32_t)(uintptr_t)(v24);
      }
      else
      {
        *(uint32_t *)(*((uint32_t *)v18 + 5) + 4) = *((uint32_t *)a1 + 15);
      }
      v38[0] = (char *)a1 + 64;
      v19 = *((char **)a3 + 3);
      if ( v19 == nullptr )
        goto LABEL_50;
      v20 = (char *)a3 + 8;
      do
      {
        while ( (unsigned int)(uintptr_t)(v33) <= *((uint32_t *)v19 + 4) )
        {
          v20 = v19;
          v19 = *((char **)v19 + 2);
          if ( v19 == nullptr )
            goto LABEL_43;
        }
        v19 = *((char **)v19 + 3);
      }
      while ( v19 != nullptr );
LABEL_43:
      if ( v20 == v12 || (unsigned int)(uintptr_t)(v33) < *((uint32_t *)v20 + 4) )
      {
LABEL_50:
        v23 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
        *v23 = (uint32_t)(uintptr_t)(&off_205CD10);
        v23[1] = *((uint32_t *)a1 + 16);
        *(uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                     (grapher::ActorContext::Self *)((char *)a3 + 4),
                     v38) = (uint32_t)(uintptr_t)(v23);
        if ( byte_20D5B50 != 0 )
          goto LABEL_46;
      }
      else
      {
        v21 = byte_20D5B50 == 0;
        *(uint32_t *)(*((uint32_t *)v20 + 5) + 4) = *((uint32_t *)a1 + 16);
        if ( !v21 )
        {
LABEL_46:
          grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
          return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
        }
      }
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
      {
        grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
        __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
      }
      goto LABEL_46;
    }
    v6 = (int *)*v5;
    v7 = (uint32_t *)v40[0];
    if ( (int *)*v5 != v5 )
    {
      if ( (uint32_t *)v40[0] == v40 )
      {
LABEL_9:
        if ( v37 != v6 )
        {
          while ( 1 )
          {
            v22 = (int *)*v6;
            sub_1901940(v6);
            sub_84BF80(v6 + 2, 0);
            opDelete(v6);
            if ( v37 == v22 )
              break;
            v6 = v22;
          }
        }
        goto LABEL_10;
      }
      while ( 1 )
      {
        v8 = v7[2];
        v9 = v8 + 12;
        if ( v8 == 0 )
          v9 = 0;
        sub_84BF80(v6 + 2, v9);
        v6 = (int *)*v6;
        v7 = (uint32_t *)*v7;
        if ( v37 == v6 )
          break;
        if ( v7 == v40 )
          goto LABEL_9;
      }
    }
    if ( v7 != v40 )
    {
      v39[0] = (uint32_t)(uintptr_t)(v39);
      v39[1] = (uint32_t)(uintptr_t)(v39);
      do
      {
        v27 = opNew(0xCu);
        if ( v27 != -8 )
        {
          *(uint32_t *)(v27 + 8) = 0;
          v28 = v7[2];
          v31 = v27;
          v29 = v28 + 12;
          if ( v28 == 0 )
            v29 = 0;
          sub_84BF80(v27 + 8, v29);
          v27 = v31;
        }
        sub_1901920(v27, v39);
        v7 = (uint32_t *)*v7;
      }
      while ( v7 != v40 );
      if ( (uint32_t *)v39[0] != v39 )
      {
        sub_19018A0(v37, v39[0], v39);
        v30 = (uint32_t *)v39[0];
        if ( (uint32_t *)v39[0] != v39 )
        {
          while ( 1 )
          {
            v32 = (uint32_t *)*v30;
            sub_84BF80(v30 + 2, 0);
            opDelete(v30);
            if ( v32 == v39 )
              break;
            v30 = v32;
          }
        }
      }
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_849B30  (binary VA: 0x849b30)
// Original: sub_849B30
// ----------------------------------------------------------------------------
int sub_849B30(int a1, ...)
{
  int *v1;
  int *v2;
  int *v3;
  int v4;
  int v6;
  va_list va;

  va_start(va, a1);
  v1 = sub_849360(g4_va_cast<int *>(va));
  v2 = (int *)*v1;
  v3 = v1;
  v6 = 0;
  if ( (int *)*v1 != v1 )
  {
    do
    {
      v4 = v2[2];
      if ( v4 != 0
        && (uint8_t)sub_C170A0(v2[2]) != 0
        && G4_VCALL<uint8_t>(v4, 208) == 0 )
      {
        v2 = (int *)*v2;
        ++v6;
      }
      else
      {
        v2 = (int *)*v2;
      }
    }
    while ( v3 != v2 );
  }
  return v6;
}

// ----------------------------------------------------------------------------
// Function: sub_849BA0  (binary VA: 0x849ba0)
// Original: sub_849BA0
// ----------------------------------------------------------------------------
int sub_849BA0(grapher::ActorBase::Self *a1, int a2, int a3, grapher::ActorContext::Self *a4)
{
  void (*v4)(int, int);
  int v5;
  grapher::ActorVariable::Self *Variable;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char *v12;
  uint32_t *v13;
  int i;
  grapher::ActorVariable::Self *v15;
  uint32_t *v16;
  int v17;
  int v18;
  int v19;
  int v20;
  grapher::ActorVariable::Self *v21;
  typedef char *_g4_t_s;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef void (*_g4_t_v27)(int);
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef void *_g4_t_obj;
  typedef grapher::ActorContext::Self *_g4_t_obja;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef grapher::ActorContext::Self *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint8_t _g4_t_v42[12];
  typedef void *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef char _g4_t_v46[284];
  enum : size_t {
    _g4_s0 = 432u,
    _g4_s1 = (4u + sizeof(_g4_t_s)) > _g4_s0 ? (4u + sizeof(_g4_t_s)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v24)) > _g4_s1 ? (16u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v25)) > _g4_s2 ? (20u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v26)) > _g4_s3 ? (20u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v27)) > _g4_s4 ? (24u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v28)) > _g4_s5 ? (24u + sizeof(_g4_t_v28)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v29)) > _g4_s6 ? (28u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v30)) > _g4_s7 ? (28u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v31)) > _g4_s8 ? (28u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_obj)) > _g4_s9 ? (32u + sizeof(_g4_t_obj)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_obja)) > _g4_s10 ? (32u + sizeof(_g4_t_obja)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v34)) > _g4_s11 ? (36u + sizeof(_g4_t_v34)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v35)) > _g4_s12 ? (36u + sizeof(_g4_t_v35)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v36)) > _g4_s13 ? (40u + sizeof(_g4_t_v36)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v37)) > _g4_s14 ? (40u + sizeof(_g4_t_v37)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v38)) > _g4_s15 ? (44u + sizeof(_g4_t_v38)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v39)) > _g4_s16 ? (48u + sizeof(_g4_t_v39)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v40)) > _g4_s17 ? (52u + sizeof(_g4_t_v40)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v41)) > _g4_s18 ? (56u + sizeof(_g4_t_v41)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v42)) > _g4_s19 ? (60u + sizeof(_g4_t_v42)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v43)) > _g4_s20 ? (72u + sizeof(_g4_t_v43)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v44)) > _g4_s21 ? (76u + sizeof(_g4_t_v44)) : _g4_s21,
    _g4_s23 = (80u + sizeof(_g4_t_v45)) > _g4_s22 ? (80u + sizeof(_g4_t_v45)) : _g4_s22,
    _g4_s24 = (84u + sizeof(_g4_t_v46)) > _g4_s23 ? (84u + sizeof(_g4_t_v46)) : _g4_s23
  };
  alignas(16) uint8_t _g4_sf[_g4_s24];
  _g4_t_s &s = *reinterpret_cast<_g4_t_s *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 20u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_obj &obj = *reinterpret_cast<_g4_t_obj *>(_g4_sf + 32u);
  _g4_t_obja &obja = *reinterpret_cast<_g4_t_obja *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 40u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 84u);

  v29 = *(uint32_t *)(*(uint32_t *)a2 + 308);
  (*(void (**)(uint8_t *, int))(*(uint32_t *)a3 + 52))(v42, a3);
  v27(a2);
  v4 = *(void (**)(int, int))(*(uint32_t *)a2 + 316);
  v5 = G4_VCALL<int>(a3, 56);
  v4(a2, v5);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 0);
  sub_837C70(&v39, (int)(uintptr_t)(a1), Variable, a4, v25, (int)(uintptr_t)(v27), v29, (int)(uintptr_t)(obj), v34, v36, v38);
  v7 = *((uint32_t *)a1 + 17);
  *((uint32_t *)a1 + 17) = v7 + 1;
  v24 = v7;
  sprintf(v46, "%s%d", v39);
  sub_C17C30(a2, v46);
  G4_VCALL<void>(a2, 40, 64, 0);
  v40 = 0;
  sub_84BF80(&v40, a2 + 12);
  v30 = sub_849360((int *)a1 + 15);
  v8 = opNew(0xCu);
  v9 = v8;
  if ( v8 != -8 )
  {
    v10 = v40;
    *(uint32_t *)(v8 + 8) = 0;
    s = (char *)(v8 + 8);
    v11 = 0;
    if ( v10 != 0 )
      v11 = v10 + 12;
    sub_84BF80(s, v11);
  }
  sub_1901920(v9, v30);
  sub_84BF80(&v40, 0);
  ++*((uint32_t *)a1 + 13);
  v12 = (char *)G4_VCALL<int>(a2, 44);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v41), v12, (int)(uintptr_t)(&v38) + 3);
  obja = a4;
  if ( a4 == nullptr )
  {
    obja = (grapher::ActorContext::Self *)&unk_20D6720;
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
  }
  v43 = nullptr;
  v44 = 0;
  v45 = 0;
  grapher::ActorBase::GetVariables(a1, 7, (int)(uintptr_t)(&v43));
  v13 = (uint32_t *)(v43);
  v31 = (v44 - (int)(uintptr_t)(v43)) >> 2;
  if ( v31 != 0 )
  {
    for ( i = 0; i != v31; ++i )
    {
      v15 = (grapher::ActorVariable::Self *)v13[i];
      if ( v15 != nullptr )
      {
        v16 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/Any.h"), 104);
        *v16 = (uint32_t)(uintptr_t)(&off_205C408);
        v16[1] = (uint32_t)(uintptr_t)(&dword_213B814);
        grapher::HolderT_string_e830be::From(v16, &v41);
        v17 = *((uint32_t *)v15 + 3);
        if ( v17 != 0 )
          *(uint8_t *)(v17 + 20) = 0;
        v18 = G4_VCALL<int>(v16, 48);
        v19 = *((uint32_t *)v15 + 1);
        *((uint32_t *)v15 + 1) = v18;
        if ( v19 != 0 )
          G4_VCALL<void>(v19, 44);
        G4_VCALL<void>(v16, 44);
        grapher::ActorContext::SaveAVar(obja, v15);
        v13 = (uint32_t *)(v43);
      }
    }
  }
  if ( v13 != nullptr )
    opDelete(v13);
  g4_std::string::Destroy(&v41);
  grapher::ActorBase::FireEvent(a1, 2, a4);
  v20 = *((uint32_t *)a1 + 13);
  v21 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
  if ( v20 >= (int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a1), v21, a4, v24, v26, v28, v31, (int)(uintptr_t)(obja), v35, v37, v38, v39)) )
  {
    grapher::ActorBase::FireEvent(a1, 1, a4);
    G4_VCALL<void>(a1, 28, a4);
  }
  return ((g4_std::string::Destroy(&v39)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: sub_849FA0_ea849fa0  (binary VA: 0x849fa0)
// Original: sub_849FA0
// ----------------------------------------------------------------------------
uint32_t * sub_849FA0_ea849fa0(grapher::ActorBase::Self *a1, int a2, uint32_t *a3)
{
  int *v3;
  int *v4;
  int v5;
  grapher::ActorVariable::Self *Variable;
  int v7;
  bool v8;
  uint32_t *v9;
  uint32_t *v10;
  uint32_t *result;
  uint32_t *v12;
  grapher::ActorVariable::Self *v13;
  grapher::ActorContext::Self *v14;
  grapher::ActorVariable::Self *v15;
  grapher::ActorVariable::Self *v16;
  grapher::ActorVariable::Self *v17;
  grapher::ActorContext::Self *v18;
  char *v19;
  void *v20;
  int v21;
  grapher::ActorVariable::Self *v22;
  uint8_t v23;
  uint8_t v24; // si
  int *v25;
  uint32_t *v26;
  typedef int _g4_t_v27;
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
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef grapher::ActorContext::Self *_g4_t_v67;
  typedef grapher::ActorContext::Self *_g4_t_v68;
  typedef grapher::ActorContext::Self *_g4_t_v69;
  typedef grapher::ActorContext::Self *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef char *_g4_t_v73;
  typedef int *_g4_t_v74;
  typedef int _g4_t_v75;
  typedef void *_g4_t_v76;
  typedef float _g4_t_v77[3];
  typedef float _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v28)) > _g4_s1 ? (0u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v29)) > _g4_s2 ? (0u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v30)) > _g4_s3 ? (0u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v31)) > _g4_s4 ? (0u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v32)) > _g4_s5 ? (4u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v33)) > _g4_s6 ? (4u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v34)) > _g4_s7 ? (4u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v35)) > _g4_s8 ? (4u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v36)) > _g4_s9 ? (4u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (8u + sizeof(_g4_t_v37)) > _g4_s10 ? (8u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (8u + sizeof(_g4_t_v38)) > _g4_s11 ? (8u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (8u + sizeof(_g4_t_v39)) > _g4_s12 ? (8u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (8u + sizeof(_g4_t_v40)) > _g4_s13 ? (8u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (8u + sizeof(_g4_t_v41)) > _g4_s14 ? (8u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (12u + sizeof(_g4_t_v42)) > _g4_s15 ? (12u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (12u + sizeof(_g4_t_v43)) > _g4_s16 ? (12u + sizeof(_g4_t_v43)) : _g4_s16,
    _g4_s18 = (12u + sizeof(_g4_t_v44)) > _g4_s17 ? (12u + sizeof(_g4_t_v44)) : _g4_s17,
    _g4_s19 = (12u + sizeof(_g4_t_v45)) > _g4_s18 ? (12u + sizeof(_g4_t_v45)) : _g4_s18,
    _g4_s20 = (12u + sizeof(_g4_t_v46)) > _g4_s19 ? (12u + sizeof(_g4_t_v46)) : _g4_s19,
    _g4_s21 = (16u + sizeof(_g4_t_v47)) > _g4_s20 ? (16u + sizeof(_g4_t_v47)) : _g4_s20,
    _g4_s22 = (16u + sizeof(_g4_t_v48)) > _g4_s21 ? (16u + sizeof(_g4_t_v48)) : _g4_s21,
    _g4_s23 = (16u + sizeof(_g4_t_v49)) > _g4_s22 ? (16u + sizeof(_g4_t_v49)) : _g4_s22,
    _g4_s24 = (16u + sizeof(_g4_t_v50)) > _g4_s23 ? (16u + sizeof(_g4_t_v50)) : _g4_s23,
    _g4_s25 = (16u + sizeof(_g4_t_v51)) > _g4_s24 ? (16u + sizeof(_g4_t_v51)) : _g4_s24,
    _g4_s26 = (20u + sizeof(_g4_t_v52)) > _g4_s25 ? (20u + sizeof(_g4_t_v52)) : _g4_s25,
    _g4_s27 = (20u + sizeof(_g4_t_v53)) > _g4_s26 ? (20u + sizeof(_g4_t_v53)) : _g4_s26,
    _g4_s28 = (20u + sizeof(_g4_t_v54)) > _g4_s27 ? (20u + sizeof(_g4_t_v54)) : _g4_s27,
    _g4_s29 = (20u + sizeof(_g4_t_v55)) > _g4_s28 ? (20u + sizeof(_g4_t_v55)) : _g4_s28,
    _g4_s30 = (20u + sizeof(_g4_t_v56)) > _g4_s29 ? (20u + sizeof(_g4_t_v56)) : _g4_s29,
    _g4_s31 = (24u + sizeof(_g4_t_v57)) > _g4_s30 ? (24u + sizeof(_g4_t_v57)) : _g4_s30,
    _g4_s32 = (24u + sizeof(_g4_t_v58)) > _g4_s31 ? (24u + sizeof(_g4_t_v58)) : _g4_s31,
    _g4_s33 = (24u + sizeof(_g4_t_v59)) > _g4_s32 ? (24u + sizeof(_g4_t_v59)) : _g4_s32,
    _g4_s34 = (24u + sizeof(_g4_t_v60)) > _g4_s33 ? (24u + sizeof(_g4_t_v60)) : _g4_s33,
    _g4_s35 = (24u + sizeof(_g4_t_v61)) > _g4_s34 ? (24u + sizeof(_g4_t_v61)) : _g4_s34,
    _g4_s36 = (28u + sizeof(_g4_t_v62)) > _g4_s35 ? (28u + sizeof(_g4_t_v62)) : _g4_s35,
    _g4_s37 = (28u + sizeof(_g4_t_v63)) > _g4_s36 ? (28u + sizeof(_g4_t_v63)) : _g4_s36,
    _g4_s38 = (28u + sizeof(_g4_t_v64)) > _g4_s37 ? (28u + sizeof(_g4_t_v64)) : _g4_s37,
    _g4_s39 = (28u + sizeof(_g4_t_v65)) > _g4_s38 ? (28u + sizeof(_g4_t_v65)) : _g4_s38,
    _g4_s40 = (28u + sizeof(_g4_t_v66)) > _g4_s39 ? (28u + sizeof(_g4_t_v66)) : _g4_s39,
    _g4_s41 = (32u + sizeof(_g4_t_v67)) > _g4_s40 ? (32u + sizeof(_g4_t_v67)) : _g4_s40,
    _g4_s42 = (32u + sizeof(_g4_t_v68)) > _g4_s41 ? (32u + sizeof(_g4_t_v68)) : _g4_s41,
    _g4_s43 = (32u + sizeof(_g4_t_v69)) > _g4_s42 ? (32u + sizeof(_g4_t_v69)) : _g4_s42,
    _g4_s44 = (32u + sizeof(_g4_t_v70)) > _g4_s43 ? (32u + sizeof(_g4_t_v70)) : _g4_s43,
    _g4_s45 = (36u + sizeof(_g4_t_v71)) > _g4_s44 ? (36u + sizeof(_g4_t_v71)) : _g4_s44,
    _g4_s46 = (40u + sizeof(_g4_t_v72)) > _g4_s45 ? (40u + sizeof(_g4_t_v72)) : _g4_s45,
    _g4_s47 = (44u + sizeof(_g4_t_v73)) > _g4_s46 ? (44u + sizeof(_g4_t_v73)) : _g4_s46,
    _g4_s48 = (48u + sizeof(_g4_t_v74)) > _g4_s47 ? (48u + sizeof(_g4_t_v74)) : _g4_s47,
    _g4_s49 = (63u + sizeof(_g4_t_v75)) > _g4_s48 ? (63u + sizeof(_g4_t_v75)) : _g4_s48,
    _g4_s50 = (68u + sizeof(_g4_t_v76)) > _g4_s49 ? (68u + sizeof(_g4_t_v76)) : _g4_s49,
    _g4_s51 = (72u + sizeof(_g4_t_v77)) > _g4_s50 ? (72u + sizeof(_g4_t_v77)) : _g4_s50,
    _g4_s52 = (84u + sizeof(_g4_t_v78)) > _g4_s51 ? (84u + sizeof(_g4_t_v78)) : _g4_s51,
    _g4_s53 = (88u + sizeof(_g4_t_v79)) > _g4_s52 ? (88u + sizeof(_g4_t_v79)) : _g4_s52,
    _g4_s54 = (92u + sizeof(_g4_t_v80)) > _g4_s53 ? (92u + sizeof(_g4_t_v80)) : _g4_s53,
    _g4_s55 = (96u + sizeof(_g4_t_v81)) > _g4_s54 ? (96u + sizeof(_g4_t_v81)) : _g4_s54
  };
  alignas(16) uint8_t _g4_sf[_g4_s55];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 4u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 4u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 12u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 12u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 16u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 16u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 20u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 20u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 20u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 20u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 24u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 24u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 28u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 32u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 32u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 44u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 48u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 63u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 72u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 84u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 88u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 92u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 96u);

  v73 = (char *)a1 + 56;
  sub_84BD50(a3, (char *)a1 + 56);
  sub_84BD50(a3, (char *)a1 + 60);
  v76 = *((void **)a1 + 15);
  v3 = sub_849360((int *)&v76);
  v4 = (int *)*v3;
  v74 = v3;
  v72 = 0;
  if ( (int *)*v3 != v3 )
  {
    do
    {
      v5 = v4[2];
      if ( v5 != 0
        && (uint8_t)sub_C170A0(v4[2]) != 0
        && G4_VCALL<uint8_t>(v5, 208) == 0 )
      {
        v4 = (int *)*v4;
        ++v72;
      }
      else
      {
        v4 = (int *)*v4;
      }
    }
    while ( v74 != v4 );
  }
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  if ( (int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a1), Variable, (grapher::ActorContext::Self *)a3, v27, v32, v37, v42, v47, v52, v57, v62, v67)) <= v72 )
  {
    v13 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    v14 = sub_837200((int)(uintptr_t)(a1), v13, (grapher::ActorContext::Self *)a3, v28, v33, v38, v43, v48, v53, v58, v63, v68);
    *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(v14);
    if ( (int)(uintptr_t)(v14) > 0 )
      goto LABEL_8;
LABEL_20:
    v15 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
    *((uint32_t *)a1 + 14) = (uint32_t)(uintptr_t)(sub_837200(
                             (int)(uintptr_t)(a1),
                             v15,
                             (grapher::ActorContext::Self *)a3,
                             v28,
                             v33,
                             v38,
                             v43,
                             v48,
                             v53,
                             v58,
                             v63,
                             v68));
    v16 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
    if ( (int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a1), v16, (grapher::ActorContext::Self *)a3, v29, v34, v39, v44, v49, v54, v59, v64, v69)) > v72 )
    {
      sub_84BD50(a3, (char *)a1 + 64);
      sub_84BD50(a3, (char *)a1 + 52);
      v71 = sub_846C40(a1, (grapher::ActorContext::Self *)a3);
      v17 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
      v18 = sub_837200((int)(uintptr_t)(a1), v17, (grapher::ActorContext::Self *)a3, v30, v35, v40, v45, v50, v55, v60, v65, v70);
      v19 = (char *)&unk_1B15112;
      if ( (int)(uintptr_t)(v18) >= 0 && (unsigned int)(uintptr_t)(v18) < dword_20D8F80 )
        v19 = (char *)sub_84B760(v18);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v75) + 1, v19, (int)(uintptr_t)(&v75));
      if ( byte_20D5110 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5110) != 0 )
      {
        sub_8F71A0(&unk_20D5118);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5110);
        __cxa_atexit((void (*)(void *))sub_8E88B0, &unk_20D5118, &unk_20D1280);
      }
      v20 = nullptr;
      if ( byte_20D511C == 0 )
        v20 = &unk_20D5118;
      v21 = (int)(uintptr_t)(sub_8F7270(v20, (char *)&v75 + 1));
      g4_std::string::Destroy((char *)&v75 + 1);
      v22 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 8);
      v23 = sub_837730((int)(uintptr_t)(a1), v22, (grapher::ActorContext::Self *)a3, v31, v36, v41, v46, v51, v56, v61);
      v78 = 0.0;
      v79 = 0.0;
      v80 = 0.0;
      v81 = 0.0;
      memset(v77, 0, sizeof(v77));
      v24 = v23;
      if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
      {
        sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
        __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
      }
      v25 = nullptr;
      if ( byte_20D4A64 == 0 )
        v25 = (int *)(&dword_20D4A60);
      v26 = sub_5C9D10((int)(uintptr_t)(v25), v21, v24, v77, v78, v79, v80, v81);
      if ( v26 != nullptr && v71 != 0 )
      {
        v66 = v26;
        sub_849BA0(a1, (int)(uintptr_t)(v26), v71, (grapher::ActorContext::Self *)a3);
        G4_VCALL<void>(v66, 356);
        sub_84BEC0(a3, (char *)a1 + 52);
        sub_84BEC0(a3, (char *)a1 + 64);
      }
    }
    goto LABEL_8;
  }
  v7 = *((uint32_t *)a1 + 14) - a2;
  v8 = *((uint32_t *)a1 + 14) == a2;
  *((uint32_t *)a1 + 14) = v7;
  if ( v7 < 0 || v8 )
    goto LABEL_20;
LABEL_8:
  v76 = (char *)a1 + 56;
  v9 = (uint32_t *)a3[3];
  if ( v9 == nullptr )
    goto LABEL_18;
  v10 = a3 + 2;
  do
  {
    while ( (unsigned int)(uintptr_t)(v73) <= v9[4] )
    {
      v10 = v9;
      v9 = (uint32_t *)v9[2];
      if ( v9 == nullptr )
        goto LABEL_13;
    }
    v9 = (uint32_t *)v9[3];
  }
  while ( v9 != nullptr );
LABEL_13:
  if ( a3 + 2 == v10 || (unsigned int)(uintptr_t)(v73) < v10[4] )
  {
LABEL_18:
    v12 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v12 = (uint32_t)(uintptr_t)(&off_205CD10);
    v12[1] = *((uint32_t *)a1 + 14);
    result = (uint32_t *)g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
                         (std::map<void *,grapher::ActorContext::ICVar *> *)(a3 + 1),
                         &v76);
    *result = (uint32_t)(uintptr_t)(v12);
  }
  else
  {
    result = (uint32_t *)v10[5];
    result[1] = *((uint32_t *)a1 + 14);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_84A4A0_ea84a4a0  (binary VA: 0x84a4a0)
// Original: sub_84A4A0
// ----------------------------------------------------------------------------
void sub_84A4A0_ea84a4a0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  uint32_t *i;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  int *v8;
  grapher::ActorContext::Self *j;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v11;
  grapher::ActorVariable::Self *v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
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
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef grapher::ActorContext::Self *_g4_t_v37;
  typedef grapher::ActorContext::Self *_g4_t_v38;
  typedef grapher::ActorContext::Self *_g4_t_v39;
  typedef grapher::ActorContext::Self *_g4_t_v40;
  typedef float _g4_t_v41;
  typedef uint32_t *_g4_t_v42;
  typedef float _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t _g4_t_v45[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v16)) > _g4_s3 ? (16u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v17)) > _g4_s4 ? (16u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v18)) > _g4_s5 ? (16u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v19)) > _g4_s6 ? (20u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v20)) > _g4_s7 ? (20u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v21)) > _g4_s8 ? (20u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v22)) > _g4_s9 ? (24u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v23)) > _g4_s10 ? (24u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v24)) > _g4_s11 ? (24u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v25)) > _g4_s12 ? (28u + sizeof(_g4_t_v25)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v26)) > _g4_s13 ? (28u + sizeof(_g4_t_v26)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v27)) > _g4_s14 ? (28u + sizeof(_g4_t_v27)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v28)) > _g4_s15 ? (32u + sizeof(_g4_t_v28)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v29)) > _g4_s16 ? (32u + sizeof(_g4_t_v29)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v30)) > _g4_s17 ? (32u + sizeof(_g4_t_v30)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v31)) > _g4_s18 ? (36u + sizeof(_g4_t_v31)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v32)) > _g4_s19 ? (36u + sizeof(_g4_t_v32)) : _g4_s19,
    _g4_s21 = (36u + sizeof(_g4_t_v33)) > _g4_s20 ? (36u + sizeof(_g4_t_v33)) : _g4_s20,
    _g4_s22 = (40u + sizeof(_g4_t_v34)) > _g4_s21 ? (40u + sizeof(_g4_t_v34)) : _g4_s21,
    _g4_s23 = (40u + sizeof(_g4_t_v35)) > _g4_s22 ? (40u + sizeof(_g4_t_v35)) : _g4_s22,
    _g4_s24 = (40u + sizeof(_g4_t_v36)) > _g4_s23 ? (40u + sizeof(_g4_t_v36)) : _g4_s23,
    _g4_s25 = (44u + sizeof(_g4_t_v37)) > _g4_s24 ? (44u + sizeof(_g4_t_v37)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v38)) > _g4_s25 ? (44u + sizeof(_g4_t_v38)) : _g4_s25,
    _g4_s27 = (44u + sizeof(_g4_t_v39)) > _g4_s26 ? (44u + sizeof(_g4_t_v39)) : _g4_s26,
    _g4_s28 = (44u + sizeof(_g4_t_v40)) > _g4_s27 ? (44u + sizeof(_g4_t_v40)) : _g4_s27,
    _g4_s29 = (48u + sizeof(_g4_t_v41)) > _g4_s28 ? (48u + sizeof(_g4_t_v41)) : _g4_s28,
    _g4_s30 = (64u + sizeof(_g4_t_v42)) > _g4_s29 ? (64u + sizeof(_g4_t_v42)) : _g4_s29,
    _g4_s31 = (64u + sizeof(_g4_t_v43)) > _g4_s30 ? (64u + sizeof(_g4_t_v43)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v44)) > _g4_s31 ? (92u + sizeof(_g4_t_v44)) : _g4_s31,
    _g4_s33 = (96u + sizeof(_g4_t_v45)) > _g4_s32 ? (96u + sizeof(_g4_t_v45)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 32u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 64u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 92u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);

  v45[0] = (uint32_t)(uintptr_t)(v45);
  v45[1] = (uint32_t)(uintptr_t)(v45);
  sub_8392C0(a1, 1, (int)(uintptr_t)(v45), (int)(uintptr_t)(a3));
  if ( a2 != 0 )
  {
    for ( i = (uint32_t *)v45[0]; i != v45; i = (uint32_t *)*i )
    {
      v4 = i[2];
      if ( v4 != 0 )
      {
        v42 = i;
        sub_9A5700(v4);
        i = v42;
      }
    }
  }
  else
  {
    v7 = sub_857260(a1, 0, a3);
    v44 = v7;
    if ( v7 != 0 )
    {
      v8 = (int *)G4_VCALL<int>(v7, 16);
      if ( v8 != nullptr )
      {
        if ( v8 == (int *)(uintptr_t)(&dword_20D75F0) )
        {
LABEL_18:
          for ( j = (grapher::ActorContext::Self *)v45[0]; j != (grapher::ActorContext::Self *)v45; j = *(grapher::ActorContext::Self **)j )
          {
            if ( *((uint32_t *)j + 2) != 0 )
            {
              v37 = j;
              Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
              *(float *)&v35 = sub_838060((int)(uintptr_t)(a1), Variable, a3, v13, v16, v19, v22, v25, v28, v31, v34, v37);
              v41 = *(float *)&v35;
              v11 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
              *(float *)&v36 = sub_838060((int)(uintptr_t)(a1), v11, a3, v14, v17, v20, v23, v26, v29, v32, v35, v38);
              v43 = *(float *)&v36;
              v12 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
              *(float *)&v34 = sub_838060((int)(uintptr_t)(a1), v12, a3, v15, v18, v21, v24, v27, v30, v33, v36, v39);
              sub_9A5730(*((uint32_t *)v40 + 2), v44, (int)*(float *)&v34, (int)v43, (int)v41);
              j = v40;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v8 = (int *)v8[1];
            if ( v8 == nullptr )
              break;
            if ( v8 == (int *)(uintptr_t)(&dword_20D75F0) )
              goto LABEL_18;
          }
        }
      }
    }
  }
  grapher::ActorBase::FireEvent(a1, 2, a3);
  v5 = (uint32_t *)v45[0];
  if ( (uint32_t *)v45[0] != v45 )
  {
    while ( 1 )
    {
      v6 = (uint32_t *)*v5;
      opDelete(v5);
      if ( v6 == v45 )
        break;
      v5 = v6;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_84A690_ea84a690  (binary VA: 0x84a690)
// Original: sub_84A690
// ----------------------------------------------------------------------------
int sub_84A690_ea84a690(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int *v5;
  int v6;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v8;
  grapher::ActorVariable::Self *v9;
  float v10; // xmm0_4
  char v11;
  char v12;
  uint32_t *v13;
  void *v14;
  int v16;
  int v17;
  char v18;
  uint32_t *v19;
  void *v20;
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
  int v32;
  int v33;
  int v34;
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
  grapher::ActorContext::Self *v45;
  grapher::ActorContext::Self *v46;
  grapher::ActorContext::Self *v47;
  float v48;
  float v49;
  int v50;
  grapher::ActorContext::Self *v51;

  if ( dword_20D6790 != 0 )
    sub_844460();
  v3 = sub_857260(a1, 0, a3);
  v4 = v3;
  if ( v3 == 0 || (v5 = (int *)G4_VCALL<int>(v3, 16)) == nullptr )
  {
LABEL_9:
    v6 = 0;
    goto LABEL_10;
  }
  while ( v5 != (int *)(uintptr_t)(&dword_20D7680) )
  {
    v5 = (int *)v5[1];
    if ( v5 == nullptr )
      goto LABEL_9;
  }
  v6 = v4 - 100;
LABEL_10:
  v50 = sub_857260(a1, 1, a3);
  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
  v49 = (float)(int)(uintptr_t)(uintptr_t)(sub_837200((int)(uintptr_t)(a1), Variable, a3, v21, v24, v27, v30, v33, v36, v39, v42, v45));
  v8 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
  v51 = sub_837200((int)(uintptr_t)(a1), v8, a3, v22, v25, v28, v31, v34, v37, v40, v43, v46);
  v9 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 4);
  v48 = sub_838060((int)(uintptr_t)(a1), v9, a3, v23, v26, v29, v32, v35, v38, v41, v44, v47);
  v10 = v48;
  if ( v48 == 0.0 )
    v10 = 1.0;
  v11 = byte_20D4E40;
  if ( v6 != 0 )
  {
    if ( byte_20D4E40 == 0 )
    {
      v17 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40);
      v11 = byte_20D4E40;
      if ( v17 != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
        v11 = byte_20D4E40;
      }
    }
    v12 = byte_20D4E64;
    v13 = nullptr;
    if ( byte_20D4E64 == 0 )
      v13 = (uint32_t *)(&unk_20D4E60);
    v13[11] = v6;
    if ( v11 == 0 )
    {
      v16 = _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40);
      v12 = byte_20D4E64;
      if ( v16 != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
        v12 = byte_20D4E64;
      }
    }
    v14 = nullptr;
    if ( v12 == 0 )
      v14 = &unk_20D4E60;
    sub_9CB030(v14, 3, v50, LODWORD(v49), 0, 1, v51, LODWORD(v10));
  }
  else
  {
    if ( byte_20D4E40 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      }
      v11 = byte_20D4E40;
    }
    v18 = byte_20D4E64;
    v19 = nullptr;
    if ( byte_20D4E64 == 0 )
      v19 = (uint32_t *)(&unk_20D4E60);
    v19[11] = 0;
    if ( v11 == 0 )
    {
      if ( _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4E40) != 0 )
      {
        sub_9C9CC0(&unk_20D4E60);
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4E40);
        __cxa_atexit((void (*)(void *))sub_992750, &unk_20D4E60, &unk_20D1280);
      }
      v18 = byte_20D4E64;
    }
    v20 = nullptr;
    if ( v18 == 0 )
      v20 = &unk_20D4E60;
    sub_9CE370(v20, LODWORD(v49));
  }
  if ( byte_20D5B50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D5B50) != 0 )
  {
    grapher::ActorManager::Construct((grapher::ActorManager::Self *)&unk_20D5B60);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D5B50);
    __cxa_atexit((void (*)(void *))g4_noop_dtor, &unk_20D5B60, &unk_20D1280);
  }
  grapher::ActorManager::AddIntoUpdateList((grapher::ActorManager::Self *)&unk_20D5B60, a1, a3);
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_84AAD0  (binary VA: 0x84aad0)
// Original: sub_84AAD0
// ----------------------------------------------------------------------------
void sub_84AAD0(grapher::ActorContext::Self *a1, grapher::ActorBase::Self *a2, int a3)
{
  grapher::ActorVariable::Self *Variable;
  char v4; // bp
  grapher::ActorVariable::Self *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  float v8;
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
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  grapher::ActorContext::Self *v40;
  grapher::ActorContext::Self *v41;

  Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 3);
  v4 = sub_837730((int)(uintptr_t)(a2), Variable, nullptr, v9, v13, v17, v21, v25, v29, v33);
  v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 1);
  v8 = sub_838060((int)(uintptr_t)(a2), v5, nullptr, v10, v14, v18, v22, v26, v30, v34, v37, a1);
  sub_983620(a3, LODWORD(v8), v4);
  v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 2);
  *(float *)&v28 = sub_838060((int)(uintptr_t)(a2), v6, nullptr, v11, v15, v19, v23, v27, v31, v35, v38, v40);
  if ( *(float *)&v28 != -1.0 )
  {
    v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a2, 2);
    *(float *)(a3 + 4852) = sub_838060((int)(uintptr_t)(a2), v7, nullptr, v12, v16, v20, v24, v28, v32, v36, v39, v41);
  }
}

// ----------------------------------------------------------------------------
// Function: sub_84ABD0_ea84abd0  (binary VA: 0x84abd0)
// Original: sub_84ABD0
// ----------------------------------------------------------------------------
void sub_84ABD0_ea84abd0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  void **v3;
  grapher::ActorVariable::Self *Variable;
  grapher::ActorVariable::Self *v5;
  grapher::ActorVariable::Self *v6;
  grapher::ActorVariable::Self *v7;
  long double v8; // fst7
  float *v9;
  void ***v10;
  void **v11;
  typedef float _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
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
  typedef int _g4_t_v35;
  typedef void *_g4_t_v36;
  typedef void **_g4_t_v37;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v15)) > _g4_s3 ? (12u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v16)) > _g4_s4 ? (16u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v17)) > _g4_s5 ? (16u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v18)) > _g4_s6 ? (16u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v19)) > _g4_s7 ? (20u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v20)) > _g4_s8 ? (20u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v21)) > _g4_s9 ? (20u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v22)) > _g4_s10 ? (24u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v23)) > _g4_s11 ? (24u + sizeof(_g4_t_v23)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v24)) > _g4_s12 ? (24u + sizeof(_g4_t_v24)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v25)) > _g4_s13 ? (24u + sizeof(_g4_t_v25)) : _g4_s13,
    _g4_s15 = (24u + sizeof(_g4_t_v26)) > _g4_s14 ? (24u + sizeof(_g4_t_v26)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v27)) > _g4_s15 ? (28u + sizeof(_g4_t_v27)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v28)) > _g4_s16 ? (28u + sizeof(_g4_t_v28)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v29)) > _g4_s17 ? (28u + sizeof(_g4_t_v29)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v30)) > _g4_s18 ? (32u + sizeof(_g4_t_v30)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v31)) > _g4_s19 ? (32u + sizeof(_g4_t_v31)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v32)) > _g4_s20 ? (32u + sizeof(_g4_t_v32)) : _g4_s20,
    _g4_s22 = (36u + sizeof(_g4_t_v33)) > _g4_s21 ? (36u + sizeof(_g4_t_v33)) : _g4_s21,
    _g4_s23 = (36u + sizeof(_g4_t_v34)) > _g4_s22 ? (36u + sizeof(_g4_t_v34)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v35)) > _g4_s23 ? (36u + sizeof(_g4_t_v35)) : _g4_s23,
    _g4_s25 = (40u + sizeof(_g4_t_v36)) > _g4_s24 ? (40u + sizeof(_g4_t_v36)) : _g4_s24,
    _g4_s26 = (44u + sizeof(_g4_t_v37)) > _g4_s25 ? (44u + sizeof(_g4_t_v37)) : _g4_s25
  };
  alignas(16) uint8_t _g4_sf[_g4_s26];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 16u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 16u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);

  v36 = &v36;
  v37 = &v36;
  sub_8392C0(a1, 0, (int)(uintptr_t)(&v36), (int)(uintptr_t)(a3));
  v3 = (void **)v36;
  if ( v36 != &v36 )
  {
    do
    {
      while ( 1 )
      {
        v9 = (float *)v3[2];
        if ( a2 != 1 )
          break;
        sub_983620(v9, 0, 0);
        v3 = (void **)*v3;
        if ( v3 == &v36 )
          goto LABEL_10;
      }
      if ( a2 == 2 )
      {
        if ( v9[1210] <= 0.0 )
        {
LABEL_5:
          v22 = (int)(uintptr_t)(v3[2]);
          Variable = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 3);
          HIBYTE(v28) = sub_837730((int)(uintptr_t)(a1), Variable, nullptr, v13, v16, v19, v22, v27, v30, v33);
          v5 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 1);
          v12 = sub_838060(
                  (int)(uintptr_t)(a1),
                  v5,
                  nullptr,
                  v14,
                  v17,
                  v20,
                  v23,
                  v28,
                  v31,
                  v34,
                  (int)(uintptr_t)(v36),
                  (grapher::ActorContext::Self *)v37);
          sub_983620(v24, LODWORD(v12), SHIBYTE(v29));
          v6 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
          *(float *)&v19 = sub_838060(
                             (int)(uintptr_t)(a1),
                             v6,
                             nullptr,
                             v15,
                             v18,
                             v21,
                             v24,
                             v29,
                             v32,
                             v35,
                             (int)(uintptr_t)(v36),
                             (grapher::ActorContext::Self *)v37);
          if ( *(float *)&v19 != -1.0 )
          {
            v7 = (grapher::ActorVariable::Self *)grapher::ActorBase::GetVariable(a1, 2);
            v8 = sub_838060(
                   (int)(uintptr_t)(a1),
                   v7,
                   nullptr,
                   v13,
                   v16,
                   v19,
                   v25,
                   v27,
                   v30,
                   v33,
                   (int)(uintptr_t)(v36),
                   (grapher::ActorContext::Self *)v37);
            *(float *)(v26 + 4852) = v8;
          }
          goto LABEL_7;
        }
        sub_983620(v9, 0, 0);
      }
      else if ( a2 == 0 )
      {
        goto LABEL_5;
      }
LABEL_7:
      v3 = (void **)*v3;
    }
    while ( v3 != &v36 );
  }
LABEL_10:
  grapher::ActorBase::FireEvent(a1, 3, a3);
  v10 = (void ***)v36;
  if ( v36 != &v36 )
  {
    while ( 1 )
    {
      v11 = *v10;
      opDelete(v10);
      if ( v11 == &v36 )
        break;
      v10 = (void ***)v11;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_84ADB0_ea84adb0  (binary VA: 0x84adb0)
// Original: sub_84ADB0
// ----------------------------------------------------------------------------
void sub_84ADB0_ea84adb0(int a1, int a2)
{
  int *v2;
  int *v3;
  int *v4;
  int *v5;
  uint32_t *v6;
  int *v7;
  int v8;
  int *v9;
  int *v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  int *v15;
  int *v16;
  void *v17;
  int *v18;
  int *v19;

  if ( dword_20DA2A0 != 0 )
    return;
  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  if ( dword_20D6738 == 0 )
    return;
  sub_84BD50(a2, a1 + 60);
  v2 = sub_849360((int *)(a1 + 60));
  v3 = (int *)*v2;
  v4 = v2;
  if ( (int *)*v2 != v2 )
  {
    do
    {
      v6 = (uint32_t *)v3[2];
      if ( v6 != nullptr )
      {
        G4_VCALL<void>(v6, 40, 32, 1);
        if ( byte_20D4A50 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4A50) != 0 )
        {
          sub_5B3AF0((int)(uintptr_t)(&dword_20D4A60));
          _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4A50);
          __cxa_atexit((void (*)(void *))sub_5ABAF0, &dword_20D4A60, &unk_20D1280);
        }
        v5 = nullptr;
        if ( byte_20D4A64 == 0 )
          v5 = (int *)(&dword_20D4A60);
        sub_5D8870((int)(uintptr_t)(v5), v6, 1);
      }
      v3 = (int *)*v3;
    }
    while ( v4 != v3 );
  }
  if ( dword_20D67B8 == 0 )
  {
    v19 = (int *)(&dword_20D67B4);
    v9 = (int *)(&dword_20D67B4);
    goto LABEL_25;
  }
  v7 = (int *)dword_20D67B8;
  v8 = *(uint32_t *)(a1 + 60);
  v9 = (int *)(&dword_20D67B4);
  while ( v7[4] < v8 )
  {
    v7 = (int *)v7[3];
LABEL_18:
    if ( v7 == nullptr )
    {
      v19 = v9;
      goto LABEL_25;
    }
  }
  if ( v7[4] > v8 )
  {
    v9 = v7;
    v7 = (int *)v7[2];
    goto LABEL_18;
  }
  v15 = (int *)v7[3];
  v16 = (int *)v7[2];
  v19 = v9;
  if ( v15 != nullptr )
  {
    do
    {
      if ( v15[4] > v8 )
      {
        v9 = v15;
        v15 = (int *)v15[2];
      }
      else
      {
        v15 = (int *)v15[3];
      }
    }
    while ( v15 != nullptr );
    v19 = v9;
  }
  v9 = v7;
  while ( v16 != nullptr )
  {
    while ( v16[4] >= v8 )
    {
      v9 = v16;
      v16 = (int *)v16[2];
      if ( v16 == nullptr )
        goto LABEL_25;
    }
    v16 = (int *)v16[3];
  }
LABEL_25:
  if ( (int *)dword_20D67BC == v9 && v19 == (int *)(uintptr_t)(&dword_20D67B4) )
  {
    g4_std::Rb_tree_int_pair_int_const_list_277118::M_erase(
      (int)(uintptr_t)(v19 - 1),
      (void *)dword_20D67B8);
    dword_20D67B8 = 0;
    dword_20D67BC = (int)(uintptr_t)(v19);
    dword_20D67C0 = (int)(uintptr_t)(v19);
    dword_20D67C4 = 0;
  }
  else if ( v19 != v9 )
  {
    while ( 1 )
    {
      v10 = (int *)sub_19048E0(v9);
      v11 = (uint32_t *)sub_1904AE0(v9, &dword_20D67B4);
      v12 = (uint32_t *)v11[5];
      v17 = v11;
      if ( v12 != v11 + 5 )
      {
        v18 = v10;
        v13 = v11 + 5;
        while ( 1 )
        {
          v14 = (uint32_t *)*v12;
          sub_84BF80(v12 + 2, 0);
          opDelete(v12);
          if ( v14 == v13 )
            break;
          v12 = v14;
        }
        v10 = v18;
      }
      opDelete(v17);
      --*(uint32_t *)(&reinterpret_cast<G4Elf32Sym *>(stru_1C7C4)->st_info + (uint32_t)(uintptr_t)(&dword_20B9FF4));
      if ( v19 == v10 )
        break;
      v9 = v10;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_84B0E0  (binary VA: 0x84b0e0)
// Original: sub_84B0E0
// ----------------------------------------------------------------------------
uint32_t * sub_84B0E0(uint32_t *a1, int a2, int *a3, int *a4)
{
  uint32_t *v4;
  int v5;
  int *v6;
  uint32_t *v7;
  uint32_t *i;
  char v11;

  if ( a2 != 0 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 1;
    if ( a3 != (int *)(uintptr_t)(&dword_20D7CDC) )
      v11 = *a4 < (unsigned int)a3[4];
  }
  v4 = (uint32_t *)opNew(0x2Cu);
  if ( v4 != (uint32_t *)-16 )
  {
    v5 = *a4;
    v4[6] = 0;
    v4[4] = v5;
    v4[7] = 0;
    v4[10] = 0;
    v4[8] = (uint32_t)(uintptr_t)(v4 + 6);
    v4[9] = (uint32_t)(uintptr_t)(v4 + 6);
    v6 = (int *)a4[3];
    if ( v6 != nullptr )
    {
      v7 = g4_std::Rb_tree_unsigned_int_pair_unsign_cdf969::M_copy(
             (int)(uintptr_t)(v4 + 5),
             v6,
             (int)(uintptr_t)(v4 + 6));
      v4[7] = (uint32_t)(uintptr_t)(v7);
      for ( i = v7; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      v4[8] = (uint32_t)(uintptr_t)(i);
      while ( v7[3] != 0 )
        v7 = (uint32_t *)v7[3];
      v4[9] = (uint32_t)(uintptr_t)(v7);
      v4[10] = a4[6];
    }
  }
  sub_1904970(v11, v4, a3, &dword_20D7CDC);
  ++dword_20D7CEC;
  *a1 = (uint32_t)(uintptr_t)(v4);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_84B200  (binary VA: 0x84b200)
// Original: sub_84B200
// ----------------------------------------------------------------------------
int sub_84B200(int a1, int *a2)
{
  int *v3;
  unsigned int v4;
  int *v5;
  char v6; // bp
  unsigned int v7;
  int v9;
  typedef int *_g4_t_v11;
  typedef uint32_t _g4_t_v12[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v11)) > _g4_s0 ? (8u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v12)) > _g4_s1 ? (12u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);

  v3 = (int *)dword_20D7CE0;
  if ( dword_20D7CE0 == 0 )
  {
    v3 = (int *)(&dword_20D7CDC);
    goto LABEL_10;
  }
  v4 = *a2;
  while ( 1 )
  {
    v7 = v3[4];
    if ( v7 <= v4 )
      break;
    v5 = (int *)v3[2];
    v6 = 1;
    if ( v5 == nullptr )
      goto LABEL_7;
LABEL_4:
    v3 = v5;
  }
  v5 = (int *)v3[3];
  v6 = 0;
  if ( v5 != nullptr )
    goto LABEL_4;
LABEL_7:
  v11 = v3;
  if ( v6 == 0 )
  {
    if ( v4 <= v7 )
      goto LABEL_9;
LABEL_12:
    sub_84B0E0(v12, 0, v11, a2);
LABEL_13:
    v9 = v12[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v9;
    return a1;
  }
LABEL_10:
  if ( (int *)dword_20D7CE4 == v3 )
  {
    sub_84B0E0(v12, 0, v3, a2);
    goto LABEL_13;
  }
  v11 = v3;
  v3 = (int *)sub_19048F0(v3);
  if ( *a2 > (unsigned int)v3[4] )
    goto LABEL_12;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v3);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_84B2E0_ea84b2e0  (binary VA: 0x84b2e0)
// Original: sub_84B2E0
// ----------------------------------------------------------------------------
int sub_84B2E0_ea84b2e0(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  int v3;
  int v4;
  int v6;
  int *v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  int *v13;
  int v14;
  int *v15;

  switch ( a2 )
  {
    case 1:
      v10 = sub_8F0680(v3);
      sub_8E9510(v10, 1);
      *(uint8_t *)(sub_8F0680(v11) + 1090) = 0;
      v12 = sub_5A5890("Cover", 0x4651FFB5u);
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v13 = nullptr;
      if ( byte_20D49A8 == 0 )
        v13 = (int *)(&dword_20D49A0);
      sub_835950((int)(uintptr_t)(v13), v12, 0, 0);
      v14 = sub_5A5890("Cover", 0x4651FFB5u);
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v15 = nullptr;
      if ( byte_20D49A8 == 0 )
        v15 = (int *)(&dword_20D49A0);
      sub_835950((int)(uintptr_t)(v15), v14, 1, 0);
      break;
    case 2:
      *(uint8_t *)(sub_8F0680(v3) + 1090) = 1;
      v6 = sub_5A5890("Cover", 0x4651FFB5u);
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v7 = nullptr;
      if ( byte_20D49A8 == 0 )
        v7 = (int *)(&dword_20D49A0);
      sub_835950((int)(uintptr_t)(v7), v6, 1, 1);
      v8 = sub_5A5890("Cover", 0x4651FFB5u);
      if ( byte_20D4980 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D4980) != 0 )
      {
        sub_82DAB0((int)(uintptr_t)(&dword_20D49A0));
        _cxa_guard_release((g4_cxa_guard_t *)&byte_20D4980);
        __cxa_atexit((void (*)(void *))sub_835490, &dword_20D49A0, &unk_20D1280);
      }
      v9 = nullptr;
      if ( byte_20D49A8 == 0 )
        v9 = (int *)(&dword_20D49A0);
      sub_835950((int)(uintptr_t)(v9), v8, 0, 1);
      break;
    case 0:
      v4 = sub_8F0680(v3);
      sub_8E9510(v4, 1);
      break;
    default:
      break;
  }
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 3, a3));
}

// ----------------------------------------------------------------------------
// Function: sub_84B620  (binary VA: 0x84b620)
// Original: sub_84B620
// ----------------------------------------------------------------------------
uint32_t * sub_84B620(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_84B640_ea84b640  (binary VA: 0x84b640)
// Original: sub_84B640
// ----------------------------------------------------------------------------
uint32_t * sub_84B640_ea84b640(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sub_84B660_ea84b660  (binary VA: 0x84b660)
// Original: sub_84B660
// ----------------------------------------------------------------------------
void sub_84B660_ea84b660(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_84B690  (binary VA: 0x84b690)
// Original: sub_84B690
// ----------------------------------------------------------------------------
void sub_84B690(uint32_t *a1)
{
  *a1 = (uint32_t)(uintptr_t)(&off_205CD00);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: g4_std::list_ActorGameCharacterState_fcbfea::Destroy  (binary VA: 0x84b6c0)
// Original: std::list<ActorGameCharacterState::CharacterState,GameAllocator<ActorGameCharacterState::CharacterState>>::~list
// ----------------------------------------------------------------------------
void g4_std::list_ActorGameCharacterState_fcbfea::Destroy(std::list<ActorGameCharacterState::CharacterState, GameAllocator<ActorGameCharacterState::CharacterState>> *self)
{
  std::list<ActorGameCharacterState::CharacterState, GameAllocator<ActorGameCharacterState::CharacterState>> *v1;
  std::list<ActorGameCharacterState::CharacterState, GameAllocator<ActorGameCharacterState::CharacterState>> *v2;

  v1 = *(std::list<ActorGameCharacterState::CharacterState, GameAllocator<ActorGameCharacterState::CharacterState>> **)self;
  if ( *(std::list<ActorGameCharacterState::CharacterState, GameAllocator<ActorGameCharacterState::CharacterState>> **)self != self )
  {
    while ( 1 )
    {
      v2 = *(std::list<ActorGameCharacterState::CharacterState, GameAllocator<ActorGameCharacterState::CharacterState>> **)v1;
      if ( *((uint32_t *)v1 + 3) != 0 )
        sub_4EB870(*((uint32_t *)v1 + 3));
      sub_4EB870((int)(uintptr_t)(v1));
      if ( v2 == self )
        break;
      v1 = v2;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sub_84B710  (binary VA: 0x84b710)
// Original: sub_84B710
// ----------------------------------------------------------------------------
int sub_84B710(uint32_t **a1)
{
  int result;
  volatile int32_t *v2;

  result = (int)(uintptr_t)(a1);
  if ( *a1 != nullptr )
  {
    v2 = (volatile int32_t *)((uint32_t *)((char *)*a1 + *(uint32_t *)(**a1 - 16)));
    result = __sync_fetch_and_add(v2 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      G4_VCALL<void>(v2, 8);
      return G4_VCALL<int>(v2, 4);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_84B760  (binary VA: 0x84b760)
// Original: sub_84B760
// ----------------------------------------------------------------------------
const char * sub_84B760(int a1)
{
  const char *result;

  switch ( a1 )
  {
    case 0:
      result = "SpawnGroup_FPP";
      break;
    case 1:
      result = "SpawnGroup_Bank_Public";
      break;
    case 2:
      result = "SpawnGroup_Bank_Office";
      break;
    case 3:
      result = "SpawnGroup_Cop_Drivers_Beige";
      break;
    case 4:
      result = "SpawnGroup_Cop_Drivers";
      break;
    case 5:
      result = "SpawnGroup_Military_Drivers";
      break;
    case 6:
      result = "SpawnGroup_CopPilot";
      break;
    case 7:
      result = "SpawnGroup_MilitaryPilots";
      break;
    case 8:
      result = "SpawnGroup_Bike_NPC_Drivers";
      break;
    case 9:
      result = "SpawnGroup_Bike_Drivers";
      break;
    case 10:
      result = "SpawnGroup_Goon_Drivers";
      break;
    case 11:
      result = "SpawnGroup_Thugs_Drivers";
      break;
    case 12:
      result = "SpawnGroup_Latino_Drivers";
      break;
    case 13:
      result = "SpawnGroup_Generic_Drivers";
      break;
    case 14:
      result = "SpawnGroup_HighValue_Drivers";
      break;
    case 15:
      result = "SpawnGroup_HighValue_Drivers_Suitcase";
      break;
    case 16:
      result = "SpawnGroup_HighValue_Drivers_Clothing";
      break;
    case 17:
      result = "SpawnGroup_HighValue_Drivers_Weapon";
      break;
    case 18:
      result = "SpawnGroup_HighValue_Drivers_Vehicle";
      break;
    case 19:
      result = "SpawnGroup_Casino";
      break;
    case 20:
      result = "SpawnGroup_NightClub";
      break;
    case 21:
      result = "SpawnGroup_NightClubDancer";
      break;
    case 22:
      result = "SpawnGroup_StripClub";
      break;
    case 23:
      result = "SpawnGroup_StripClubBar";
      break;
    case 24:
      result = "SpawnGroup_StripClub_VIP";
      break;
    case 25:
      result = "SpawnGroup_Diner";
      break;
    case 26:
      result = "SpawnGroup_Swimmers";
      break;
    case 27:
      result = "SpawnGroup_Airport";
      break;
    case 28:
      result = "SpawnGroup_ArmyBase";
      break;
    case 29:
      result = "SpawnGroup_Downtown";
      break;
    case 30:
      result = "SpawnGroup_Downtown_Fremont";
      break;
    case 31:
      result = "SpawnGroup_Construction";
      break;
    case 32:
      result = "SpawnGroup_Government";
      break;
    case 33:
      result = "SpawnGroup_Industrial";
      break;
    case 34:
      result = "SpawnGroup_Mine";
      break;
    case 35:
      result = "SpawnGroup_PoorResidential";
      break;
    case 36:
      result = "SpawnGroup_RichResidential";
      break;
    case 37:
      result = "SpawnGroup_Strip";
      break;
    case 38:
      result = "SpawnGroup_Trailer";
      break;
    case 39:
      result = "SpawnGroup_UberDam";
      break;
    case 40:
      result = "SpawnGroup_VehicleFPP";
      break;
    case 41:
      result = "SpawnGroup_VehicleAirport";
      break;
    case 42:
      result = "SpawnGroup_VehicleArmybase";
      break;
    case 43:
      result = "SpawnGroup_VehicleConstruction";
      break;
    case 44:
      result = "SpawnGroup_VehicleDesert";
      break;
    case 45:
      result = "SpawnGroup_VehicleDowntown";
      break;
    case 46:
      result = "SpawnGroup_VehicleGovernment";
      break;
    case 47:
      result = "SpawnGroup_VehicleIndustrial";
      break;
    case 48:
      result = "SpawnGroup_VehicleMine";
      break;
    case 49:
      result = "SpawnGroup_VehiclePoorResidential";
      break;
    case 50:
      result = "SpawnGroup_VehicleTrailer";
      break;
    case 51:
      result = "SpawnGroup_VehicleRichResidential";
      break;
    case 52:
      result = "SpawnGroup_VehicleStrip";
      break;
    case 53:
      result = "SpawnGroup_VehicleBacklot";
      break;
    case 54:
      result = "SpawnGroup_VehicleUberDam";
      break;
    case 55:
      result = "SpawnGroup_VehicleWater";
      break;
    case 56:
      result = "SpawnGroup_VehicleWaterPolice";
      break;
    case 57:
      result = "SpawnGroup_ParkedPlanesAirport";
      break;
    case 58:
      result = "SpawnGroup_ParkedPlanesMilitary";
      break;
    case 59:
      result = "SpawnGroup_ParkedVehicleAirport";
      break;
    case 60:
      result = "SpawnGroup_ParkedVehicleArmybase";
      break;
    case 61:
      result = "SpawnGroup_ParkedVehicleConstruction";
      break;
    case 62:
      result = "SpawnGroup_ParkedVehicleDesert";
      break;
    case 63:
      result = "SpawnGroup_ParkedVehicleDowntown";
      break;
    case 64:
      result = "SpawnGroup_ParkedVehicleGovernment";
      break;
    case 65:
      result = "SpawnGroup_ParkedVehicleIndustrial";
      break;
    case 66:
      result = "SpawnGroup_ParkedVehicleMine";
      break;
    case 67:
      result = "SpawnGroup_ParkedVehiclePoorResidential";
      break;
    case 68:
      result = "SpawnGroup_ParkedVehicleTrailer";
      break;
    case 69:
      result = "SpawnGroup_ParkedVehicleRichResidential";
      break;
    case 70:
      result = "SpawnGroup_ParkedVehicleStrip";
      break;
    case 71:
      result = "SpawnGroup_ParkedVehicleUberDam";
      break;
    case 72:
      result = "SpawnGroup_ParkedVehicleWater";
      break;
    case 73:
      result = "SpawnGroup_ParkedVehicleParis1";
      break;
    case 74:
      result = "SpawnGroup_ParkedVehicleParis2";
      break;
    case 75:
      result = "SpawnGroup_ParkedVehicleParis3";
      break;
    case 76:
      result = "SpawnGroup_carng";
      break;
    case 77:
      result = "SpawnGroup_Wanted_1";
      break;
    case 78:
      result = "SpawnGroup_Wanted_2";
      break;
    case 79:
      result = "SpawnGroup_Wanted_3";
      break;
    case 80:
      result = "SpawnGroup_Wanted_4";
      break;
    case 81:
      result = "SpawnGroup_Wanted_5";
      break;
    case 82:
      result = "SpawnGroup_Vehicle_Wanted_1";
      break;
    case 83:
      result = "SpawnGroup_Vehicle_Wanted_2";
      break;
    case 84:
      result = "SpawnGroup_Vehicle_Wanted_3";
      break;
    case 85:
      result = "SpawnGroup_Vehicle_Wanted_4";
      break;
    case 86:
      result = "SpawnGroup_Vehicle_Wanted_5";
      break;
    case 87:
      result = "SpawnGroup_Survi_Vehicle";
      break;
    case 88:
      result = "SpawnGroup_MafiaChapter1";
      break;
    case 89:
      result = "SpawnGroup_MafiaChapter1_NoLoot";
      break;
    case 90:
      result = "SpawnGroup_WorkerChapter1";
      break;
    case 91:
      result = "SpawnGroup_GenericBadGuys";
      break;
    case 92:
      result = "SpawnGroup_ThugsWithGuns";
      break;
    case 93:
      result = "SpawnGroup_Latinos";
      break;
    case 94:
      result = "SpawnGroup_SecurityGuards";
      break;
    case 95:
      result = "SpawnGroup_Cop";
      break;
    case 96:
      result = "SpawnGroup_Military";
      break;
    case 97:
      result = "SpawnGroup_Carnage01";
      break;
    case 98:
      result = "SpawnGroup_CarnageVehicles01";
      break;
    case 99:
      result = "SpawnGroup_Carnage02";
      break;
    case 100:
      result = "SpawnGroup_CarnageVehicles02";
      break;
    case 101:
      result = "SpawnGroup_Carnage03";
      break;
    case 102:
      result = "SpawnGroup_CarnageVehicles03";
      break;
    case 103:
      result = "SpawnGroup_Carnage04";
      break;
    case 104:
      result = "SpawnGroup_CarnageVehicles04";
      break;
    case 105:
      result = "SpawnGroup_Biker_mission";
      break;
    case 106:
      result = "SpawnGroup_Goon_mission";
      break;
    case 107:
      result = "SpawnGroup_Survi_Mafia_WaveOne";
      break;
    case 108:
      result = "SpawnGroup_Survi_Mafia_WaveTwo";
      break;
    case 109:
      result = "SpawnGroup_Survi_Mafia_WaveThree";
      break;
    case 110:
      result = "SpawnGroup_Survi_Mafia_WaveFour";
      break;
    case 111:
      result = "SpawnGroup_Survi_Mafia_WaveFive";
      break;
    case 112:
      result = "SpawnGroup_C3M05_Goon";
      break;
    case 113:
      result = "SpawnGroup_C3M05_Cop";
      break;
    case 114:
      result = "SpawnGroup_C4M03_Goon";
      break;
    case 115:
      result = "SpawnGroup_U3M07_Alien";
      break;
    case 116:
      result = "SpawnGroup_Strip_Alien";
      break;
    case 117:
      result = "SpawnGroup_PoorResidential_Alien";
      break;
    case 118:
      result = "SpawnGroup_Airport_Alien";
      break;
    case 119:
      result = "SpawnGroup_Government_Alien";
      break;
    case 120:
      result = "SpawnGroup_Industrial_Alien";
      break;
    case 121:
      result = "SpawnGroup_RichResidential_Alien";
      break;
    case 122:
      result = "SpawnGroup_Construction_Alien";
      break;
    case 123:
      result = "SpawnGroup_Downtown_Alien";
      break;
    case 124:
      result = "SpawnGroup_Trailer_Alien";
      break;
    case 125:
      result = "SpawnGroup_Downtown_Fremont_Alien";
      break;
    case 126:
      result = "SpawnGroup_Devil_Turret";
      break;
    case 127:
      result = "SpawnGroup_Devil_Heap";
      break;
    case 128:
      result = "SpawnGroup_GangWar";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_84BB20  (binary VA: 0x84bb20)
// Original: sub_84BB20
// ----------------------------------------------------------------------------
int sub_84BB20(uint32_t *a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  uint32_t *v7;
  typedef uint32_t *_g4_t_v9;
  typedef int _g4_t_v10[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v9)) > _g4_s0 ? (12u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v10)) > _g4_s1 ? (24u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);

  if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
  {
    grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
    __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
  }
  v2 = (uint32_t *)dword_20D672C;
  v3 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_20;
  do
  {
    while ( (unsigned int)(uintptr_t)(a1) <= v2[4] )
    {
      v3 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_7;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_7:
  if ( v3 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(a1) < v3[4] )
  {
LABEL_20:
    v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    *v4 = (uint32_t)(uintptr_t)(&off_205CD10);
    v4[1] = a2;
  }
  else
  {
    v4 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 141);
    *v4 = (uint32_t)(uintptr_t)(&off_205CD10);
    v4[1] = a2;
    v5 = v3[5];
    if ( v5 != 0 )
      G4_VCALL<void>(v5, 4);
  }
  v6 = (uint32_t *)dword_20D672C;
  v7 = (uint32_t *)(&unk_20D6728);
  if ( dword_20D672C == 0 )
    goto LABEL_18;
  do
  {
    while ( (unsigned int)(uintptr_t)(a1) <= v6[4] )
    {
      v7 = v6;
      v6 = (uint32_t *)v6[2];
      if ( v6 == nullptr )
        goto LABEL_16;
    }
    v6 = (uint32_t *)v6[3];
  }
  while ( v6 != nullptr );
LABEL_16:
  if ( v7 == (uint32_t *)&unk_20D6728 || (unsigned int)(uintptr_t)(a1) < v7[4] )
  {
LABEL_18:
    v10[0] = (int)(uintptr_t)(a1);
    v10[1] = 0;
    sub_8446D0((int *)&v9, &dword_20D6724, (int)(uintptr_t)(v7), v10);
    v7 = v9;
  }
  v7[5] = (uint32_t)(uintptr_t)(v4);
  *a1 = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_void_grapher_ActorContex_7fce1e::opIndex  (binary VA: 0x84bce0)
// Original: std::map<void *,grapher::ActorContext::ICVar *>::operator[]
// ----------------------------------------------------------------------------
uint32_t * g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(std::map<void *,grapher::ActorContext::ICVar *> *self, void *const *a2)
{
  uint32_t *v2;
  unsigned int v3;
  uint32_t *v4;
  typedef int _g4_t_v6[3];
  typedef int _g4_t_v7[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);

  v2 = *((uint32_t **)self + 2);
  v3 = (unsigned int)(uintptr_t)(*a2);
  v4 = (uint32_t *)((char *)self + 4);
  if ( v2 == nullptr )
    goto LABEL_8;
  do
  {
    while ( v3 <= v2[4] )
    {
      v4 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  if ( (uint32_t *)((char *)self + 4) == v4 || v4[4] > v3 )
  {
LABEL_8:
    v7[0] = (int)(uintptr_t)(*a2);
    v7[1] = 0;
    sub_8446D0(v6, self, (int)(uintptr_t)(v4), v7);
    v4 = (uint32_t *)v6[0];
  }
  return v4 + 5;
}

// ----------------------------------------------------------------------------
// Function: sub_84BD50  (binary VA: 0x84bd50)
// Original: sub_84BD50
// ----------------------------------------------------------------------------
uint32_t * sub_84BD50(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *result;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  typedef uint32_t *_g4_t_v8;
  typedef void *_g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v9 = a2;
  v2 = (uint32_t *)a1[3];
  if ( v2 == nullptr )
    goto LABEL_20;
  v3 = a1 + 2;
  do
  {
    while ( (unsigned int)(uintptr_t)(a2) <= v2[4] )
    {
      v3 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  if ( v3 == a1 + 2 || (unsigned int)(uintptr_t)(a2) < v3[4] )
  {
LABEL_20:
    if ( byte_20D6700 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D6700) != 0 )
    {
      grapher::ActorContext::Construct((grapher::ActorContext::Self *)&unk_20D6720, "default");
      _cxa_guard_release((g4_cxa_guard_t *)&byte_20D6700);
      __cxa_atexit((void (*)(void *))grapher::ActorContext::Destroy, &unk_20D6720, &unk_20D1280);
    }
    v5 = (uint32_t *)dword_20D672C;
    v6 = (uint32_t *)(&unk_20D6728);
    if ( dword_20D672C != 0 )
    {
      do
      {
        if ( (unsigned int)(uintptr_t)(a2) <= v5[4] )
        {
          v6 = v5;
          v5 = (uint32_t *)v5[2];
        }
        else
        {
          v5 = (uint32_t *)v5[3];
        }
      }
      while ( v5 != nullptr );
      if ( v6 != (uint32_t *)&unk_20D6728 && (unsigned int)(uintptr_t)(a2) < v6[4] )
        v6 = (uint32_t *)(&unk_20D6728);
    }
    *a2 = *(uint32_t *)(v6[5] + 4);
    v7 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 177);
    *v7 = (uint32_t)(uintptr_t)(&off_205CD10);
    v7[1] = *a2;
    v8 = v7;
    result = g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
               (std::map<void *,grapher::ActorContext::ICVar *> *)(a1 + 1),
               &v9);
    *result = (uint32_t)(uintptr_t)(v8);
  }
  else
  {
    result = *(uint32_t **)(v3[5] + 4);
    *a2 = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_84BEC0  (binary VA: 0x84bec0)
// Original: sub_84BEC0
// ----------------------------------------------------------------------------
uint32_t * sub_84BEC0(uint32_t *a1, uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *result;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v6;
  typedef void *_g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  v7 = a2;
  v2 = (uint32_t *)a1[3];
  if ( v2 == nullptr )
    goto LABEL_9;
  v3 = a1 + 2;
  do
  {
    while ( (unsigned int)(uintptr_t)(a2) <= v2[4] )
    {
      v3 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  if ( a1 + 2 == v3 || (unsigned int)(uintptr_t)(a2) < v3[4] )
  {
LABEL_9:
    v5 = (uint32_t *)gll_operator_new(8u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorContext.h"), 193);
    *v5 = (uint32_t)(uintptr_t)(&off_205CD10);
    v5[1] = *a2;
    v6 = v5;
    result = g4_std::map_void_grapher_ActorContex_7fce1e::opIndex(
               (std::map<void *,grapher::ActorContext::ICVar *> *)(a1 + 1),
               &v7);
    *result = (uint32_t)(uintptr_t)(v6);
  }
  else
  {
    result = (uint32_t *)v3[5];
    result[1] = *a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_84BF80  (binary VA: 0x84bf80)
// Original: sub_84BF80
// ----------------------------------------------------------------------------
void sub_84BF80(uint32_t *a1, int a2)
{
  int v2;
  char *v3;
  int v4;
  int v5[4];

  if ( *a1 != 0 )
    sub_5459F0((int)(uintptr_t)(a1), *a1 + 28);
  if ( a2 != 0 )
  {
    v2 = 0;
    *a1 = a2 - 12;
    v5[0] = (int)(uintptr_t)(a1);
    if ( a2 != 12 )
      v2 = a2;
    v3 = *(char **)(v2 + 20);
    if ( v3 == *(char **)(v2 + 24) )
    {
      g4_std::vector_Gangstar_Handleable_a745f6::M_insert_aux(v2 + 16, v3, v5);
    }
    else
    {
      v4 = 0;
      if ( v3 != nullptr )
      {
        *(uint32_t *)v3 = (uint32_t)(uintptr_t)(a1);
        v4 = *(uint32_t *)(v2 + 20);
      }
      *(uint32_t *)(v2 + 20) = v4 + 4;
    }
  }
  else
  {
    *a1 = 0;
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::Rb_tree_int_pair_int_const_list_277118::M_erase  (binary VA: 0x84c030)
// Original: std::_Rb_tree<int,std::pair<int const,std::list<Gangstar::Handle<LevelObject,true>>>,std::_Select1st<std::pair<int const,std::list<Gangstar::Handle<LevelObject,true>>>>,std::less<int>,std::allocator<std::pair<int const,std::list<Gangstar::Handle<LevelObject,true>>>>>::_M_erase
// ----------------------------------------------------------------------------
void g4_std::Rb_tree_int_pair_int_const_list_277118::M_erase(int a1, uint32_t *a2)
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
  uint32_t *v26;
  uint32_t *v27;
  uint32_t *v28;
  uint32_t *v29;
  uint32_t *v30;
  uint32_t *v31;
  uint32_t *v32;
  uint32_t *v33;
  uint32_t *v34;
  uint32_t *v35;
  uint32_t *v36;
  uint32_t *v37;
  uint32_t *v38;
  uint32_t *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  uint32_t *v44;
  uint32_t *v45;
  uint32_t *v46;
  uint32_t *v47;
  uint32_t *v48;
  uint32_t *v49;
  uint32_t *v50;
  uint32_t *v51;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v46 = (uint32_t *)a2[3];
      if ( v46 != nullptr )
      {
        while ( 1 )
        {
          v47 = (uint32_t *)v46[3];
          if ( v47 != nullptr )
          {
            while ( 1 )
            {
              v48 = (uint32_t *)v47[3];
              if ( v48 != nullptr )
              {
                while ( 1 )
                {
                  v50 = (uint32_t *)v48[3];
                  if ( v50 != nullptr )
                  {
                    while ( 1 )
                    {
                      v51 = (uint32_t *)v50[3];
                      if ( v51 != nullptr )
                      {
                        while ( 1 )
                        {
                          v2 = (uint32_t *)v51[3];
                          v49 = v2;
                          if ( v2 != nullptr )
                          {
                            while ( 1 )
                            {
                              v3 = (uint32_t *)v2[3];
                              v45 = v3;
                              if ( v3 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v4 = (uint32_t *)v3[3];
                                  v41 = v4;
                                  if ( v4 != nullptr )
                                  {
                                    while ( 1 )
                                    {
                                      g4_std::Rb_tree_int_pair_int_const_list_277118::M_erase(
                                        a1,
                                        (void *)v4[3]);
                                      v5 = (uint32_t *)v41[5];
                                      v44 = (uint32_t *)v41[2];
                                      if ( v5 != v41 + 5 )
                                      {
                                        while ( 1 )
                                        {
                                          v6 = (uint32_t *)*v5;
                                          sub_84BF80(v5 + 2, 0);
                                          opDelete(v5);
                                          if ( v6 == v41 + 5 )
                                            break;
                                          v5 = v6;
                                        }
                                      }
                                      opDelete(v41);
                                      if ( v44 == nullptr )
                                        break;
                                      v41 = v44;
                                      v4 = v44;
                                    }
                                  }
                                  v7 = (uint32_t *)v45[5];
                                  v42 = (uint32_t *)v45[2];
                                  if ( v7 != v45 + 5 )
                                  {
                                    while ( 1 )
                                    {
                                      v8 = (uint32_t *)*v7;
                                      sub_84BF80(v7 + 2, 0);
                                      opDelete(v7);
                                      if ( v8 == v45 + 5 )
                                        break;
                                      v7 = v8;
                                    }
                                  }
                                  opDelete(v45);
                                  if ( v42 == nullptr )
                                    break;
                                  v45 = v42;
                                  v3 = v42;
                                }
                              }
                              v9 = (uint32_t *)v49[5];
                              v43 = (uint32_t *)v49[2];
                              if ( v9 != v49 + 5 )
                              {
                                while ( 1 )
                                {
                                  v10 = (uint32_t *)*v9;
                                  sub_84BF80(v9 + 2, 0);
                                  opDelete(v9);
                                  if ( v10 == v49 + 5 )
                                    break;
                                  v9 = v10;
                                }
                              }
                              opDelete(v49);
                              if ( v43 == nullptr )
                                break;
                              v49 = v43;
                              v2 = v43;
                            }
                          }
                          v11 = (uint32_t *)v51[5];
                          v12 = (uint32_t *)v51[2];
                          v13 = v12;
                          if ( v11 != v51 + 5 )
                          {
                            while ( 1 )
                            {
                              v14 = (uint32_t *)*v11;
                              v35 = v13;
                              sub_84BF80(v11 + 2, 0);
                              opDelete(v11);
                              v13 = v35;
                              if ( v14 == v51 + 5 )
                                break;
                              v11 = v14;
                            }
                            v12 = v35;
                          }
                          opDelete(v51);
                          if ( v12 == nullptr )
                            break;
                          v51 = v12;
                        }
                      }
                      v15 = (uint32_t *)v50[5];
                      v16 = (uint32_t *)v50[2];
                      v17 = v16;
                      if ( v15 != v50 + 5 )
                      {
                        while ( 1 )
                        {
                          v18 = (uint32_t *)*v15;
                          v36 = v17;
                          sub_84BF80(v15 + 2, 0);
                          opDelete(v15);
                          v17 = v36;
                          if ( v18 == v50 + 5 )
                            break;
                          v15 = v18;
                        }
                        v16 = v36;
                      }
                      opDelete(v50);
                      if ( v16 == nullptr )
                        break;
                      v50 = v16;
                    }
                  }
                  v19 = (uint32_t *)v48[5];
                  v20 = (uint32_t *)v48[2];
                  v21 = v20;
                  if ( v19 != v48 + 5 )
                  {
                    while ( 1 )
                    {
                      v22 = (uint32_t *)*v19;
                      v37 = v21;
                      sub_84BF80(v19 + 2, 0);
                      opDelete(v19);
                      v21 = v37;
                      if ( v22 == v48 + 5 )
                        break;
                      v19 = v22;
                    }
                    v20 = v37;
                  }
                  opDelete(v48);
                  if ( v20 == nullptr )
                    break;
                  v48 = v20;
                }
              }
              v23 = (uint32_t *)v47[5];
              v24 = (uint32_t *)v47[2];
              v25 = v24;
              if ( v23 != v47 + 5 )
              {
                while ( 1 )
                {
                  v26 = (uint32_t *)*v23;
                  v38 = v25;
                  sub_84BF80(v23 + 2, 0);
                  opDelete(v23);
                  v25 = v38;
                  if ( v26 == v47 + 5 )
                    break;
                  v23 = v26;
                }
                v24 = v38;
              }
              opDelete(v47);
              if ( v24 == nullptr )
                break;
              v47 = v24;
            }
          }
          v27 = (uint32_t *)v46[5];
          v28 = (uint32_t *)v46[2];
          v29 = v28;
          if ( v27 != v46 + 5 )
          {
            while ( 1 )
            {
              v30 = (uint32_t *)*v27;
              v39 = v29;
              sub_84BF80(v27 + 2, 0);
              opDelete(v27);
              v29 = v39;
              if ( v30 == v46 + 5 )
                break;
              v27 = v30;
            }
            v28 = v39;
          }
          opDelete(v46);
          if ( v28 == nullptr )
            break;
          v46 = v28;
        }
      }
      v31 = (uint32_t *)a2[5];
      v32 = (uint32_t *)a2[2];
      v33 = v32;
      if ( v31 != a2 + 5 )
      {
        while ( 1 )
        {
          v34 = (uint32_t *)*v31;
          v40 = v33;
          sub_84BF80(v31 + 2, 0);
          opDelete(v31);
          v33 = v40;
          if ( v34 == a2 + 5 )
            break;
          v31 = v34;
        }
        v32 = v40;
      }
      opDelete(a2);
      if ( v32 == nullptr )
        break;
      a2 = v32;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: g4_std::map_int_list_Gangstar_Handle_887a63::Destroy  (binary VA: 0x84c460)
// Original: std::map<int,std::list<Gangstar::Handle<LevelObject,true>>>::~map
// ----------------------------------------------------------------------------
void g4_std::map_int_list_Gangstar_Handle_887a63::Destroy(std::map<int,std::list<Gangstar::Handle<LevelObject, true>>> *self)
{
  g4_std::Rb_tree_int_pair_int_const_list_277118::M_erase(
    (int)(uintptr_t)(self),
    *((uint32_t **)self + 2));
}


