#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/classesanim_id.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : classesanim_id_struct
void classesanim_id_struct::Init()
{
	base_struct::Init();

	// Field : ids
	ids = 0;

}

void classesanim_id_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : ids
	stream->ReadAs(ids);

}

void classesanim_id_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : classesanim_id
size_t classesanim_id::size = 0;
classesanim_id::struct_type* classesanim_id::entries = 0;

void classesanim_id::Load(StreamBase* stream)
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

void classesanim_id::Unload()
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

