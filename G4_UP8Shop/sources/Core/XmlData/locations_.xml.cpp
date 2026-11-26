#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/locations_.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : locations__struct
void locations__struct::Init()
{
	base_struct::Init();

	// Field : hysteresis
	hysteresis = 0;

	// Field : range
	range_f = 0.0f;

	// Field : displayLastLevel
	displayLastLevel = 0;

	// Field : generateLastLevel
	generateLastLevel = 0;

	// Field : ranges
	ranges_f = 0.0f;

	// Field : ranges2
	ranges2_f = 0.0f;

}

void locations__struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : hysteresis
	stream->ReadAs(hysteresis);

	// Field : range
	stream->ReadAs(range_f);

	// Field : displayLastLevel
	stream->ReadAs(displayLastLevel);

	// Field : generateLastLevel
	stream->ReadAs(generateLastLevel);

	// Field : ranges
	stream->ReadAs(ranges_f);

	// Field : ranges2
	stream->ReadAs(ranges2_f);

}

void locations__struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : locations_
size_t locations_::size = 0;
locations_::struct_type* locations_::entries = 0;

void locations_::Load(StreamBase* stream)
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

void locations_::Unload()
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

