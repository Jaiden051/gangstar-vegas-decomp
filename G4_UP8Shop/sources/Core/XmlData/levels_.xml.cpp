#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/levels_.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : levels__struct
void levels__struct::Init()
{
	base_struct::Init();

	// Field : allowFollowers
	allowFollowers = 0;

	// Field : entryPoint
	entryPoint = 0;

	// Field : isInterior
	isInterior = 0;

	// Field : apex
	apex = 0;

	// Field : grapher
	grapher = 0;

	// Field : navMesh
	navMesh = 0;

	// Field : keepNavMeshLoaded
	keepNavMeshLoaded = 0;

	// Field : isCity
	isCity = 0;

	// Field : spawnInputsPresetInterior
	spawnInputsPresetInterior = 0;

	// Field : spawnInputsPresetCopInterior
	spawnInputsPresetCopInterior = 0;

	// Field : MapInfo
	MapInfo = 0;

	// Field : lightZone
	lightZone = 0;

	// Field : irradianceFile
	irradianceFile = 0;
	irradianceFile_hash = 0;

	// Field : backdropFile
	backdropFile = 0;
	backdropFile_hash = 0;

	// Field : backdropPosX
	backdropPosX_f = 0.0f;

	// Field : backdropPosY
	backdropPosY_f = 0.0f;

	// Field : backdropPosZ
	backdropPosZ_f = 0.0f;

	// Field : StopSounds
	StopSounds = 0;
	StopSounds_hash = 0;

}

void levels__struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : allowFollowers
	stream->ReadAs(allowFollowers);

	// Field : entryPoint
	stream->ReadAs(entryPoint);

	// Field : isInterior
	stream->ReadAs(isInterior);

	// Field : apex
	stream->ReadAs(apex);

	// Field : grapher
	stream->ReadAs(grapher);

	// Field : navMesh
	stream->ReadAs(navMesh);

	// Field : keepNavMeshLoaded
	stream->ReadAs(keepNavMeshLoaded);

	// Field : isCity
	stream->ReadAs(isCity);

	// Field : spawnInputsPresetInterior
	stream->ReadAs(spawnInputsPresetInterior);

	// Field : spawnInputsPresetCopInterior
	stream->ReadAs(spawnInputsPresetCopInterior);

	// Field : MapInfo
	stream->ReadAs(MapInfo);

	// Field : lightZone
	stream->ReadAs(lightZone);

	// Field : irradianceFile
	stream->ReadString(irradianceFile);
	irradianceFile_hash = static_cast<uint32>(glitch::core::hashString(irradianceFile));

	// Field : backdropFile
	stream->ReadString(backdropFile);
	backdropFile_hash = static_cast<uint32>(glitch::core::hashString(backdropFile));

	// Field : backdropPosX
	stream->ReadAs(backdropPosX_f);

	// Field : backdropPosY
	stream->ReadAs(backdropPosY_f);

	// Field : backdropPosZ
	stream->ReadAs(backdropPosZ_f);

	// Field : StopSounds
	stream->ReadString(StopSounds);
	StopSounds_hash = static_cast<uint32>(glitch::core::hashString(StopSounds));

}

void levels__struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : irradianceFile
	if (irradianceFile && irradianceFile[0] != '\0') gll_delete[] irradianceFile;
	irradianceFile = 0;

	// Field : backdropFile
	if (backdropFile && backdropFile[0] != '\0') gll_delete[] backdropFile;
	backdropFile = 0;

	// Field : StopSounds
	if (StopSounds && StopSounds[0] != '\0') gll_delete[] StopSounds;
	StopSounds = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : levels_
size_t levels_::size = 0;
levels_::struct_type* levels_::entries = 0;

void levels_::Load(StreamBase* stream)
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

void levels_::Unload()
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

