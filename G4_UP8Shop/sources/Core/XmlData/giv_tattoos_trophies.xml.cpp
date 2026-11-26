#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_tattoos_trophies.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_tattoos_trophies_struct
void giv_tattoos_trophies_struct::Init()
{
	base_struct::Init();

	// Field : Photo
	Photo = 0;

}

void giv_tattoos_trophies_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Photo
	stream->ReadAs(Photo);

}

void giv_tattoos_trophies_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_tattoos_trophies
size_t giv_tattoos_trophies::size = 0;
giv_tattoos_trophies::struct_type* giv_tattoos_trophies::entries = 0;

void giv_tattoos_trophies::Load(StreamBase* stream)
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

void giv_tattoos_trophies::Unload()
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

