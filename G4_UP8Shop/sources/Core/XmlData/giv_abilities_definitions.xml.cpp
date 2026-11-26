#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_abilities_definitions.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_abilities_definitions_struct
void giv_abilities_definitions_struct::Init()
{
	base_struct::Init();

	// Field : Primitive
	Primitive = 0;

	// Field : ModelVerticalOffset
	ModelVerticalOffset = 0;
	ModelVerticalOffset_hash = 0;

}

void giv_abilities_definitions_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Primitive
	stream->ReadAs(Primitive);

	// Field : ModelVerticalOffset
	stream->ReadString(ModelVerticalOffset);
	ModelVerticalOffset_hash = static_cast<uint32>(glitch::core::hashString(ModelVerticalOffset));

}

void giv_abilities_definitions_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : ModelVerticalOffset
	if (ModelVerticalOffset && ModelVerticalOffset[0] != '\0') gll_delete[] ModelVerticalOffset;
	ModelVerticalOffset = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_abilities_definitions
size_t giv_abilities_definitions::size = 0;
giv_abilities_definitions::struct_type* giv_abilities_definitions::entries = 0;

void giv_abilities_definitions::Load(StreamBase* stream)
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

void giv_abilities_definitions::Unload()
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

