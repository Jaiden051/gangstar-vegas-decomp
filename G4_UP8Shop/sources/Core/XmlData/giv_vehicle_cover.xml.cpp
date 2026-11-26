#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_vehicle_cover.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_vehicle_cover_struct
void giv_vehicle_cover_struct::Init()
{
	base_struct::Init();

	// Field : isAttached
	isAttached = 0;

	// Field : targetDummy
	targetDummy = 0;

	// Field : syncTransform
	syncTransform = 0;

	// Field : syncVisibility
	syncVisibility = 0;

	// Field : offset
	offset_f = 0.0f;

	// Field : offsetIsInWorldSpace
	offsetIsInWorldSpace_f = 0.0f;

	// Field : scale
	scale_f = 0.0f;

	// Field : loopCount
	loopCount = 0;

	// Field : pauseAtEnd
	pauseAtEnd = 0;

	// Field : bdaeForPlayer
	bdaeForPlayer = 0;

	// Field : DespawnTimer
	DespawnTimer_f = 0.0f;

	// Field : DespawnAlphaFade
	DespawnAlphaFade = 0;

	// Field : DespawnWithParent
	DespawnWithParent = 0;

	// Field : DespawnWithParentVisibility
	DespawnWithParentVisibility = 0;

	// Field : minInstance
	minInstance = 0;

	// Field : maxInstance
	maxInstance = 0;

	// Field : SoundFX
	SoundFX = 0;
	SoundFX_hash = 0;

	// Field : StopSoundWhenFXEnd
	StopSoundWhenFXEnd = 0;
	StopSoundWhenFXEnd_hash = 0;

	// Field : LowResPoolInstances
	LowResPoolInstances = 0;

	// Field : hack_applyStartIdleEndFix
	hack_applyStartIdleEndFix = 0;

}

void giv_vehicle_cover_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : isAttached
	stream->ReadAs(isAttached);

	// Field : targetDummy
	stream->ReadAs(targetDummy);

	// Field : syncTransform
	stream->ReadAs(syncTransform);

	// Field : syncVisibility
	stream->ReadAs(syncVisibility);

	// Field : offset
	stream->ReadAs(offset_f);

	// Field : offsetIsInWorldSpace
	stream->ReadAs(offsetIsInWorldSpace_f);

	// Field : scale
	stream->ReadAs(scale_f);

	// Field : loopCount
	stream->ReadAs(loopCount);

	// Field : pauseAtEnd
	stream->ReadAs(pauseAtEnd);

	// Field : bdaeForPlayer
	stream->ReadAs(bdaeForPlayer);

	// Field : DespawnTimer
	stream->ReadAs(DespawnTimer_f);

	// Field : DespawnAlphaFade
	stream->ReadAs(DespawnAlphaFade);

	// Field : DespawnWithParent
	stream->ReadAs(DespawnWithParent);

	// Field : DespawnWithParentVisibility
	stream->ReadAs(DespawnWithParentVisibility);

	// Field : minInstance
	stream->ReadAs(minInstance);

	// Field : maxInstance
	stream->ReadAs(maxInstance);

	// Field : SoundFX
	stream->ReadString(SoundFX);
	SoundFX_hash = static_cast<uint32>(glitch::core::hashString(SoundFX));

	// Field : StopSoundWhenFXEnd
	stream->ReadString(StopSoundWhenFXEnd);
	StopSoundWhenFXEnd_hash = static_cast<uint32>(glitch::core::hashString(StopSoundWhenFXEnd));

	// Field : LowResPoolInstances
	stream->ReadAs(LowResPoolInstances);

	// Field : hack_applyStartIdleEndFix
	stream->ReadAs(hack_applyStartIdleEndFix);

}

void giv_vehicle_cover_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : SoundFX
	if (SoundFX && SoundFX[0] != '\0') gll_delete[] SoundFX;
	SoundFX = 0;

	// Field : StopSoundWhenFXEnd
	if (StopSoundWhenFXEnd && StopSoundWhenFXEnd[0] != '\0') gll_delete[] StopSoundWhenFXEnd;
	StopSoundWhenFXEnd = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_vehicle_cover
size_t giv_vehicle_cover::size = 0;
giv_vehicle_cover::struct_type* giv_vehicle_cover::entries = 0;

void giv_vehicle_cover::Load(StreamBase* stream)
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

void giv_vehicle_cover::Unload()
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

