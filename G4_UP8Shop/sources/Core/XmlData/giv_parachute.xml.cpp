#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_parachute.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_parachute_struct
void giv_parachute_struct::Init()
{
	base_struct::Init();

	// Field : timerLength
	timerLength_f = 0.0f;

	// Field : resetTimerCost
	resetTimerCost_f = 0.0f;

	// Field : lootTables
	lootTables = 0;

	// Field : numItems
	numItems = 0;

	// Field : itemList
	itemList = 0;

}

void giv_parachute_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : timerLength
	stream->ReadAs(timerLength_f);

	// Field : resetTimerCost
	stream->ReadAs(resetTimerCost_f);

	// Field : lootTables
	stream->ReadAs(lootTables);

	// Field : numItems
	stream->ReadAs(numItems);

	// Field : itemList
	stream->ReadAs(itemList);

}

void giv_parachute_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_parachute
size_t giv_parachute::size = 0;
giv_parachute::struct_type* giv_parachute::entries = 0;

void giv_parachute::Load(StreamBase* stream)
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

void giv_parachute::Unload()
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

