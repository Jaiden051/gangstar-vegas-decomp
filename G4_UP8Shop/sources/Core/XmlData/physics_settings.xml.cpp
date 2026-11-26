#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/physics_settings.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : physics_settings_struct
void physics_settings_struct::Init()
{
	base_struct::Init();

	// Field : Current
	Current = 0;

	// Field : Next
	Next = 0;

	// Field : End
	End = 0;

}

void physics_settings_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Current
	stream->ReadAs(Current);

	// Field : Next
	stream->ReadAs(Next);

	// Field : End
	stream->ReadAs(End);

}

void physics_settings_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : physics_settings
size_t physics_settings::size = 0;
physics_settings::struct_type* physics_settings::entries = 0;

void physics_settings::Load(StreamBase* stream)
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

void physics_settings::Unload()
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

