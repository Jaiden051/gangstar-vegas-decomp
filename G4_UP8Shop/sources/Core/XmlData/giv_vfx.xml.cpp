#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_vfx.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_vfx_struct
void giv_vfx_struct::Init()
{
	base_struct::Init();

	// Field : MayhemPoints
	MayhemPoints = 0;

	// Field : Radius
	Radius_f = 0.0f;

	// Field : StuckDespawnRadius
	StuckDespawnRadius_f = 0.0f;

	// Field : AutoIncreaseTimer
	AutoIncreaseTimer_f = 0.0f;

	// Field : EscapeTimeout
	EscapeTimeout_f = 0.0f;

	// Field : FrozenEscapedTime
	FrozenEscapedTime_f = 0.0f;

	// Field : NumCops
	NumCops = 0;

	// Field : RatioInVehicleIfOnFoot
	RatioInVehicleIfOnFoot_f = 0.0f;

	// Field : RatioInVehicleIfInVehicle
	RatioInVehicleIfInVehicle_f = 0.0f;

	// Field : OnFootSpawns
	OnFootSpawns = 0;

	// Field : VehicleSpawns
	VehicleSpawns = 0;

	// Field : WantsToRamTarget
	WantsToRamTarget = 0;

	// Field : SpawnRoadBlocks
	SpawnRoadBlocks = 0;

	// Field : StatCounter_Escape
	StatCounter_Escape = 0;

	// Field : Values
	Values = 0;

}

void giv_vfx_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : MayhemPoints
	stream->ReadAs(MayhemPoints);

	// Field : Radius
	stream->ReadAs(Radius_f);

	// Field : StuckDespawnRadius
	stream->ReadAs(StuckDespawnRadius_f);

	// Field : AutoIncreaseTimer
	stream->ReadAs(AutoIncreaseTimer_f);

	// Field : EscapeTimeout
	stream->ReadAs(EscapeTimeout_f);

	// Field : FrozenEscapedTime
	stream->ReadAs(FrozenEscapedTime_f);

	// Field : NumCops
	stream->ReadAs(NumCops);

	// Field : RatioInVehicleIfOnFoot
	stream->ReadAs(RatioInVehicleIfOnFoot_f);

	// Field : RatioInVehicleIfInVehicle
	stream->ReadAs(RatioInVehicleIfInVehicle_f);

	// Field : OnFootSpawns
	stream->ReadAs(OnFootSpawns);

	// Field : VehicleSpawns
	stream->ReadAs(VehicleSpawns);

	// Field : WantsToRamTarget
	stream->ReadAs(WantsToRamTarget);

	// Field : SpawnRoadBlocks
	stream->ReadAs(SpawnRoadBlocks);

	// Field : StatCounter_Escape
	stream->ReadAs(StatCounter_Escape);

	// Field : Values
	stream->ReadAs(Values);

}

void giv_vfx_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_vfx
size_t giv_vfx::size = 0;
giv_vfx::struct_type* giv_vfx::entries = 0;

void giv_vfx::Load(StreamBase* stream)
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

void giv_vfx::Unload()
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

