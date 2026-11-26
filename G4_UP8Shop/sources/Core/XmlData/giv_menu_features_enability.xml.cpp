#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_menu_features_enability.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_menu_features_enability_struct
void giv_menu_features_enability_struct::Init()
{
	base_struct::Init();

	// Field : AnimationName
	AnimationName = 0;
	AnimationName_hash = 0;

	// Field : Context
	Context = 0;
	Context_hash = 0;

	// Field : SpawnPrimitive
	SpawnPrimitive = 0;

	// Field : RotationAngle
	RotationAngle_f = 0.0f;

}

void giv_menu_features_enability_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : AnimationName
	stream->ReadString(AnimationName);
	AnimationName_hash = static_cast<uint32>(glitch::core::hashString(AnimationName));

	// Field : Context
	stream->ReadString(Context);
	Context_hash = static_cast<uint32>(glitch::core::hashString(Context));

	// Field : SpawnPrimitive
	stream->ReadAs(SpawnPrimitive);

	// Field : RotationAngle
	stream->ReadAs(RotationAngle_f);

}

void giv_menu_features_enability_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : AnimationName
	if (AnimationName && AnimationName[0] != '\0') gll_delete[] AnimationName;
	AnimationName = 0;

	// Field : Context
	if (Context && Context[0] != '\0') gll_delete[] Context;
	Context = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_menu_features_enability
size_t giv_menu_features_enability::size = 0;
giv_menu_features_enability::struct_type* giv_menu_features_enability::entries = 0;

void giv_menu_features_enability::Load(StreamBase* stream)
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

void giv_menu_features_enability::Unload()
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

