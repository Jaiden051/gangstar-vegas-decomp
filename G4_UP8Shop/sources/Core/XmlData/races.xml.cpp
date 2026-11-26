#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/races.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : races_struct
void races_struct::Init()
{
	base_struct::Init();

	// Field : filename
	filename = 0;
	filename_hash = 0;

}

void races_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : filename
	stream->ReadString(filename);
	filename_hash = static_cast<uint32>(glitch::core::hashString(filename));

}

void races_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : filename
	if (filename && filename[0] != '\0') gll_delete[] filename;
	filename = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : races
size_t races::size = 0;
races::struct_type* races::entries = 0;

void races::Load(StreamBase* stream)
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

void races::Unload()
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

