#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_shaders.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_shaders_struct
void giv_shaders_struct::Init()
{
	base_struct::Init();

	// Field : innerRadius
	innerRadius_f = 0.0f;

	// Field : outerRadius
	outerRadius_f = 0.0f;

	// Field : despawnRadius
	despawnRadius_f = 0.0f;

	// Field : offScreenDespawnRadius
	offScreenDespawnRadius_f = 0.0f;

	// Field : minDistanceToObjects
	minDistanceToObjects_f = 0.0f;

	// Field : spawnPosConeValues
	spawnPosConeValues_f = 0.0f;

	// Field : spawnPosConeProbs
	spawnPosConeProbs_f = 0.0f;

	// Field : spawnOrientAngleValues
	spawnOrientAngleValues_f = 0.0f;

	// Field : spawnOrientAngleProbs
	spawnOrientAngleProbs_f = 0.0f;

	// Field : spawnTypeProbabilities
	spawnTypeProbabilities_f = 0.0f;

	// Field : maxSimultaneousSpawns
	maxSimultaneousSpawns_f = 0.0f;

	// Field : maxSimultaneousSpawnsInWater
	maxSimultaneousSpawnsInWater_f = 0.0f;

	// Field : maxSimultaneousSpawnsInAir
	maxSimultaneousSpawnsInAir_f = 0.0f;

}

void giv_shaders_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : innerRadius
	stream->ReadAs(innerRadius_f);

	// Field : outerRadius
	stream->ReadAs(outerRadius_f);

	// Field : despawnRadius
	stream->ReadAs(despawnRadius_f);

	// Field : offScreenDespawnRadius
	stream->ReadAs(offScreenDespawnRadius_f);

	// Field : minDistanceToObjects
	stream->ReadAs(minDistanceToObjects_f);

	// Field : spawnPosConeValues
	stream->ReadAs(spawnPosConeValues_f);

	// Field : spawnPosConeProbs
	stream->ReadAs(spawnPosConeProbs_f);

	// Field : spawnOrientAngleValues
	stream->ReadAs(spawnOrientAngleValues_f);

	// Field : spawnOrientAngleProbs
	stream->ReadAs(spawnOrientAngleProbs_f);

	// Field : spawnTypeProbabilities
	stream->ReadAs(spawnTypeProbabilities_f);

	// Field : maxSimultaneousSpawns
	stream->ReadAs(maxSimultaneousSpawns_f);

	// Field : maxSimultaneousSpawnsInWater
	stream->ReadAs(maxSimultaneousSpawnsInWater_f);

	// Field : maxSimultaneousSpawnsInAir
	stream->ReadAs(maxSimultaneousSpawnsInAir_f);

}

void giv_shaders_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_shaders
size_t giv_shaders::size = 0;
giv_shaders::struct_type* giv_shaders::entries = 0;

void giv_shaders::Load(StreamBase* stream)
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

void giv_shaders::Unload()
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

