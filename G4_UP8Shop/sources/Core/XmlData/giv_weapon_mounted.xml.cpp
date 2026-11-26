#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_weapon_mounted.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_weapon_mounted_struct
void giv_weapon_mounted_struct::Init()
{
	base_struct::Init();

	// Field : AmmoNum
	AmmoNum = 0;

}

void giv_weapon_mounted_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : AmmoNum
	stream->ReadAs(AmmoNum);

}

void giv_weapon_mounted_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_weapon_mounted
size_t giv_weapon_mounted::size = 0;
giv_weapon_mounted::struct_type* giv_weapon_mounted::entries = 0;

void giv_weapon_mounted::Load(StreamBase* stream)
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

void giv_weapon_mounted::Unload()
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

