#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/camera_presets_groups.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : camera_presets_groups_struct
void camera_presets_groups_struct::Init()
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

void camera_presets_groups_struct::Load(StreamBase* stream)
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

void camera_presets_groups_struct::Unload()
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
// Array : camera_presets_groups
size_t camera_presets_groups::size = 0;
camera_presets_groups::struct_type* camera_presets_groups::entries = 0;

void camera_presets_groups::Load(StreamBase* stream)
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

void camera_presets_groups::Unload()
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

