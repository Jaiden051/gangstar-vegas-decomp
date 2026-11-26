#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/stocks.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : stocks_struct
void stocks_struct::Init()
{
	base_struct::Init();

	// Field : AngleFactor
	AngleFactor_f = 0.0f;

	// Field : RangeFactor
	RangeFactor_f = 0.0f;

	// Field : ThreatFactor
	ThreatFactor_f = 0.0f;

	// Field : CameraFactor
	CameraFactor_f = 0.0f;

	// Field : AttackedFactor
	AttackedFactor_f = 0.0f;

	// Field : Aggressive
	Aggressive = 0;

	// Field : Angle
	Angle_f = 0.0f;

	// Field : Attacker
	Attacker = 0;

	// Field : Down
	Down = 0;

	// Field : Driving
	Driving = 0;

	// Field : Knockout
	Knockout = 0;

	// Field : LowHealth
	LowHealth = 0;

	// Field : MeleeToken
	MeleeToken = 0;

	// Field : NPCCurrentTarget
	NPCCurrentTarget = 0;

	// Field : Passive
	Passive = 0;

	// Field : PlayerCurrentTarget
	PlayerCurrentTarget = 0;

	// Field : MissionKillTarget
	MissionKillTarget = 0;

	// Field : IsVehicle
	IsVehicle = 0;

}

void stocks_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : AngleFactor
	stream->ReadAs(AngleFactor_f);

	// Field : RangeFactor
	stream->ReadAs(RangeFactor_f);

	// Field : ThreatFactor
	stream->ReadAs(ThreatFactor_f);

	// Field : CameraFactor
	stream->ReadAs(CameraFactor_f);

	// Field : AttackedFactor
	stream->ReadAs(AttackedFactor_f);

	// Field : Aggressive
	stream->ReadAs(Aggressive);

	// Field : Angle
	stream->ReadAs(Angle_f);

	// Field : Attacker
	stream->ReadAs(Attacker);

	// Field : Down
	stream->ReadAs(Down);

	// Field : Driving
	stream->ReadAs(Driving);

	// Field : Knockout
	stream->ReadAs(Knockout);

	// Field : LowHealth
	stream->ReadAs(LowHealth);

	// Field : MeleeToken
	stream->ReadAs(MeleeToken);

	// Field : NPCCurrentTarget
	stream->ReadAs(NPCCurrentTarget);

	// Field : Passive
	stream->ReadAs(Passive);

	// Field : PlayerCurrentTarget
	stream->ReadAs(PlayerCurrentTarget);

	// Field : MissionKillTarget
	stream->ReadAs(MissionKillTarget);

	// Field : IsVehicle
	stream->ReadAs(IsVehicle);

}

void stocks_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : stocks
size_t stocks::size = 0;
stocks::struct_type* stocks::entries = 0;

void stocks::Load(StreamBase* stream)
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

void stocks::Unload()
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

