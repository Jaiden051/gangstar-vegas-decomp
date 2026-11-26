#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/palettes.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : palettes_struct
void palettes_struct::Init()
{
	base_struct::Init();

	// Field : AnimSpeed
	AnimSpeed_f = 0.0f;

	// Field : TurnIdleToIdle
	TurnIdleToIdle = 0;

	// Field : TurnIdleToWalk
	TurnIdleToWalk = 0;

	// Field : TurnIdleToRun
	TurnIdleToRun = 0;

	// Field : TurnWalkToWalk
	TurnWalkToWalk = 0;

	// Field : TurnRunToRun
	TurnRunToRun = 0;

	// Field : StrafeIdleToIdle
	StrafeIdleToIdle = 0;

	// Field : StrafeIdleToWalk
	StrafeIdleToWalk = 0;

	// Field : StrafeIdleToRun
	StrafeIdleToRun = 0;

	// Field : StrafeWalkToWalk
	StrafeWalkToWalk = 0;
	StrafeWalkToWalk_hash = 0;

	// Field : StrafeRunToRun
	StrafeRunToRun = 0;
	StrafeRunToRun_hash = 0;

	// Field : AimIdleToIdle
	AimIdleToIdle = 0;

	// Field : AimIdleToWalk
	AimIdleToWalk = 0;

	// Field : AimIdleToRun
	AimIdleToRun = 0;

	// Field : AimWalkToWalk
	AimWalkToWalk = 0;

	// Field : AimRunToRun
	AimRunToRun = 0;

	// Field : AimCoverCrouchLeft
	AimCoverCrouchLeft = 0;

	// Field : AimCoverCrouchRight
	AimCoverCrouchRight = 0;

	// Field : AimCoverOverLeft
	AimCoverOverLeft = 0;

	// Field : AimCoverOverRight
	AimCoverOverRight = 0;

	// Field : AimCoverStandUpLeft
	AimCoverStandUpLeft = 0;

	// Field : AimCoverStandUpRight
	AimCoverStandUpRight = 0;

	// Field : ThrowIdleToIdle
	ThrowIdleToIdle = 0;

	// Field : ThrowIdleToWalk
	ThrowIdleToWalk = 0;

	// Field : ThrowIdleToRun
	ThrowIdleToRun = 0;

	// Field : ThrowWalkToWalk
	ThrowWalkToWalk = 0;

	// Field : ThrowRunToRun
	ThrowRunToRun = 0;

	// Field : ThrowAimIdleToIdle
	ThrowAimIdleToIdle = 0;

	// Field : ThrowAimIdleToWalk
	ThrowAimIdleToWalk = 0;

	// Field : ThrowAimIdleToRun
	ThrowAimIdleToRun = 0;

	// Field : ThrowAimWalkToWalk
	ThrowAimWalkToWalk = 0;

	// Field : ThrowAimRunToRun
	ThrowAimRunToRun = 0;

	// Field : LeanSkydive
	LeanSkydive = 0;

	// Field : LeanDriver
	LeanDriver = 0;

	// Field : LeanDriverStopped
	LeanDriverStopped = 0;

	// Field : AimDriverOneHanded
	AimDriverOneHanded = 0;

	// Field : AimDriverDual
	AimDriverDual = 0;

	// Field : LeanPassenger
	LeanPassenger = 0;

	// Field : AimPassengerOneHanded
	AimPassengerOneHanded = 0;

	// Field : AimPassengerDual
	AimPassengerDual = 0;

	// Field : AimPassengerTwoHanded
	AimPassengerTwoHanded = 0;

}

void palettes_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : AnimSpeed
	stream->ReadAs(AnimSpeed_f);

	// Field : TurnIdleToIdle
	stream->ReadAs(TurnIdleToIdle);

	// Field : TurnIdleToWalk
	stream->ReadAs(TurnIdleToWalk);

	// Field : TurnIdleToRun
	stream->ReadAs(TurnIdleToRun);

	// Field : TurnWalkToWalk
	stream->ReadAs(TurnWalkToWalk);

	// Field : TurnRunToRun
	stream->ReadAs(TurnRunToRun);

	// Field : StrafeIdleToIdle
	stream->ReadAs(StrafeIdleToIdle);

	// Field : StrafeIdleToWalk
	stream->ReadAs(StrafeIdleToWalk);

	// Field : StrafeIdleToRun
	stream->ReadAs(StrafeIdleToRun);

	// Field : StrafeWalkToWalk
	stream->ReadString(StrafeWalkToWalk);
	StrafeWalkToWalk_hash = static_cast<uint32>(glitch::core::hashString(StrafeWalkToWalk));

	// Field : StrafeRunToRun
	stream->ReadString(StrafeRunToRun);
	StrafeRunToRun_hash = static_cast<uint32>(glitch::core::hashString(StrafeRunToRun));

	// Field : AimIdleToIdle
	stream->ReadAs(AimIdleToIdle);

	// Field : AimIdleToWalk
	stream->ReadAs(AimIdleToWalk);

	// Field : AimIdleToRun
	stream->ReadAs(AimIdleToRun);

	// Field : AimWalkToWalk
	stream->ReadAs(AimWalkToWalk);

	// Field : AimRunToRun
	stream->ReadAs(AimRunToRun);

	// Field : AimCoverCrouchLeft
	stream->ReadAs(AimCoverCrouchLeft);

	// Field : AimCoverCrouchRight
	stream->ReadAs(AimCoverCrouchRight);

	// Field : AimCoverOverLeft
	stream->ReadAs(AimCoverOverLeft);

	// Field : AimCoverOverRight
	stream->ReadAs(AimCoverOverRight);

	// Field : AimCoverStandUpLeft
	stream->ReadAs(AimCoverStandUpLeft);

	// Field : AimCoverStandUpRight
	stream->ReadAs(AimCoverStandUpRight);

	// Field : ThrowIdleToIdle
	stream->ReadAs(ThrowIdleToIdle);

	// Field : ThrowIdleToWalk
	stream->ReadAs(ThrowIdleToWalk);

	// Field : ThrowIdleToRun
	stream->ReadAs(ThrowIdleToRun);

	// Field : ThrowWalkToWalk
	stream->ReadAs(ThrowWalkToWalk);

	// Field : ThrowRunToRun
	stream->ReadAs(ThrowRunToRun);

	// Field : ThrowAimIdleToIdle
	stream->ReadAs(ThrowAimIdleToIdle);

	// Field : ThrowAimIdleToWalk
	stream->ReadAs(ThrowAimIdleToWalk);

	// Field : ThrowAimIdleToRun
	stream->ReadAs(ThrowAimIdleToRun);

	// Field : ThrowAimWalkToWalk
	stream->ReadAs(ThrowAimWalkToWalk);

	// Field : ThrowAimRunToRun
	stream->ReadAs(ThrowAimRunToRun);

	// Field : LeanSkydive
	stream->ReadAs(LeanSkydive);

	// Field : LeanDriver
	stream->ReadAs(LeanDriver);

	// Field : LeanDriverStopped
	stream->ReadAs(LeanDriverStopped);

	// Field : AimDriverOneHanded
	stream->ReadAs(AimDriverOneHanded);

	// Field : AimDriverDual
	stream->ReadAs(AimDriverDual);

	// Field : LeanPassenger
	stream->ReadAs(LeanPassenger);

	// Field : AimPassengerOneHanded
	stream->ReadAs(AimPassengerOneHanded);

	// Field : AimPassengerDual
	stream->ReadAs(AimPassengerDual);

	// Field : AimPassengerTwoHanded
	stream->ReadAs(AimPassengerTwoHanded);

}

void palettes_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : StrafeWalkToWalk
	if (StrafeWalkToWalk && StrafeWalkToWalk[0] != '\0') gll_delete[] StrafeWalkToWalk;
	StrafeWalkToWalk = 0;

	// Field : StrafeRunToRun
	if (StrafeRunToRun && StrafeRunToRun[0] != '\0') gll_delete[] StrafeRunToRun;
	StrafeRunToRun = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : palettes
size_t palettes::size = 0;
palettes::struct_type* palettes::entries = 0;

void palettes::Load(StreamBase* stream)
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

void palettes::Unload()
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

