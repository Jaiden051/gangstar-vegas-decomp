#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_wanted_level.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_wanted_level_struct
void giv_wanted_level_struct::Init()
{
	base_struct::Init();

	// Field : Alias
	Alias = 0;

	// Field : Reference
	Reference = 0;

}

void giv_wanted_level_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Alias
	stream->ReadAs(Alias);

	// Field : Reference
	stream->ReadAs(Reference);

}

void giv_wanted_level_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_wanted_level
size_t giv_wanted_level::size = 0;
giv_wanted_level::struct_type* giv_wanted_level::entries = 0;

void giv_wanted_level::Load(StreamBase* stream)
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

void giv_wanted_level::Unload()
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

