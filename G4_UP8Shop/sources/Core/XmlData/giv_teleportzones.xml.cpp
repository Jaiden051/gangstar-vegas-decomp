#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_teleportzones.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_teleportzones_struct
void giv_teleportzones_struct::Init()
{
	base_struct::Init();

	// Field : nodeName
	nodeName = 0;
	nodeName_hash = 0;

	// Field : coverType
	coverType = 0;

	// Field : coverList
	coverList = 0;

}

void giv_teleportzones_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : nodeName
	stream->ReadString(nodeName);
	nodeName_hash = static_cast<uint32>(glitch::core::hashString(nodeName));

	// Field : coverType
	stream->ReadAs(coverType);

	// Field : coverList
	stream->ReadAs(coverList);

}

void giv_teleportzones_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : nodeName
	if (nodeName && nodeName[0] != '\0') gll_delete[] nodeName;
	nodeName = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_teleportzones
size_t giv_teleportzones::size = 0;
giv_teleportzones::struct_type* giv_teleportzones::entries = 0;

void giv_teleportzones::Load(StreamBase* stream)
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

void giv_teleportzones::Unload()
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

