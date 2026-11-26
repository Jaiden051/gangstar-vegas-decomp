#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_fadeinfos.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_fadeinfos_struct
void giv_fadeinfos_struct::Init()
{
	base_struct::Init();

	// Field : toggleToFalse
	toggleToFalse = 0;

	// Field : toggleToTrue
	toggleToTrue = 0;

}

void giv_fadeinfos_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : toggleToFalse
	stream->ReadAs(toggleToFalse);

	// Field : toggleToTrue
	stream->ReadAs(toggleToTrue);

}

void giv_fadeinfos_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_fadeinfos
size_t giv_fadeinfos::size = 0;
giv_fadeinfos::struct_type* giv_fadeinfos::entries = 0;

void giv_fadeinfos::Load(StreamBase* stream)
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

void giv_fadeinfos::Unload()
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

