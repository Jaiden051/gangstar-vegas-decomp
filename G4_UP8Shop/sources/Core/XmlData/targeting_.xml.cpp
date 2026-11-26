#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/targeting_.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : targeting__struct
void targeting__struct::Init()
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

void targeting__struct::Load(StreamBase* stream)
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

void targeting__struct::Unload()
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
// Array : targeting_
size_t targeting_::size = 0;
targeting_::struct_type* targeting_::entries = 0;

void targeting_::Load(StreamBase* stream)
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

void targeting_::Unload()
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

