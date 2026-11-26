#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_steering_behaviors.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_steering_behaviors_struct
void giv_steering_behaviors_struct::Init()
{
	base_struct::Init();

	// Field : RA_Completed
	RA_Completed = 0;

	// Field : GameCenterTrophy
	GameCenterTrophy = 0;

	// Field : TrophyStatCounters
	TrophyStatCounters = 0;

	// Field : TrophyQty
	TrophyQty = 0;

	// Field : TattooStatCounter
	TattooStatCounter = 0;

	// Field : TattooQty
	TattooQty = 0;

	// Field : OnlinePoints
	OnlinePoints = 0;

	// Field : CanBeEarnedLowRes
	CanBeEarnedLowRes = 0;

	// Field : RelatedMissionSections
	RelatedMissionSections = 0;

}

void giv_steering_behaviors_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : RA_Completed
	stream->ReadAs(RA_Completed);

	// Field : GameCenterTrophy
	stream->ReadAs(GameCenterTrophy);

	// Field : TrophyStatCounters
	stream->ReadAs(TrophyStatCounters);

	// Field : TrophyQty
	stream->ReadAs(TrophyQty);

	// Field : TattooStatCounter
	stream->ReadAs(TattooStatCounter);

	// Field : TattooQty
	stream->ReadAs(TattooQty);

	// Field : OnlinePoints
	stream->ReadAs(OnlinePoints);

	// Field : CanBeEarnedLowRes
	stream->ReadAs(CanBeEarnedLowRes);

	// Field : RelatedMissionSections
	stream->ReadAs(RelatedMissionSections);

}

void giv_steering_behaviors_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_steering_behaviors
size_t giv_steering_behaviors::size = 0;
giv_steering_behaviors::struct_type* giv_steering_behaviors::entries = 0;

void giv_steering_behaviors::Load(StreamBase* stream)
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

void giv_steering_behaviors::Unload()
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

