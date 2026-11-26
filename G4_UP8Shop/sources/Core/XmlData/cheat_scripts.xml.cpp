#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/cheat_scripts.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : cheat_scripts_struct
void cheat_scripts_struct::Init()
{
	base_struct::Init();

	// Field : Ids
	Ids = 0;

}

void cheat_scripts_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Ids
	stream->ReadAs(Ids);

}

void cheat_scripts_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : cheat_scripts
size_t cheat_scripts::size = 0;
cheat_scripts::struct_type* cheat_scripts::entries = 0;

void cheat_scripts::Load(StreamBase* stream)
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

void cheat_scripts::Unload()
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

