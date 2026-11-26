#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/physics_export.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : physics_export_struct
void physics_export_struct::Init()
{
	base_struct::Init();

	// Field : energyRestitution
	energyRestitution = 0;

	// Field : friction
	friction_f = 0.0f;

	// Field : restitution
	restitution = 0;

}

void physics_export_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : energyRestitution
	stream->ReadAs(energyRestitution);

	// Field : friction
	stream->ReadAs(friction_f);

	// Field : restitution
	stream->ReadAs(restitution);

}

void physics_export_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : physics_export
size_t physics_export::size = 0;
physics_export::struct_type* physics_export::entries = 0;

void physics_export::Load(StreamBase* stream)
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

void physics_export::Unload()
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

