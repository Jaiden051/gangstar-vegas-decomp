#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/skills_.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : skills__struct
void skills__struct::Init()
{
	base_struct::Init();

	// Field : Palettes
	Palettes = 0;

	// Field : PaletteProbability
	PaletteProbability_f = 0.0f;

}

void skills__struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Palettes
	stream->ReadAs(Palettes);

	// Field : PaletteProbability
	stream->ReadAs(PaletteProbability_f);

}

void skills__struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : skills_
size_t skills_::size = 0;
skills_::struct_type* skills_::entries = 0;

void skills_::Load(StreamBase* stream)
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

void skills_::Unload()
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

