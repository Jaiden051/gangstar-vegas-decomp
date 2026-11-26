#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_damageinfo.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_damageinfo_struct
void giv_damageinfo_struct::Init()
{
	base_struct::Init();

	// Field : Explosion
	Explosion = 0;

	// Field : Fire
	Fire = 0;

	// Field : x
	x = 0;

	// Field : y
	y = 0;

	// Field : z
	z = 0;

}

void giv_damageinfo_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : Explosion
	stream->ReadAs(Explosion);

	// Field : Fire
	stream->ReadAs(Fire);

	// Field : x
	stream->ReadAs(x);

	// Field : y
	stream->ReadAs(y);

	// Field : z
	stream->ReadAs(z);

}

void giv_damageinfo_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_damageinfo
size_t giv_damageinfo::size = 0;
giv_damageinfo::struct_type* giv_damageinfo::entries = 0;

void giv_damageinfo::Load(StreamBase* stream)
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

void giv_damageinfo::Unload()
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

