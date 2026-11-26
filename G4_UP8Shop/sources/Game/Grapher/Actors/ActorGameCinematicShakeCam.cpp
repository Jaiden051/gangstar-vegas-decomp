#include "Core/Utils/DecompTypes.h"
#include "Game/Grapher/Actors/ActorGameCinematicShakeCam.h"

// ----------------------------------------------------------------------------
// Function: ActorGameCinematicShakeCam::CreateInstance  (binary VA: 0x0)
// Original: ActorGameCinematicShakeCam::CreateInstance
// ----------------------------------------------------------------------------
int ActorGameCinematicShakeCam::CreateInstance(int a1, int a2, int a3)
{
  int v3;
  uint8_t v5[4];

  if ( a1 == -1 )
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 30);
    ActorGameCinematicShakeCam::ActorGameCinematicShakeCam(v3, -1);
    if ( v3 != 0 )
    {
      G4_VCALL<void>(v3, 8);
      g4_std::string::construct_copy(v5, a2);
      grapher::ActorBase::SetTemplateName(v3, v5);
      g4_std::string::Destroy(v5);
      grapher::ActorBase::ParseAttributes(v3, a3);
    }
  }
  else
  {
    v3 = gll_operator_new(0x34u, (int)(uintptr_t)("../../../../../lib/grapher/inc/grapher/Core/ActorManager.h"), 43);
    ActorGameCinematicShakeCam::ActorGameCinematicShakeCam(v3, a1);
  }
  return v3;
}



// Constructor (0x845b00):
int (**ActorGameCinematicShakeCam::ActorGameCinematicShakeCam(grapher::ActorBase::Self *a1, unsigned int a2))(int)
{
  ActorGamePlayerRemoveItem::ActorGamePlayerRemoveItem(a1, a2);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC48);
  return (int (**)(int))(uintptr_t)(&off_205CC48);
}
// ----------------------------------------------------------------------------
// Function: ActorGameCinematicShakeCam::Destroy  (binary VA: 0x0)
// Original: ActorGameCinematicShakeCam::~ActorGameCinematicShakeCam
// ----------------------------------------------------------------------------
int ActorGameCinematicShakeCam::Destroy(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC48);
  { ActorGameBase::Destroy(a1); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_839AF0  (binary VA: 0x0)
// Original: sub_839AF0
// ----------------------------------------------------------------------------
void sub_839AF0(grapher::ActorBase::Self *a1)
{
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(&off_205CC48);
  ActorGameBase::Destroy(a1);
  opDelete(a1);
}

// ----------------------------------------------------------------------------
// Function: sub_83B150  (binary VA: 0x0)
// Original: sub_83B150
// ----------------------------------------------------------------------------
int sub_83B150(grapher::ActorBase::Self *a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6[4];

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
  { g4_std::string::Destroy(v6); return 0; }
}

// ----------------------------------------------------------------------------
// Function: sub_838970  (binary VA: 0x0)
// Original: sub_838970
// ----------------------------------------------------------------------------
int sub_838970(grapher::ActorBase::Self *a1, int a2, grapher::ActorContext::Self *a3)
{
  return (int)(uintptr_t)(grapher::ActorBase::FireEvent(a1, 1, a3));
}


