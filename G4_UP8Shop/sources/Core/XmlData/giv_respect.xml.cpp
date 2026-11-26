#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_respect.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_respect_struct
void giv_respect_struct::Init()
{
	base_struct::Init();

	// Field : strength
	strength = 0;
	strength_hash = 0;

	// Field : branch
	branch = 0;

	// Field : detail
	detail = 0;

	// Field : freq
	freq = 0;

	// Field : direction
	direction = 0;

	// Field : factor
	factor_f = 0.0f;

}

void giv_respect_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : strength
	stream->ReadString(strength);
	strength_hash = static_cast<uint32>(glitch::core::hashString(strength));

	// Field : branch
	stream->ReadAs(branch);

	// Field : detail
	stream->ReadAs(detail);

	// Field : freq
	stream->ReadAs(freq);

	// Field : direction
	stream->ReadAs(direction);

	// Field : factor
	stream->ReadAs(factor_f);

}

void giv_respect_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : strength
	if (strength && strength[0] != '\0') gll_delete[] strength;
	strength = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_respect
size_t giv_respect::size = 0;
giv_respect::struct_type* giv_respect::entries = 0;

void giv_respect::Load(StreamBase* stream)
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

void giv_respect::Unload()
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

