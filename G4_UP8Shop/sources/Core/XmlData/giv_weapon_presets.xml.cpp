#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_weapon_presets.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_weapon_presets_struct
void giv_weapon_presets_struct::Init()
{
	base_struct::Init();

	// Field : maxCarried
	maxCarried = 0;

	// Field : throwAngle
	throwAngle_f = 0.0f;

	// Field : throwAngleCover
	throwAngleCover_f = 0.0f;

	// Field : throwInterval
	throwInterval = 0;

	// Field : rotationImpulse
	rotationImpulse_f = 0.0f;

	// Field : impulseFactor
	impulseFactor_f = 0.0f;

	// Field : impulseFactorCover
	impulseFactorCover_f = 0.0f;

	// Field : impulseFactorNoTarget
	impulseFactorNoTarget_f = 0.0f;

	// Field : propulsionSpeed
	propulsionSpeed_f = 0.0f;

	// Field : trailVFX
	trailVFX = 0;
	trailVFX_hash = 0;

	// Field : seekingEnabled
	seekingEnabled = 0;

	// Field : seekingTimeDelay
	seekingTimeDelay_f = 0.0f;

	// Field : seekingDisableDistance
	seekingDisableDistance_f = 0.0f;

	// Field : seekingAngularVelocity
	seekingAngularVelocity_f = 0.0f;

	// Field : seekingImprecisionRadius
	seekingImprecisionRadius_f = 0.0f;

	// Field : explosionTimer
	explosionTimer_f = 0.0f;

	// Field : explosionDamage
	explosionDamage_f = 0.0f;

	// Field : explosionSecurityDistance
	explosionSecurityDistance_f = 0.0f;

	// Field : explosionApplyDmgOnImpact
	explosionApplyDmgOnImpact = 0;

	// Field : explosionInnerRadius
	explosionInnerRadius_f = 0.0f;

	// Field : explosionOuterRadius
	explosionOuterRadius_f = 0.0f;

	// Field : explosionVFX
	explosionVFX = 0;
	explosionVFX_hash = 0;

	// Field : explosionSFX
	explosionSFX = 0;
	explosionSFX_hash = 0;

	// Field : impactSFX
	impactSFX = 0;
	impactSFX_hash = 0;

	// Field : throwSFX
	throwSFX = 0;
	throwSFX_hash = 0;

	// Field : physicsForce
	physicsForce_f = 0.0f;

	// Field : physicsInnerRadius
	physicsInnerRadius_f = 0.0f;

	// Field : physicsOuterRadius
	physicsOuterRadius_f = 0.0f;

	// Field : IsForGrenadeLauncher
	IsForGrenadeLauncher = 0;

}

void giv_weapon_presets_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : maxCarried
	stream->ReadAs(maxCarried);

	// Field : throwAngle
	stream->ReadAs(throwAngle_f);

	// Field : throwAngleCover
	stream->ReadAs(throwAngleCover_f);

	// Field : throwInterval
	stream->ReadAs(throwInterval);

	// Field : rotationImpulse
	stream->ReadAs(rotationImpulse_f);

	// Field : impulseFactor
	stream->ReadAs(impulseFactor_f);

	// Field : impulseFactorCover
	stream->ReadAs(impulseFactorCover_f);

	// Field : impulseFactorNoTarget
	stream->ReadAs(impulseFactorNoTarget_f);

	// Field : propulsionSpeed
	stream->ReadAs(propulsionSpeed_f);

	// Field : trailVFX
	stream->ReadString(trailVFX);
	trailVFX_hash = static_cast<uint32>(glitch::core::hashString(trailVFX));

	// Field : seekingEnabled
	stream->ReadAs(seekingEnabled);

	// Field : seekingTimeDelay
	stream->ReadAs(seekingTimeDelay_f);

	// Field : seekingDisableDistance
	stream->ReadAs(seekingDisableDistance_f);

	// Field : seekingAngularVelocity
	stream->ReadAs(seekingAngularVelocity_f);

	// Field : seekingImprecisionRadius
	stream->ReadAs(seekingImprecisionRadius_f);

	// Field : explosionTimer
	stream->ReadAs(explosionTimer_f);

	// Field : explosionDamage
	stream->ReadAs(explosionDamage_f);

	// Field : explosionSecurityDistance
	stream->ReadAs(explosionSecurityDistance_f);

	// Field : explosionApplyDmgOnImpact
	stream->ReadAs(explosionApplyDmgOnImpact);

	// Field : explosionInnerRadius
	stream->ReadAs(explosionInnerRadius_f);

	// Field : explosionOuterRadius
	stream->ReadAs(explosionOuterRadius_f);

	// Field : explosionVFX
	stream->ReadString(explosionVFX);
	explosionVFX_hash = static_cast<uint32>(glitch::core::hashString(explosionVFX));

	// Field : explosionSFX
	stream->ReadString(explosionSFX);
	explosionSFX_hash = static_cast<uint32>(glitch::core::hashString(explosionSFX));

	// Field : impactSFX
	stream->ReadString(impactSFX);
	impactSFX_hash = static_cast<uint32>(glitch::core::hashString(impactSFX));

	// Field : throwSFX
	stream->ReadString(throwSFX);
	throwSFX_hash = static_cast<uint32>(glitch::core::hashString(throwSFX));

	// Field : physicsForce
	stream->ReadAs(physicsForce_f);

	// Field : physicsInnerRadius
	stream->ReadAs(physicsInnerRadius_f);

	// Field : physicsOuterRadius
	stream->ReadAs(physicsOuterRadius_f);

	// Field : IsForGrenadeLauncher
	stream->ReadAs(IsForGrenadeLauncher);

}

void giv_weapon_presets_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : trailVFX
	if (trailVFX && trailVFX[0] != '\0') gll_delete[] trailVFX;
	trailVFX = 0;

	// Field : explosionVFX
	if (explosionVFX && explosionVFX[0] != '\0') gll_delete[] explosionVFX;
	explosionVFX = 0;

	// Field : explosionSFX
	if (explosionSFX && explosionSFX[0] != '\0') gll_delete[] explosionSFX;
	explosionSFX = 0;

	// Field : impactSFX
	if (impactSFX && impactSFX[0] != '\0') gll_delete[] impactSFX;
	impactSFX = 0;

	// Field : throwSFX
	if (throwSFX && throwSFX[0] != '\0') gll_delete[] throwSFX;
	throwSFX = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_weapon_presets
size_t giv_weapon_presets::size = 0;
giv_weapon_presets::struct_type* giv_weapon_presets::entries = 0;

void giv_weapon_presets::Load(StreamBase* stream)
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

void giv_weapon_presets::Unload()
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

