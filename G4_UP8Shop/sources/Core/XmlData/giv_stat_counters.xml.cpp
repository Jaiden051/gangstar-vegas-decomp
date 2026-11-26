#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/giv_stat_counters.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : giv_stat_counters_struct
void giv_stat_counters_struct::Init()
{
	base_struct::Init();

	// Field : PathFollowPredictTime
	PathFollowPredictTime_f = 0.0f;

	// Field : StuckThresholdSpeed
	StuckThresholdSpeed_f = 0.0f;

	// Field : PathFollowPredictDistMin
	PathFollowPredictDistMin = 0;
	PathFollowPredictDistMin_hash = 0;

	// Field : PathWalkSpeedMin
	PathWalkSpeedMin_f = 0.0f;

	// Field : PathRunSpeedMin
	PathRunSpeedMin_f = 0.0f;

	// Field : StuckTimeMax
	StuckTimeMax_f = 0.0f;

	// Field : StuckTimeScaredMax
	StuckTimeScaredMax_f = 0.0f;

	// Field : MaxTimeToCollision
	MaxTimeToCollision_f = 0.0f;

	// Field : DistToVehicleCollision
	DistToVehicleCollision_f = 0.0f;

	// Field : PathFollowPredictDistMax
	PathFollowPredictDistMax = 0;
	PathFollowPredictDistMax_hash = 0;

	// Field : PathFollowRadius
	PathFollowRadius = 0;
	PathFollowRadius_hash = 0;

	// Field : PathFollowReachedWaypointDist
	PathFollowReachedWaypointDist = 0;
	PathFollowReachedWaypointDist_hash = 0;

	// Field : WalkTurningFactor
	WalkTurningFactor_f = 0.0f;

	// Field : RunTurningFactor
	RunTurningFactor_f = 0.0f;

	// Field : SprintTurningFactor
	SprintTurningFactor_f = 0.0f;

	// Field : AvoidSteerFactor
	AvoidSteerFactor = 0;

	// Field : StuckThresholdSpeedRatio
	StuckThresholdSpeedRatio_f = 0.0f;

	// Field : StuckOnWallTime
	StuckOnWallTime_f = 0.0f;

	// Field : PathFollowOffsetZ
	PathFollowOffsetZ = 0;
	PathFollowOffsetZ_hash = 0;

	// Field : TurningFactor
	TurningFactor_f = 0.0f;

	// Field : TiltingFactor
	TiltingFactor_f = 0.0f;

	// Field : LiftingFactor
	LiftingFactor_f = 0.0f;

	// Field : CruisingAccelFactor
	CruisingAccelFactor_f = 0.0f;

	// Field : CruisingAccelMin
	CruisingAccelMin_f = 0.0f;

	// Field : CruisingAccelMax
	CruisingAccelMax_f = 0.0f;

	// Field : CruisingAccelGravityAdjustMin
	CruisingAccelGravityAdjustMin_f = 0.0f;

	// Field : CruisingAccelGravityAdjustMax
	CruisingAccelGravityAdjustMax_f = 0.0f;

	// Field : CruisingAccelSinFrontUphillAngle
	CruisingAccelSinFrontUphillAngle_f = 0.0f;

	// Field : IntersectAccelFactor
	IntersectAccelFactor_f = 0.0f;

	// Field : IntersectPropFactor
	IntersectPropFactor_f = 0.0f;

	// Field : FollowingPropFactor
	FollowingPropFactor_f = 0.0f;

	// Field : FollowingDerivFactor
	FollowingDerivFactor_f = 0.0f;

	// Field : FollowingAccelFactor
	FollowingAccelFactor_f = 0.0f;

	// Field : FollowingDesiredTime
	FollowingDesiredTime_f = 0.0f;

	// Field : FollowingDesiredDistMin
	FollowingDesiredDistMin_f = 0.0f;

	// Field : FollowingDiffOrientAngleMax
	FollowingDiffOrientAngleMax_f = 0.0f;

	// Field : FollowingDiffPosAngleMax
	FollowingDiffPosAngleMax_f = 0.0f;

	// Field : ImminentCollisionDiffOrientAngleMin
	ImminentCollisionDiffOrientAngleMin_f = 0.0f;

	// Field : ImminentCollisionDiffOrientAngleMax
	ImminentCollisionDiffOrientAngleMax_f = 0.0f;

	// Field : ImminentCollisionDiffPosAngleMin
	ImminentCollisionDiffPosAngleMin_f = 0.0f;

	// Field : ImminentCollisionDiffPosAngleMax
	ImminentCollisionDiffPosAngleMax_f = 0.0f;

	// Field : ImminentCollisionTime
	ImminentCollisionTime_f = 0.0f;

	// Field : ImminentCollisionDistMin
	ImminentCollisionDistMin_f = 0.0f;

	// Field : TurningAccelAmplitudeMin
	TurningAccelAmplitudeMin_f = 0.0f;

	// Field : TurningAccelAmplitudeMax
	TurningAccelAmplitudeMax_f = 0.0f;

	// Field : TurningSpeedForMaxAmplitude
	TurningSpeedForMaxAmplitude_f = 0.0f;

	// Field : ChasingTargetWaypointInterval
	ChasingTargetWaypointInterval = 0;

	// Field : ChasingTargetOffsetMax
	ChasingTargetOffsetMax_f = 0.0f;

	// Field : ChasingTargetOffsetZ
	ChasingTargetOffsetZ_f = 0.0f;

	// Field : ChasingWaypointsMax
	ChasingWaypointsMax = 0;

	// Field : ChasingTargetFarDistMin
	ChasingTargetFarDistMin_f = 0.0f;

	// Field : ChasingTargetCloseDistMin
	ChasingTargetCloseDistMin_f = 0.0f;

	// Field : ChasingTargetFarOffsetZ
	ChasingTargetFarOffsetZ_f = 0.0f;

	// Field : ChasingUseRoadSplinesDistanceThreshold
	ChasingUseRoadSplinesDistanceThreshold_f = 0.0f;

}

void giv_stat_counters_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : PathFollowPredictTime
	stream->ReadAs(PathFollowPredictTime_f);

	// Field : StuckThresholdSpeed
	stream->ReadAs(StuckThresholdSpeed_f);

	// Field : PathFollowPredictDistMin
	stream->ReadString(PathFollowPredictDistMin);
	PathFollowPredictDistMin_hash = static_cast<uint32>(glitch::core::hashString(PathFollowPredictDistMin));

	// Field : PathWalkSpeedMin
	stream->ReadAs(PathWalkSpeedMin_f);

	// Field : PathRunSpeedMin
	stream->ReadAs(PathRunSpeedMin_f);

	// Field : StuckTimeMax
	stream->ReadAs(StuckTimeMax_f);

	// Field : StuckTimeScaredMax
	stream->ReadAs(StuckTimeScaredMax_f);

	// Field : MaxTimeToCollision
	stream->ReadAs(MaxTimeToCollision_f);

	// Field : DistToVehicleCollision
	stream->ReadAs(DistToVehicleCollision_f);

	// Field : PathFollowPredictDistMax
	stream->ReadString(PathFollowPredictDistMax);
	PathFollowPredictDistMax_hash = static_cast<uint32>(glitch::core::hashString(PathFollowPredictDistMax));

	// Field : PathFollowRadius
	stream->ReadString(PathFollowRadius);
	PathFollowRadius_hash = static_cast<uint32>(glitch::core::hashString(PathFollowRadius));

	// Field : PathFollowReachedWaypointDist
	stream->ReadString(PathFollowReachedWaypointDist);
	PathFollowReachedWaypointDist_hash = static_cast<uint32>(glitch::core::hashString(PathFollowReachedWaypointDist));

	// Field : WalkTurningFactor
	stream->ReadAs(WalkTurningFactor_f);

	// Field : RunTurningFactor
	stream->ReadAs(RunTurningFactor_f);

	// Field : SprintTurningFactor
	stream->ReadAs(SprintTurningFactor_f);

	// Field : AvoidSteerFactor
	stream->ReadAs(AvoidSteerFactor);

	// Field : StuckThresholdSpeedRatio
	stream->ReadAs(StuckThresholdSpeedRatio_f);

	// Field : StuckOnWallTime
	stream->ReadAs(StuckOnWallTime_f);

	// Field : PathFollowOffsetZ
	stream->ReadString(PathFollowOffsetZ);
	PathFollowOffsetZ_hash = static_cast<uint32>(glitch::core::hashString(PathFollowOffsetZ));

	// Field : TurningFactor
	stream->ReadAs(TurningFactor_f);

	// Field : TiltingFactor
	stream->ReadAs(TiltingFactor_f);

	// Field : LiftingFactor
	stream->ReadAs(LiftingFactor_f);

	// Field : CruisingAccelFactor
	stream->ReadAs(CruisingAccelFactor_f);

	// Field : CruisingAccelMin
	stream->ReadAs(CruisingAccelMin_f);

	// Field : CruisingAccelMax
	stream->ReadAs(CruisingAccelMax_f);

	// Field : CruisingAccelGravityAdjustMin
	stream->ReadAs(CruisingAccelGravityAdjustMin_f);

	// Field : CruisingAccelGravityAdjustMax
	stream->ReadAs(CruisingAccelGravityAdjustMax_f);

	// Field : CruisingAccelSinFrontUphillAngle
	stream->ReadAs(CruisingAccelSinFrontUphillAngle_f);

	// Field : IntersectAccelFactor
	stream->ReadAs(IntersectAccelFactor_f);

	// Field : IntersectPropFactor
	stream->ReadAs(IntersectPropFactor_f);

	// Field : FollowingPropFactor
	stream->ReadAs(FollowingPropFactor_f);

	// Field : FollowingDerivFactor
	stream->ReadAs(FollowingDerivFactor_f);

	// Field : FollowingAccelFactor
	stream->ReadAs(FollowingAccelFactor_f);

	// Field : FollowingDesiredTime
	stream->ReadAs(FollowingDesiredTime_f);

	// Field : FollowingDesiredDistMin
	stream->ReadAs(FollowingDesiredDistMin_f);

	// Field : FollowingDiffOrientAngleMax
	stream->ReadAs(FollowingDiffOrientAngleMax_f);

	// Field : FollowingDiffPosAngleMax
	stream->ReadAs(FollowingDiffPosAngleMax_f);

	// Field : ImminentCollisionDiffOrientAngleMin
	stream->ReadAs(ImminentCollisionDiffOrientAngleMin_f);

	// Field : ImminentCollisionDiffOrientAngleMax
	stream->ReadAs(ImminentCollisionDiffOrientAngleMax_f);

	// Field : ImminentCollisionDiffPosAngleMin
	stream->ReadAs(ImminentCollisionDiffPosAngleMin_f);

	// Field : ImminentCollisionDiffPosAngleMax
	stream->ReadAs(ImminentCollisionDiffPosAngleMax_f);

	// Field : ImminentCollisionTime
	stream->ReadAs(ImminentCollisionTime_f);

	// Field : ImminentCollisionDistMin
	stream->ReadAs(ImminentCollisionDistMin_f);

	// Field : TurningAccelAmplitudeMin
	stream->ReadAs(TurningAccelAmplitudeMin_f);

	// Field : TurningAccelAmplitudeMax
	stream->ReadAs(TurningAccelAmplitudeMax_f);

	// Field : TurningSpeedForMaxAmplitude
	stream->ReadAs(TurningSpeedForMaxAmplitude_f);

	// Field : ChasingTargetWaypointInterval
	stream->ReadAs(ChasingTargetWaypointInterval);

	// Field : ChasingTargetOffsetMax
	stream->ReadAs(ChasingTargetOffsetMax_f);

	// Field : ChasingTargetOffsetZ
	stream->ReadAs(ChasingTargetOffsetZ_f);

	// Field : ChasingWaypointsMax
	stream->ReadAs(ChasingWaypointsMax);

	// Field : ChasingTargetFarDistMin
	stream->ReadAs(ChasingTargetFarDistMin_f);

	// Field : ChasingTargetCloseDistMin
	stream->ReadAs(ChasingTargetCloseDistMin_f);

	// Field : ChasingTargetFarOffsetZ
	stream->ReadAs(ChasingTargetFarOffsetZ_f);

	// Field : ChasingUseRoadSplinesDistanceThreshold
	stream->ReadAs(ChasingUseRoadSplinesDistanceThreshold_f);

}

void giv_stat_counters_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : PathFollowPredictDistMin
	if (PathFollowPredictDistMin && PathFollowPredictDistMin[0] != '\0') gll_delete[] PathFollowPredictDistMin;
	PathFollowPredictDistMin = 0;

	// Field : PathFollowPredictDistMax
	if (PathFollowPredictDistMax && PathFollowPredictDistMax[0] != '\0') gll_delete[] PathFollowPredictDistMax;
	PathFollowPredictDistMax = 0;

	// Field : PathFollowRadius
	if (PathFollowRadius && PathFollowRadius[0] != '\0') gll_delete[] PathFollowRadius;
	PathFollowRadius = 0;

	// Field : PathFollowReachedWaypointDist
	if (PathFollowReachedWaypointDist && PathFollowReachedWaypointDist[0] != '\0') gll_delete[] PathFollowReachedWaypointDist;
	PathFollowReachedWaypointDist = 0;

	// Field : PathFollowOffsetZ
	if (PathFollowOffsetZ && PathFollowOffsetZ[0] != '\0') gll_delete[] PathFollowOffsetZ;
	PathFollowOffsetZ = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : giv_stat_counters
size_t giv_stat_counters::size = 0;
giv_stat_counters::struct_type* giv_stat_counters::entries = 0;

void giv_stat_counters::Load(StreamBase* stream)
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

void giv_stat_counters::Unload()
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

// ============================================================================
// Schema Descriptor Registration Helper (0xb0e610) in libGangstar4.so
// ============================================================================
int *sub_B0E610(unsigned int a1)
{
  if ( dword_20D7CC8 == 0 )
  {
    dword_20D7CCC = (uint32_t)(uintptr_t)(&dword_20D7CC4);
    dword_20D7CD0 = (uint32_t)(uintptr_t)(&dword_20D7CC4);
  }
  int *v2 = (int *)dword_20D7CC8;
  int *v3 = (int *)(&dword_20D7CC4);
  while ( v2 != nullptr )
  {
    if ( (unsigned int)v2[4] >= a1 )
    {
      v3 = v2;
      v2 = (int *)v2[2];
    }
    else
    {
      v2 = (int *)v2[3];
    }
  }
  if ( v3 != (int *)(&dword_20D7CC4) && (unsigned int)v3[4] == a1 )
    return v3 + 5;

  uint32_t pair_ret[2] = {};
  uint32_t val_pair[7] = { a1, 0u, 0u, 0u, 0u, 0u, 0u };
  sub_ADDCB0((int)(uintptr_t)pair_ret, (int *)val_pair);
  return reinterpret_cast<int *>(static_cast<uintptr_t>(pair_ret[0])) + 5;
}


