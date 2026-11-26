#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_missions.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_missions_struct
void giv_missions_struct::Init()
{
	base_struct::Init();

	// Field : MinTotalSpent
	MinTotalSpent = 0;

	// Field : DiamondsAmount
	DiamondsAmount = 0;

}

void giv_missions_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : MinTotalSpent
	stream->ReadAs(MinTotalSpent);

	// Field : DiamondsAmount
	stream->ReadAs(DiamondsAmount);

}

void giv_missions_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_missions
size_t giv_missions::size = 0;
giv_missions::struct_type* giv_missions::entries = 0;

void giv_missions::Load(StreamBase* stream)
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

void giv_missions::Unload()
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

