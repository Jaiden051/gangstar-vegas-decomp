#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_real_estate.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_real_estate_struct
void giv_real_estate_struct::Init()
{
	base_struct::Init();

	// Field : RespawnPoint
	RespawnPoint = 0;

	// Field : TypeOrder
	TypeOrder = 0;

	// Field : Stash_Start
	Stash_Start = 0;

	// Field : Timer_Start
	Timer_Start_f = 0.0f;

	// Field : Stash_Upgrades
	Stash_Upgrades = 0;

	// Field : Timer_Upgrades
	Timer_Upgrades_f = 0.0f;

	// Field : Price_Upgrades
	Price_Upgrades = 0;

	// Field : Cost
	Cost = 0;

	// Field : Payout
	Payout = 0;

}

void giv_real_estate_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : RespawnPoint
	stream->ReadAs(RespawnPoint);

	// Field : TypeOrder
	stream->ReadAs(TypeOrder);

	// Field : Stash_Start
	stream->ReadAs(Stash_Start);

	// Field : Timer_Start
	stream->ReadAs(Timer_Start_f);

	// Field : Stash_Upgrades
	stream->ReadAs(Stash_Upgrades);

	// Field : Timer_Upgrades
	stream->ReadAs(Timer_Upgrades_f);

	// Field : Price_Upgrades
	stream->ReadAs(Price_Upgrades);

	// Field : Cost
	stream->ReadAs(Cost);

	// Field : Payout
	stream->ReadAs(Payout);

}

void giv_real_estate_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_real_estate
size_t giv_real_estate::size = 0;
giv_real_estate::struct_type* giv_real_estate::entries = 0;

void giv_real_estate::Load(StreamBase* stream)
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

void giv_real_estate::Unload()
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

