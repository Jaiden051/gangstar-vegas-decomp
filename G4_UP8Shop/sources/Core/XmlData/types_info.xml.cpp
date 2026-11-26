#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/types_info.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : types_info_struct
void types_info_struct::Init()
{
	base_struct::Init();

	// Field : Flags
	Flags = 0;

	// Field : Class
	Class = 0;

	// Field : WeaponSelIcon
	WeaponSelIcon = 0;
	WeaponSelIcon_hash = 0;

	// Field : ParamSet
	ParamSet = 0;

	// Field : IsGun
	IsGun = 0;

	// Field : IsCannon
	IsCannon = 0;

	// Field : DoubleBaseType
	DoubleBaseType = 0;

	// Field : HasProjectile
	HasProjectile = 0;

	// Field : HasAOE
	HasAOE = 0;

	// Field : DeathAnimID
	DeathAnimID = 0;

	// Field : FlinchSoundEvents
	FlinchSoundEvents = 0;
	FlinchSoundEvents_hash = 0;

	// Field : SwingSoundEvents
	SwingSoundEvents = 0;
	SwingSoundEvents_hash = 0;

	// Field : ReloadTime
	ReloadTime_f = 0.0f;

	// Field : DeathAnimation
	DeathAnimation = 0;
	DeathAnimation_hash = 0;

	// Field : DeathAnimationNum
	DeathAnimationNum = 0;

	// Field : DeathBackAnimation
	DeathBackAnimation = 0;
	DeathBackAnimation_hash = 0;

	// Field : DeathBackAnimationNum
	DeathBackAnimationNum = 0;

	// Field : doorAnimations
	doorAnimations = 0;
	doorAnimations_hash = 0;

	// Field : doorCloseSound
	doorCloseSound = 0;
	doorCloseSound_hash = 0;

	// Field : doorDummies
	doorDummies = 0;

	// Field : doorOpenSound
	doorOpenSound = 0;
	doorOpenSound_hash = 0;

	// Field : doorSeatsAndSeatDoors
	doorSeatsAndSeatDoors = 0;

	// Field : seatDummies
	seatDummies = 0;

	// Field : seat
	seat = 0;

	// Field : seatAlt
	seatAlt = 0;

	// Field : door
	door = 0;

	// Field : doorAlt
	doorAlt = 0;

}

void types_info_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Flags
	stream->ReadAs(Flags);

	// Field : Class
	stream->ReadAs(Class);

	// Field : WeaponSelIcon
	stream->ReadString(WeaponSelIcon);
	WeaponSelIcon_hash = static_cast<uint32>(glitch::core::hashString(WeaponSelIcon));

	// Field : ParamSet
	stream->ReadAs(ParamSet);

	// Field : IsGun
	stream->ReadAs(IsGun);

	// Field : IsCannon
	stream->ReadAs(IsCannon);

	// Field : DoubleBaseType
	stream->ReadAs(DoubleBaseType);

	// Field : HasProjectile
	stream->ReadAs(HasProjectile);

	// Field : HasAOE
	stream->ReadAs(HasAOE);

	// Field : DeathAnimID
	stream->ReadAs(DeathAnimID);

	// Field : FlinchSoundEvents
	stream->ReadString(FlinchSoundEvents);
	FlinchSoundEvents_hash = static_cast<uint32>(glitch::core::hashString(FlinchSoundEvents));

	// Field : SwingSoundEvents
	stream->ReadString(SwingSoundEvents);
	SwingSoundEvents_hash = static_cast<uint32>(glitch::core::hashString(SwingSoundEvents));

	// Field : ReloadTime
	stream->ReadAs(ReloadTime_f);

	// Field : DeathAnimation
	stream->ReadString(DeathAnimation);
	DeathAnimation_hash = static_cast<uint32>(glitch::core::hashString(DeathAnimation));

	// Field : DeathAnimationNum
	stream->ReadAs(DeathAnimationNum);

	// Field : DeathBackAnimation
	stream->ReadString(DeathBackAnimation);
	DeathBackAnimation_hash = static_cast<uint32>(glitch::core::hashString(DeathBackAnimation));

	// Field : DeathBackAnimationNum
	stream->ReadAs(DeathBackAnimationNum);

	// Field : doorAnimations
	stream->ReadString(doorAnimations);
	doorAnimations_hash = static_cast<uint32>(glitch::core::hashString(doorAnimations));

	// Field : doorCloseSound
	stream->ReadString(doorCloseSound);
	doorCloseSound_hash = static_cast<uint32>(glitch::core::hashString(doorCloseSound));

	// Field : doorDummies
	stream->ReadAs(doorDummies);

	// Field : doorOpenSound
	stream->ReadString(doorOpenSound);
	doorOpenSound_hash = static_cast<uint32>(glitch::core::hashString(doorOpenSound));

	// Field : doorSeatsAndSeatDoors
	stream->ReadAs(doorSeatsAndSeatDoors);

	// Field : seatDummies
	stream->ReadAs(seatDummies);

	// Field : seat
	stream->ReadAs(seat);

	// Field : seatAlt
	stream->ReadAs(seatAlt);

	// Field : door
	stream->ReadAs(door);

	// Field : doorAlt
	stream->ReadAs(doorAlt);

}

void types_info_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : WeaponSelIcon
	if (WeaponSelIcon && WeaponSelIcon[0] != '\0') gll_delete[] WeaponSelIcon;
	WeaponSelIcon = 0;

	// Field : FlinchSoundEvents
	if (FlinchSoundEvents && FlinchSoundEvents[0] != '\0') gll_delete[] FlinchSoundEvents;
	FlinchSoundEvents = 0;

	// Field : SwingSoundEvents
	if (SwingSoundEvents && SwingSoundEvents[0] != '\0') gll_delete[] SwingSoundEvents;
	SwingSoundEvents = 0;

	// Field : DeathAnimation
	if (DeathAnimation && DeathAnimation[0] != '\0') gll_delete[] DeathAnimation;
	DeathAnimation = 0;

	// Field : DeathBackAnimation
	if (DeathBackAnimation && DeathBackAnimation[0] != '\0') gll_delete[] DeathBackAnimation;
	DeathBackAnimation = 0;

	// Field : doorAnimations
	if (doorAnimations && doorAnimations[0] != '\0') gll_delete[] doorAnimations;
	doorAnimations = 0;

	// Field : doorCloseSound
	if (doorCloseSound && doorCloseSound[0] != '\0') gll_delete[] doorCloseSound;
	doorCloseSound = 0;

	// Field : doorOpenSound
	if (doorOpenSound && doorOpenSound[0] != '\0') gll_delete[] doorOpenSound;
	doorOpenSound = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : types_info
size_t types_info::size = 0;
types_info::struct_type* types_info::entries = 0;

void types_info::Load(StreamBase* stream)
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

void types_info::Unload()
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

