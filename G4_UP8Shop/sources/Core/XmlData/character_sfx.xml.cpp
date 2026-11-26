#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/character_sfx.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : character_sfx_struct
void character_sfx_struct::Init()
{
	base_struct::Init();

	// Field : aimedAt
	aimedAt = 0;

	// Field : arresting
	arresting = 0;

	// Field : attacked
	attacked = 0;

	// Field : bikeHorn
	bikeHorn = 0;

	// Field : bikeRunningOver
	bikeRunningOver = 0;

	// Field : bikeStolen
	bikeStolen = 0;

	// Field : boardBoat
	boardBoat = 0;

	// Field : chasing
	chasing = 0;

	// Field : drown
	drown = 0;

	// Field : drowning
	drowning = 0;

	// Field : hit
	hit = 0;

	// Field : impact_bullet
	impact_bullet = 0;

	// Field : impact_car
	impact_car = 0;

	// Field : impact_punch
	impact_punch = 0;

	// Field : name
	name = 0;
	name_hash = 0;

	// Field : roll
	roll_f = 0.0f;

	// Field : splash
	splash = 0;

	// Field : steps_run
	steps_run = 0;

	// Field : steps_sprint
	steps_sprint = 0;

	// Field : steps_walk
	steps_walk = 0;

	// Field : vehicleBumped
	vehicleBumped = 0;

	// Field : vehicleHorn
	vehicleHorn = 0;

	// Field : woosh_punch
	woosh_punch = 0;

	// Field : aggro
	aggro = 0;

	// Field : blocked
	blocked = 0;

	// Field : boardBike
	boardBike = 0;

	// Field : boardChopper
	boardChopper = 0;

	// Field : boardPlane
	boardPlane = 0;

	// Field : boardTank
	boardTank = 0;

	// Field : boardVehicle
	boardVehicle = 0;

	// Field : bumped
	bumped = 0;

	// Field : attacking
	attacking = 0;

	// Field : attackingCop
	attackingCop = 0;

	// Field : attackStrong
	attackStrong = 0;
	attackStrong_hash = 0;

	// Field : attackWeak
	attackWeak = 0;

	// Field : carStolen
	carStolen = 0;

	// Field : climb
	climb = 0;

	// Field : copMegaphone
	copMegaphone = 0;

	// Field : getUp
	getUp = 0;

	// Field : hijacking
	hijacking = 0;

	// Field : hijackingBike
	hijackingBike = 0;

	// Field : hijackingCar
	hijackingCar = 0;

	// Field : hurtStrong
	hurtStrong = 0;
	hurtStrong_hash = 0;

	// Field : hurtWeak
	hurtWeak = 0;

	// Field : idle
	idle = 0;

	// Field : inCombat
	inCombat = 0;

	// Field : jBreathing
	jBreathing = 0;

	// Field : jLand
	jLand = 0;

	// Field : killed
	killed = 0;

	// Field : knockdown
	knockdown = 0;

	// Field : onFire
	onFire = 0;

	// Field : panic
	panic = 0;

	// Field : vehicleRunningOver
	vehicleRunningOver = 0;

	// Field : vehicleStolen
	vehicleStolen = 0;

	// Field : waterSplash
	waterSplash = 0;

	// Field : carHitFast
	carHitFast = 0;

	// Field : carHitSlow
	carHitSlow = 0;

	// Field : fallDown
	fallDown = 0;

	// Field : breathCooldown
	breathCooldown = 0;

	// Field : freefall
	freefall = 0;

	// Field : parachutefall
	parachutefall = 0;

	// Field : parachuteRelease
	parachuteRelease = 0;

	// Field : parachuteBreak
	parachuteBreak = 0;

	// Field : Grapher
	Grapher = 0;

	// Field : Apex
	Apex = 0;

	// Field : Mission
	Mission = 0;

	// Field : DebugColor
	DebugColor = 0;

}

void character_sfx_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : aimedAt
	stream->ReadAs(aimedAt);

	// Field : arresting
	stream->ReadAs(arresting);

	// Field : attacked
	stream->ReadAs(attacked);

	// Field : bikeHorn
	stream->ReadAs(bikeHorn);

	// Field : bikeRunningOver
	stream->ReadAs(bikeRunningOver);

	// Field : bikeStolen
	stream->ReadAs(bikeStolen);

	// Field : boardBoat
	stream->ReadAs(boardBoat);

	// Field : chasing
	stream->ReadAs(chasing);

	// Field : drown
	stream->ReadAs(drown);

	// Field : drowning
	stream->ReadAs(drowning);

	// Field : hit
	stream->ReadAs(hit);

	// Field : impact_bullet
	stream->ReadAs(impact_bullet);

	// Field : impact_car
	stream->ReadAs(impact_car);

	// Field : impact_punch
	stream->ReadAs(impact_punch);

	// Field : name
	stream->ReadString(name);
	name_hash = static_cast<uint32>(glitch::core::hashString(name));

	// Field : roll
	stream->ReadAs(roll_f);

	// Field : splash
	stream->ReadAs(splash);

	// Field : steps_run
	stream->ReadAs(steps_run);

	// Field : steps_sprint
	stream->ReadAs(steps_sprint);

	// Field : steps_walk
	stream->ReadAs(steps_walk);

	// Field : vehicleBumped
	stream->ReadAs(vehicleBumped);

	// Field : vehicleHorn
	stream->ReadAs(vehicleHorn);

	// Field : woosh_punch
	stream->ReadAs(woosh_punch);

	// Field : aggro
	stream->ReadAs(aggro);

	// Field : blocked
	stream->ReadAs(blocked);

	// Field : boardBike
	stream->ReadAs(boardBike);

	// Field : boardChopper
	stream->ReadAs(boardChopper);

	// Field : boardPlane
	stream->ReadAs(boardPlane);

	// Field : boardTank
	stream->ReadAs(boardTank);

	// Field : boardVehicle
	stream->ReadAs(boardVehicle);

	// Field : bumped
	stream->ReadAs(bumped);

	// Field : attacking
	stream->ReadAs(attacking);

	// Field : attackingCop
	stream->ReadAs(attackingCop);

	// Field : attackStrong
	stream->ReadString(attackStrong);
	attackStrong_hash = static_cast<uint32>(glitch::core::hashString(attackStrong));

	// Field : attackWeak
	stream->ReadAs(attackWeak);

	// Field : carStolen
	stream->ReadAs(carStolen);

	// Field : climb
	stream->ReadAs(climb);

	// Field : copMegaphone
	stream->ReadAs(copMegaphone);

	// Field : getUp
	stream->ReadAs(getUp);

	// Field : hijacking
	stream->ReadAs(hijacking);

	// Field : hijackingBike
	stream->ReadAs(hijackingBike);

	// Field : hijackingCar
	stream->ReadAs(hijackingCar);

	// Field : hurtStrong
	stream->ReadString(hurtStrong);
	hurtStrong_hash = static_cast<uint32>(glitch::core::hashString(hurtStrong));

	// Field : hurtWeak
	stream->ReadAs(hurtWeak);

	// Field : idle
	stream->ReadAs(idle);

	// Field : inCombat
	stream->ReadAs(inCombat);

	// Field : jBreathing
	stream->ReadAs(jBreathing);

	// Field : jLand
	stream->ReadAs(jLand);

	// Field : killed
	stream->ReadAs(killed);

	// Field : knockdown
	stream->ReadAs(knockdown);

	// Field : onFire
	stream->ReadAs(onFire);

	// Field : panic
	stream->ReadAs(panic);

	// Field : vehicleRunningOver
	stream->ReadAs(vehicleRunningOver);

	// Field : vehicleStolen
	stream->ReadAs(vehicleStolen);

	// Field : waterSplash
	stream->ReadAs(waterSplash);

	// Field : carHitFast
	stream->ReadAs(carHitFast);

	// Field : carHitSlow
	stream->ReadAs(carHitSlow);

	// Field : fallDown
	stream->ReadAs(fallDown);

	// Field : breathCooldown
	stream->ReadAs(breathCooldown);

	// Field : freefall
	stream->ReadAs(freefall);

	// Field : parachutefall
	stream->ReadAs(parachutefall);

	// Field : parachuteRelease
	stream->ReadAs(parachuteRelease);

	// Field : parachuteBreak
	stream->ReadAs(parachuteBreak);

	// Field : Grapher
	stream->ReadAs(Grapher);

	// Field : Apex
	stream->ReadAs(Apex);

	// Field : Mission
	stream->ReadAs(Mission);

	// Field : DebugColor
	stream->ReadAs(DebugColor);

}

void character_sfx_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : name
	if (name && name[0] != '\0') gll_delete[] name;
	name = 0;

	// Field : attackStrong
	if (attackStrong && attackStrong[0] != '\0') gll_delete[] attackStrong;
	attackStrong = 0;

	// Field : hurtStrong
	if (hurtStrong && hurtStrong[0] != '\0') gll_delete[] hurtStrong;
	hurtStrong = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : character_sfx
size_t character_sfx::size = 0;
character_sfx::struct_type* character_sfx::entries = 0;

void character_sfx::Load(StreamBase* stream)
{
	if(entries != 0)
		Unload();

	uint32 sz;
	stream->ReadAs(sz);

	if(sz > 0)
	{
		entries = gll_new struct_type[sz];
		size = sz;

		for(size_t i = 0; i < size; ++i)
		{
			entries[i].Init();
			entries[i].Load(stream);
		}
	}
}

void character_sfx::Unload()
{
	if(entries)
	{
		for(size_t i = 0; i < size; ++i)
		{
			entries[i].Unload();
		}

		gll_delete[] entries;
		entries = 0;
		size = 0;
	}
}

}; // namespace arrays
}; // namespace xmldata

// ============================================================================
// Schema Descriptor Registration Helper (0xaa9100) in libGangstar4.so
// ============================================================================
int sub_AA9100(int a1, char *s)
{
  glf::IOStream::Self *v2; // esi
  size_t v4; // eax
  int v5; // ebp
  int v6; // [esp+1Ch] [ebp-30h]
  int v7; // [esp+2Bh] [ebp-21h]
  uint32_t v8[4]; // [esp+2Ch] [ebp-20h]

  if ( (*(uint32_t *)unk_1CA3DC4) == 0 )
  {
    sub_193A910((int)(uintptr_t)(v8), "gamedata/XmlData/bins/", (int)(uintptr_t)(&v7));
    GLFUtils::ToLowerCase(v8, 0, -1);
    v4 = strlen(s);
    sub_1939E60((int)(uintptr_t)(v8), s, v4);
    v5 = v8[0];
    v2 = (glf::IOStream::Self *)sub_4EBBF0(0x34u, 1);
    glf::FileStreamImpl::Construct(v2, v5, 1);
    *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2048D28);
    sub_1938B70(v8);
    if ( (*(uint8_t (**)(glf::IOStream::Self *))(*(uint32_t *)v2 + 48))(v2) == 0 )
      goto LABEL_3;
LABEL_6:
    v6 = sub_4EBBF0(0xCu, 1);
    sub_A46990(v6, v2, 1, 0);
    return v6;
  }
  v2 = (glf::IOStream::Self *)sub_4EBBF0(0x34u, 1);
  glf::FileStreamImpl::Construct(v2, (int)(uintptr_t)(s), 129);
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2048D28);
  if ( (uint8_t)glf::Stream::IsOpened(v2) != 0 )
    goto LABEL_6;
LABEL_3:
  (*(void (**)(glf::IOStream::Self *))(*(uint32_t *)v2 + 4))(v2);
  return 0;
}
