#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/menu_hudelementgroup.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : menu_hudelementgroup_struct
void menu_hudelementgroup_struct::Init()
{
	base_struct::Init();

	// Field : LightZone
	LightZone = 0;

}

void menu_hudelementgroup_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : LightZone
	stream->ReadAs(LightZone);

}

void menu_hudelementgroup_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : menu_hudelementgroup
size_t menu_hudelementgroup::size = 0;
menu_hudelementgroup::struct_type* menu_hudelementgroup::entries = 0;

void menu_hudelementgroup::Load(StreamBase* stream)
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

void menu_hudelementgroup::Unload()
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

