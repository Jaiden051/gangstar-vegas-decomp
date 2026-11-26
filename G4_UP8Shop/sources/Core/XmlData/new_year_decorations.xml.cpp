#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/new_year_decorations.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : new_year_decorations_struct
void new_year_decorations_struct::Init()
{
	base_struct::Init();

	// Field : TargetColor1
	TargetColor1 = 0;

	// Field : TargetColor2
	TargetColor2 = 0;

	// Field : TargetColor3
	TargetColor3 = 0;

	// Field : TargetColor4
	TargetColor4 = 0;

	// Field : FirstPaletteID
	FirstPaletteID = 0;

	// Field : LastPaletteID
	LastPaletteID = 0;

}

void new_year_decorations_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : TargetColor1
	stream->ReadAs(TargetColor1);

	// Field : TargetColor2
	stream->ReadAs(TargetColor2);

	// Field : TargetColor3
	stream->ReadAs(TargetColor3);

	// Field : TargetColor4
	stream->ReadAs(TargetColor4);

	// Field : FirstPaletteID
	stream->ReadAs(FirstPaletteID);

	// Field : LastPaletteID
	stream->ReadAs(LastPaletteID);

}

void new_year_decorations_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : new_year_decorations
size_t new_year_decorations::size = 0;
new_year_decorations::struct_type* new_year_decorations::entries = 0;

void new_year_decorations::Load(StreamBase* stream)
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

void new_year_decorations::Unload()
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

