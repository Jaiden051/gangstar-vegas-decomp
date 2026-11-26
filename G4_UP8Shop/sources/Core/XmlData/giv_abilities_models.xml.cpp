#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_abilities_models.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_abilities_models_struct
void giv_abilities_models_struct::Init()
{
	base_struct::Init();

	// Field : knockDownLostHealthPercent
	knockDownLostHealthPercent = 0;

	// Field : knockDownDamageTimer
	knockDownDamageTimer_f = 0.0f;

	// Field : knockOutLostHealthPercent
	knockOutLostHealthPercent = 0;

	// Field : knockOutDamageTimer
	knockOutDamageTimer_f = 0.0f;

	// Field : meleeBlockPercent
	meleeBlockPercent = 0;

	// Field : meleeFierceStrikePercent
	meleeFierceStrikePercent = 0;
	meleeFierceStrikePercent_hash = 0;

	// Field : meleeMinTimeBetweenHits
	meleeMinTimeBetweenHits_f = 0.0f;

	// Field : meleeMaxTimeBetweenHits
	meleeMaxTimeBetweenHits_f = 0.0f;

	// Field : meleeMinTimeBeforeReposition
	meleeMinTimeBeforeReposition_f = 0.0f;

	// Field : meleeMaxTimeBeforeReposition
	meleeMaxTimeBeforeReposition_f = 0.0f;

	// Field : meleeMinTimeBeforeWaitReposition
	meleeMinTimeBeforeWaitReposition_f = 0.0f;

	// Field : meleeMaxTimeBeforeWaitReposition
	meleeMaxTimeBeforeWaitReposition_f = 0.0f;

	// Field : fleePercent
	fleePercent = 0;

	// Field : canUseOwnedVehiclesInCombat
	canUseOwnedVehiclesInCombat = 0;

	// Field : canStealVehiclesInCombat
	canStealVehiclesInCombat = 0;

	// Field : canThrowOutOfVehicleVehiclesInCombat
	canThrowOutOfVehicleVehiclesInCombat = 0;

	// Field : distanceForThrowOutOfVehicleInCombat
	distanceForThrowOutOfVehicleInCombat_f = 0.0f;

	// Field : maxDetectionRadius
	maxDetectionRadius_f = 0.0f;

	// Field : detectionRadiusFactorWhenInVehicle
	detectionRadiusFactorWhenInVehicle_f = 0.0f;

	// Field : vehicleChaseRadius
	vehicleChaseRadius_f = 0.0f;

	// Field : socialInteractionPercent
	socialInteractionPercent = 0;

	// Field : runMaxAnimScaling
	runMaxAnimScaling = 0;
	runMaxAnimScaling_hash = 0;

	// Field : runMinAnimScaling
	runMinAnimScaling = 0;
	runMinAnimScaling_hash = 0;

	// Field : walkMaxAnimScaling
	walkMaxAnimScaling = 0;
	walkMaxAnimScaling_hash = 0;

	// Field : walkMinAnimScaling
	walkMinAnimScaling = 0;
	walkMinAnimScaling_hash = 0;

	// Field : walkToRunThreshold
	walkToRunThreshold = 0;

}

void giv_abilities_models_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : knockDownLostHealthPercent
	stream->ReadAs(knockDownLostHealthPercent);

	// Field : knockDownDamageTimer
	stream->ReadAs(knockDownDamageTimer_f);

	// Field : knockOutLostHealthPercent
	stream->ReadAs(knockOutLostHealthPercent);

	// Field : knockOutDamageTimer
	stream->ReadAs(knockOutDamageTimer_f);

	// Field : meleeBlockPercent
	stream->ReadAs(meleeBlockPercent);

	// Field : meleeFierceStrikePercent
	stream->ReadString(meleeFierceStrikePercent);
	meleeFierceStrikePercent_hash = static_cast<uint32>(glitch::core::hashString(meleeFierceStrikePercent));

	// Field : meleeMinTimeBetweenHits
	stream->ReadAs(meleeMinTimeBetweenHits_f);

	// Field : meleeMaxTimeBetweenHits
	stream->ReadAs(meleeMaxTimeBetweenHits_f);

	// Field : meleeMinTimeBeforeReposition
	stream->ReadAs(meleeMinTimeBeforeReposition_f);

	// Field : meleeMaxTimeBeforeReposition
	stream->ReadAs(meleeMaxTimeBeforeReposition_f);

	// Field : meleeMinTimeBeforeWaitReposition
	stream->ReadAs(meleeMinTimeBeforeWaitReposition_f);

	// Field : meleeMaxTimeBeforeWaitReposition
	stream->ReadAs(meleeMaxTimeBeforeWaitReposition_f);

	// Field : fleePercent
	stream->ReadAs(fleePercent);

	// Field : canUseOwnedVehiclesInCombat
	stream->ReadAs(canUseOwnedVehiclesInCombat);

	// Field : canStealVehiclesInCombat
	stream->ReadAs(canStealVehiclesInCombat);

	// Field : canThrowOutOfVehicleVehiclesInCombat
	stream->ReadAs(canThrowOutOfVehicleVehiclesInCombat);

	// Field : distanceForThrowOutOfVehicleInCombat
	stream->ReadAs(distanceForThrowOutOfVehicleInCombat_f);

	// Field : maxDetectionRadius
	stream->ReadAs(maxDetectionRadius_f);

	// Field : detectionRadiusFactorWhenInVehicle
	stream->ReadAs(detectionRadiusFactorWhenInVehicle_f);

	// Field : vehicleChaseRadius
	stream->ReadAs(vehicleChaseRadius_f);

	// Field : socialInteractionPercent
	stream->ReadAs(socialInteractionPercent);

	// Field : runMaxAnimScaling
	stream->ReadString(runMaxAnimScaling);
	runMaxAnimScaling_hash = static_cast<uint32>(glitch::core::hashString(runMaxAnimScaling));

	// Field : runMinAnimScaling
	stream->ReadString(runMinAnimScaling);
	runMinAnimScaling_hash = static_cast<uint32>(glitch::core::hashString(runMinAnimScaling));

	// Field : walkMaxAnimScaling
	stream->ReadString(walkMaxAnimScaling);
	walkMaxAnimScaling_hash = static_cast<uint32>(glitch::core::hashString(walkMaxAnimScaling));

	// Field : walkMinAnimScaling
	stream->ReadString(walkMinAnimScaling);
	walkMinAnimScaling_hash = static_cast<uint32>(glitch::core::hashString(walkMinAnimScaling));

	// Field : walkToRunThreshold
	stream->ReadAs(walkToRunThreshold);

}

void giv_abilities_models_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : meleeFierceStrikePercent
	if (meleeFierceStrikePercent && meleeFierceStrikePercent[0] != '\0') gll_delete[] meleeFierceStrikePercent;
	meleeFierceStrikePercent = 0;

	// Field : runMaxAnimScaling
	if (runMaxAnimScaling && runMaxAnimScaling[0] != '\0') gll_delete[] runMaxAnimScaling;
	runMaxAnimScaling = 0;

	// Field : runMinAnimScaling
	if (runMinAnimScaling && runMinAnimScaling[0] != '\0') gll_delete[] runMinAnimScaling;
	runMinAnimScaling = 0;

	// Field : walkMaxAnimScaling
	if (walkMaxAnimScaling && walkMaxAnimScaling[0] != '\0') gll_delete[] walkMaxAnimScaling;
	walkMaxAnimScaling = 0;

	// Field : walkMinAnimScaling
	if (walkMinAnimScaling && walkMinAnimScaling[0] != '\0') gll_delete[] walkMinAnimScaling;
	walkMinAnimScaling = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_abilities_models
size_t giv_abilities_models::size = 0;
giv_abilities_models::struct_type* giv_abilities_models::entries = 0;

void giv_abilities_models::Load(StreamBase* stream)
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

void giv_abilities_models::Unload()
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

