#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/cheat_settings.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : cheat_settings_struct
void cheat_settings_struct::Init()
{
	base_struct::Init();

	// Field : ID
	ID = 0;

	// Field : name
	name = 0;
	name_hash = 0;

	// Field : value
	value = 0;

}

void cheat_settings_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : ID
	stream->ReadAs(ID);

	// Field : name
	stream->ReadString(name);
	name_hash = static_cast<uint32>(glitch::core::hashString(name));

	// Field : value
	stream->ReadAs(value);

}

void cheat_settings_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : name
	if (name && name[0] != '\0') gll_delete[] name;
	name = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : cheat_settings
size_t cheat_settings::size = 0;
cheat_settings::struct_type* cheat_settings::entries = 0;

void cheat_settings::Load(StreamBase* stream)
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

void cheat_settings::Unload()
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

