#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/highlights_array.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : highlights_array_struct
void highlights_array_struct::Init()
{
	base_struct::Init();

	// Field : itemUnlock
	itemUnlock = 0;

	// Field : money
	money = 0;

	// Field : safeHouseEnter
	safeHouseEnter = 0;

	// Field : safeHouseExit
	safeHouseExit = 0;

	// Field : stats
	stats = 0;

}

void highlights_array_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : itemUnlock
	stream->ReadAs(itemUnlock);

	// Field : money
	stream->ReadAs(money);

	// Field : safeHouseEnter
	stream->ReadAs(safeHouseEnter);

	// Field : safeHouseExit
	stream->ReadAs(safeHouseExit);

	// Field : stats
	stream->ReadAs(stats);

}

void highlights_array_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : highlights_array
size_t highlights_array::size = 0;
highlights_array::struct_type* highlights_array::entries = 0;

void highlights_array::Load(StreamBase* stream)
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

void highlights_array::Unload()
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

