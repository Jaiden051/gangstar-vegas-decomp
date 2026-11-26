#include "Core/Utils/StreamBase.h"

#include "Core/XmlData/animation_sets.xml.hpp"

namespace xmldata {
namespace constants {
}; // namespace constants
namespace structures {
// Structure : animation_sets_struct
void animation_sets_struct::Init()
{
	base_struct::Init();

	// Field : ID
	ID = 0;

	// Field : type
	type = 0;

	// Field : loop
	loop = 0;

	// Field : interpolation
	interpolation = 0;

	// Field : AaGameFirstAnimation
	AaGameFirstAnimation = 0;
	AaGameFirstAnimation_hash = 0;

	// Field : Aim
	Aim = 0;

	// Field : Shoot
	Shoot = 0;

	// Field : Throw
	Throw = 0;

	// Field : Melee
	Melee = 0;

	// Field : Flinch
	Flinch = 0;

	// Field : FallDown
	FallDown = 0;

	// Field : GetUp
	GetUp = 0;

	// Field : TakeCover
	TakeCover = 0;

	// Field : LeaveCover
	LeaveCover = 0;

	// Field : Climb
	Climb = 0;

	// Field : Die
	Die = 0;

	// Field : VehicleDriverAim
	VehicleDriverAim = 0;

	// Field : VehicleRightPassengerAim
	VehicleRightPassengerAim = 0;

	// Field : VehicleDriverRecoil
	VehicleDriverRecoil = 0;

	// Field : VehicleDriverLowerWeapon
	VehicleDriverLowerWeapon = 0;

	// Field : VehicleRightPassengerLowerWeapon
	VehicleRightPassengerLowerWeapon = 0;

	// Field : VehicleRightPassengerRecoil
	VehicleRightPassengerRecoil = 0;

	// Field : VehicleMotoRecoil
	VehicleMotoRecoil = 0;

	// Field : VehicleJetpackRecoil
	VehicleJetpackRecoil = 0;

	// Field : VehicleTurnLeft
	VehicleTurnLeft = 0;

	// Field : VehicleTurnRight
	VehicleTurnRight = 0;

	// Field : VehicleReverse
	VehicleReverse = 0;

	// Field : VehicleLeanBack
	VehicleLeanBack = 0;

	// Field : VehicleLeanForward
	VehicleLeanForward = 0;

	// Field : VehicleIdle
	VehicleIdle = 0;

	// Field : VehicleDriver
	VehicleDriver = 0;

	// Field : VehiclePassenger
	VehiclePassenger = 0;

	// Field : VehicleMovingIdle
	VehicleMovingIdle = 0;

	// Field : VehicleFix
	VehicleFix = 0;

	// Field : VehicleEjectLeft
	VehicleEjectLeft = 0;

	// Field : VehicleEjectRight
	VehicleEjectRight = 0;

	// Field : VehicleEnterLeft
	VehicleEnterLeft = 0;

	// Field : VehicleEnterRight
	VehicleEnterRight = 0;

	// Field : VehicleExitLeft
	VehicleExitLeft = 0;

	// Field : VehicleExitRight
	VehicleExitRight = 0;

	// Field : VehicleExitLeftRoof
	VehicleExitLeftRoof = 0;

	// Field : VehicleExitRightRoof
	VehicleExitRightRoof = 0;

	// Field : VehicleEnter
	VehicleEnter = 0;

	// Field : VehicleExit
	VehicleExit = 0;

	// Field : VehicleEject
	VehicleEject = 0;

	// Field : VehicleUseDoor
	VehicleUseDoor = 0;

	// Field : VehicleThrowDriverOut
	VehicleThrowDriverOut = 0;

	// Field : VehicleCloseDoorFromInside
	VehicleCloseDoorFromInside = 0;

	// Field : VehicleThrowDriverOutLeft
	VehicleThrowDriverOutLeft = 0;

	// Field : VehicleDriverThrownOutLeft
	VehicleDriverThrownOutLeft = 0;

	// Field : VehicleThrowDriverOutRight
	VehicleThrowDriverOutRight = 0;

	// Field : VehicleDriverThrownOutRight
	VehicleDriverThrownOutRight = 0;

	// Field : VehiclePushOutLeft
	VehiclePushOutLeft = 0;

	// Field : VehiclePushedOutLeft
	VehiclePushedOutLeft = 0;

	// Field : VehiclePushOutRight
	VehiclePushOutRight = 0;

	// Field : VehiclePushedOutRight
	VehiclePushedOutRight = 0;

	// Field : VehicleCloseDoorFromInsideLeft
	VehicleCloseDoorFromInsideLeft = 0;

	// Field : VehicleCloseDoorFromInsideRight
	VehicleCloseDoorFromInsideRight = 0;

	// Field : VehicleOpenDoorFromInsideLeft
	VehicleOpenDoorFromInsideLeft = 0;

	// Field : VehicleOpenDoorFromInsideRight
	VehicleOpenDoorFromInsideRight = 0;

	// Field : BikeHarleyStandIdle
	BikeHarleyStandIdle = 0;

	// Field : Burnout
	Burnout = 0;

	// Field : AimSub
	AimSub = 0;

	// Field : AimIdle
	AimIdle = 0;

	// Field : AimRun
	AimRun = 0;

	// Field : AimWalk
	AimWalk = 0;

	// Field : AimBackRun
	AimBackRun = 0;

	// Field : AimBackWalk
	AimBackWalk = 0;

	// Field : KneelingBegin
	KneelingBegin = 0;

	// Field : KneelingEnd
	KneelingEnd = 0;

	// Field : ShootIdle
	ShootIdle = 0;

	// Field : ShootRun
	ShootRun = 0;

	// Field : ShootWalk
	ShootWalk = 0;

	// Field : ShootBackRun
	ShootBackRun = 0;

	// Field : ShootBackWalk
	ShootBackWalk = 0;

	// Field : Bumped
	Bumped = 0;

	// Field : BumpedFront
	BumpedFront = 0;

	// Field : BumpedBack
	BumpedBack = 0;

	// Field : BumpedLeft
	BumpedLeft = 0;

	// Field : BumpedRight
	BumpedRight = 0;

	// Field : Backrun
	Backrun = 0;

	// Field : Backwalk_Sub
	Backwalk_Sub = 0;

	// Field : Backrun_Sub
	Backrun_Sub = 0;

	// Field : Reload
	Reload = 0;

	// Field : Prostrate
	Prostrate = 0;

	// Field : IdleToProne
	IdleToProne = 0;

	// Field : ProneToIdle
	ProneToIdle = 0;

	// Field : ProneIdle01
	ProneIdle01 = 0;

	// Field : ProneIdle02
	ProneIdle02 = 0;

	// Field : ProneFlinch01
	ProneFlinch01 = 0;

	// Field : ProneFlinch02
	ProneFlinch02 = 0;

	// Field : ProneDeathFaceGround
	ProneDeathFaceGround = 0;

	// Field : ProneDeathFaceSky
	ProneDeathFaceSky = 0;

	// Field : PhoneTalkListen
	PhoneTalkListen = 0;

	// Field : PhoneTalk
	PhoneTalk = 0;

	// Field : PhoneTalk01
	PhoneTalk01 = 0;

	// Field : PhoneTalk02
	PhoneTalk02 = 0;

	// Field : PhoneTalk03
	PhoneTalk03 = 0;

	// Field : PhoneAnswer
	PhoneAnswer = 0;

	// Field : PhoneHangup
	PhoneHangup = 0;

	// Field : BeggingSit
	BeggingSit = 0;

	// Field : BeggingSitReceive
	BeggingSitReceive = 0;

	// Field : BeggingStand
	BeggingStand = 0;

	// Field : BeggingStandReceive
	BeggingStandReceive = 0;

	// Field : Kneeling
	Kneeling = 0;

	// Field : CoupleSit
	CoupleSit = 0;

	// Field : CoupleSit01
	CoupleSit01 = 0;

	// Field : DeadIdle
	DeadIdle = 0;

	// Field : DeadIdleWater
	DeadIdleWater = 0;

	// Field : Outofbreath
	Outofbreath = 0;

	// Field : Swim
	Swim = 0;

	// Field : SwimIdle
	SwimIdle = 0;

	// Field : SwimSprint
	SwimSprint = 0;

	// Field : Sprint
	Sprint = 0;

	// Field : JumpWalk
	JumpWalk = 0;

	// Field : JumpRun
	JumpRun = 0;

	// Field : JumpRunLand
	JumpRunLand = 0;

	// Field : JumpRunGrabPart1
	JumpRunGrabPart1 = 0;

	// Field : JumpRunGrabPart2
	JumpRunGrabPart2 = 0;

	// Field : JumpRunGrabClimb
	JumpRunGrabClimb = 0;

	// Field : Jogging
	Jogging = 0;

	// Field : JoggingIdle
	JoggingIdle = 0;

	// Field : Fall
	Fall = 0;

	// Field : Land01
	Land01 = 0;

	// Field : Land02
	Land02 = 0;

	// Field : Land03
	Land03 = 0;

	// Field : LandHit
	LandHit = 0;

	// Field : CarHitBack01
	CarHitBack01 = 0;

	// Field : CarHitBack02
	CarHitBack02 = 0;

	// Field : CarHitFront
	CarHitFront = 0;

	// Field : CarHitLeft
	CarHitLeft = 0;

	// Field : CarHitRight
	CarHitRight = 0;

	// Field : CarHitBackIdle01
	CarHitBackIdle01 = 0;

	// Field : CarHitBackIdle02
	CarHitBackIdle02 = 0;

	// Field : CarHitFrontIdle
	CarHitFrontIdle = 0;

	// Field : CarHitLeftIdle
	CarHitLeftIdle = 0;

	// Field : CarHitRightIdle
	CarHitRightIdle = 0;

	// Field : CarHitBackGetUp01
	CarHitBackGetUp01 = 0;

	// Field : CarHitBackGetUp02
	CarHitBackGetUp02 = 0;

	// Field : CarHitFrontGetUp
	CarHitFrontGetUp = 0;

	// Field : CarHitLeftGetUp
	CarHitLeftGetUp = 0;

	// Field : CarHitRightGetUp
	CarHitRightGetUp = 0;

	// Field : RunPanic
	RunPanic = 0;

	// Field : RunFall
	RunFall = 0;

	// Field : RollDown
	RollDown_f = 0.0f;

	// Field : ExtinguishFire
	ExtinguishFire = 0;

	// Field : WalkInDaShit
	WalkInDaShit = 0;

	// Field : BikeMountLeft
	BikeMountLeft = 0;

	// Field : BikeMountRight
	BikeMountRight = 0;

	// Field : BikeStandIdle
	BikeStandIdle = 0;

	// Field : VehicleCloseDoorLeft
	VehicleCloseDoorLeft = 0;

	// Field : VehicleCloseDoorRight
	VehicleCloseDoorRight = 0;

	// Field : VehicleOpenDoorLeft
	VehicleOpenDoorLeft = 0;

	// Field : VehicleOpenDoorRight
	VehicleOpenDoorRight = 0;

	// Field : DownIdle
	DownIdle = 0;

	// Field : DownKicked
	DownKicked = 0;

	// Field : DownToIdle
	DownToIdle = 0;

	// Field : IdleToDead01
	IdleToDead01 = 0;

	// Field : IdleToDead02
	IdleToDead02 = 0;

	// Field : Backwalk
	Backwalk = 0;

	// Field : Idle
	Idle = 0;

	// Field : Idle_Sub
	Idle_Sub = 0;

	// Field : Idle2
	Idle2 = 0;

	// Field : Idle2_Sub
	Idle2_Sub = 0;

	// Field : SprintToIdle
	SprintToIdle = 0;

	// Field : Walk
	Walk = 0;

	// Field : Walk_Sub
	Walk_Sub = 0;

	// Field : ForceDoor
	ForceDoor_f = 0.0f;

	// Field : Turn
	Turn = 0;

	// Field : Taunt
	Taunt = 0;

	// Field : TauntIdle
	TauntIdle = 0;

	// Field : Hurdle
	Hurdle = 0;

	// Field : HurdleIdle
	HurdleIdle = 0;

	// Field : HurdleSprint
	HurdleSprint = 0;

	// Field : Hurdle2m
	Hurdle2m = 0;

	// Field : Hurdle2mLand
	Hurdle2mLand = 0;

	// Field : ClimbWater
	ClimbWater = 0;

	// Field : Climb30cmL
	Climb30cmL = 0;

	// Field : Climb30cmR
	Climb30cmR = 0;

	// Field : Climb100cmPart1L
	Climb100cmPart1L = 0;

	// Field : Climb100cmPart2L
	Climb100cmPart2L = 0;

	// Field : Climb100cmPart1R
	Climb100cmPart1R = 0;

	// Field : Climb100cmPart2R
	Climb100cmPart2R = 0;

	// Field : Climb200cmPart1
	Climb200cmPart1 = 0;

	// Field : Climb200cmPart2
	Climb200cmPart2 = 0;

	// Field : Climb200cmPart3
	Climb200cmPart3 = 0;

	// Field : FreefallIdle
	FreefallIdle = 0;

	// Field : ParachuteOpen
	ParachuteOpen = 0;

	// Field : ParachuteIdle
	ParachuteIdle = 0;

	// Field : ParachuteIdleForward
	ParachuteIdleForward = 0;

	// Field : ParachuteIdleBackward
	ParachuteIdleBackward = 0;

	// Field : ParachuteLanding
	ParachuteLanding = 0;

	// Field : ParachuteTurnLeft
	ParachuteTurnLeft = 0;

	// Field : ParachuteTurnRight
	ParachuteTurnRight = 0;

	// Field : JetpackLanding
	JetpackLanding = 0;

	// Field : JetpackTakeOff
	JetpackTakeOff = 0;

	// Field : HandsUp
	HandsUp = 0;

	// Field : Talk
	Talk = 0;

	// Field : Talk01
	Talk01 = 0;

	// Field : Talk02
	Talk02 = 0;

	// Field : Listen
	Listen = 0;

	// Field : Listen01
	Listen01 = 0;

	// Field : Listen02
	Listen02 = 0;

	// Field : Run_Sub
	Run_Sub = 0;

	// Field : Sneeze
	Sneeze = 0;

	// Field : WalkPutHairInPlace
	WalkPutHairInPlace = 0;

	// Field : WalkDrunkMale
	WalkDrunkMale = 0;

	// Field : WalkDrunkTripMale
	WalkDrunkTripMale = 0;

	// Field : Pose
	Pose_f = 0.0f;

	// Field : GunFlinch
	GunFlinch = 0;

	// Field : WaterFlinch
	WaterFlinch = 0;

	// Field : IdleSit
	IdleSit = 0;

	// Field : WaveHand
	WaveHand = 0;

	// Field : CheckHead
	CheckHead = 0;

	// Field : CheckTorso
	CheckTorso = 0;

	// Field : CheckLegs
	CheckLegs = 0;

	// Field : MakeOutMale
	MakeOutMale = 0;

	// Field : MakeOutFemale
	MakeOutFemale = 0;

	// Field : PlantBomb
	PlantBomb = 0;

	// Field : MaleSit
	MaleSit = 0;

	// Field : WeaponDeathHeavy01
	WeaponDeathHeavy01 = 0;

	// Field : WeaponDeathHeavy02
	WeaponDeathHeavy02 = 0;

	// Field : WeaponDeathHeavy03
	WeaponDeathHeavy03 = 0;

	// Field : WeaponDeathLight01
	WeaponDeathLight01 = 0;

	// Field : WeaponDeathLight02
	WeaponDeathLight02 = 0;

	// Field : WeaponDeathLight03
	WeaponDeathLight03 = 0;

	// Field : WeaponDeathSniper01
	WeaponDeathSniper01 = 0;

	// Field : WeaponDeathSniper02
	WeaponDeathSniper02 = 0;

	// Field : WeaponDeathSniper03
	WeaponDeathSniper03 = 0;

	// Field : WeaponDeathExplosive01
	WeaponDeathExplosive01 = 0;

	// Field : WeaponDeathExplosive02
	WeaponDeathExplosive02 = 0;

	// Field : WeaponDeathExplosive03
	WeaponDeathExplosive03 = 0;

	// Field : WeaponDeathShotgunBack
	WeaponDeathShotgunBack = 0;

	// Field : DanceCapoeira
	DanceCapoeira = 0;

	// Field : DanceBreakdance
	DanceBreakdance = 0;

	// Field : DanceMichaeljackson
	DanceMichaeljackson = 0;

	// Field : DanceRobot
	DanceRobot = 0;

	// Field : DanceStrip
	DanceStrip = 0;
	DanceStrip_hash = 0;

	// Field : DanceBootyshake
	DanceBootyshake = 0;

	// Field : Dance01
	Dance01 = 0;

	// Field : Dance02
	Dance02 = 0;

	// Field : Dance03
	Dance03 = 0;

	// Field : Dance04
	Dance04 = 0;

	// Field : HandgunFront
	HandgunFront = 0;

	// Field : GrenadeFront
	GrenadeFront = 0;

	// Field : IdleToWalk
	IdleToWalk = 0;

	// Field : RunToIdleR
	RunToIdleR = 0;

	// Field : RunToIdleL
	RunToIdleL = 0;

	// Field : SprintToIdleR
	SprintToIdleR = 0;

	// Field : SprintToIdleL
	SprintToIdleL = 0;

	// Field : AimRunToIdleR
	AimRunToIdleR = 0;

	// Field : AimRunToIdleL
	AimRunToIdleL = 0;

	// Field : IdleToIdleTurn
	IdleToIdleTurn = 0;

	// Field : IdleToRunTurn
	IdleToRunTurn = 0;

	// Field : IdleToWalkTurn
	IdleToWalkTurn = 0;

	// Field : WalkToWalkTurn
	WalkToWalkTurn = 0;

	// Field : RunToRunTurn
	RunToRunTurn = 0;

	// Field : IdleToIdleStrafeTurn
	IdleToIdleStrafeTurn = 0;

	// Field : IdleToRunStrafeTurn
	IdleToRunStrafeTurn = 0;

	// Field : IdleToWalkStrafeTurn
	IdleToWalkStrafeTurn = 0;

	// Field : WalkToWalkStrafeTurn
	WalkToWalkStrafeTurn = 0;
	WalkToWalkStrafeTurn_hash = 0;

	// Field : RunToRunStrafeTurn
	RunToRunStrafeTurn = 0;
	RunToRunStrafeTurn_hash = 0;

	// Field : RaiseWeaponIdle
	RaiseWeaponIdle = 0;

	// Field : RaiseWeaponWalk
	RaiseWeaponWalk = 0;

	// Field : RaiseWeaponRun
	RaiseWeaponRun = 0;

	// Field : MeleeSupermanPunchRun
	MeleeSupermanPunchRun = 0;

	// Field : MeleeKneeKickRun
	MeleeKneeKickRun = 0;

	// Field : MeleeAliveFaceGroundToGetUp
	MeleeAliveFaceGroundToGetUp = 0;

	// Field : MeleeAlivefaceSkyToGetup
	MeleeAlivefaceSkyToGetup = 0;

	// Field : MeleeAttackFlyinGroundKick
	MeleeAttackFlyinGroundKick = 0;

	// Field : MeleeAttackHookDownLeft
	MeleeAttackHookDownLeft = 0;

	// Field : MeleeAttackHookDownRight
	MeleeAttackHookDownRight = 0;

	// Field : MeleeAttackHookUpLeft
	MeleeAttackHookUpLeft = 0;

	// Field : MeleeAttackHookUpRight
	MeleeAttackHookUpRight = 0;

	// Field : MeleeAttackJabDownLeft
	MeleeAttackJabDownLeft = 0;

	// Field : MeleeAttackJabDownRight
	MeleeAttackJabDownRight = 0;

	// Field : MeleeAttackJabUpLeft
	MeleeAttackJabUpLeft = 0;

	// Field : MeleeAttackJabUpRight
	MeleeAttackJabUpRight = 0;

	// Field : MeleeAttackKickLeft
	MeleeAttackKickLeft = 0;

	// Field : MeleeAttackKickRight
	MeleeAttackKickRight = 0;

	// Field : MeleeAttackKneeKickLeft
	MeleeAttackKneeKickLeft = 0;

	// Field : MeleeAttackKneeKickRight
	MeleeAttackKneeKickRight = 0;

	// Field : MeleeAttackRoundHookPunch
	MeleeAttackRoundHookPunch = 0;

	// Field : MeleeAttackRoundKickLeft
	MeleeAttackRoundKickLeft = 0;

	// Field : MeleeAttackSideKickRight
	MeleeAttackSideKickRight = 0;

	// Field : MeleeAttackSupermanPunch
	MeleeAttackSupermanPunch = 0;

	// Field : MeleeAttackUppercutDown
	MeleeAttackUppercutDown = 0;

	// Field : MeleeAttackUppercutUp
	MeleeAttackUppercutUp = 0;

	// Field : MeleeAttackSupermanjab
	MeleeAttackSupermanjab = 0;

	// Field : MeleeDeathFaceGroundFlinchBack
	MeleeDeathFaceGroundFlinchBack = 0;

	// Field : MeleeDeathFaceGroundFlinchFront
	MeleeDeathFaceGroundFlinchFront = 0;

	// Field : MeleeDeathFaceGroundFlinchLeft
	MeleeDeathFaceGroundFlinchLeft = 0;

	// Field : MeleeDeathFaceGroundFlinchRight
	MeleeDeathFaceGroundFlinchRight = 0;

	// Field : MeleeDeathFaceGroundIdle
	MeleeDeathFaceGroundIdle = 0;

	// Field : MeleeDeathFaceSkyFlinchBack
	MeleeDeathFaceSkyFlinchBack = 0;

	// Field : MeleeDeathFaceSkyFlinchFront
	MeleeDeathFaceSkyFlinchFront = 0;

	// Field : MeleeDeathFaceSkyFlinchLeft
	MeleeDeathFaceSkyFlinchLeft = 0;

	// Field : MeleeDeathFaceSkyFlinchRight
	MeleeDeathFaceSkyFlinchRight = 0;

	// Field : MeleeDeathFaceSkyIdle01
	MeleeDeathFaceSkyIdle01 = 0;

	// Field : MeleeDeathFaceSkyIdle02
	MeleeDeathFaceSkyIdle02 = 0;

	// Field : MeleeFlinchDownToDeathFaceGround01
	MeleeFlinchDownToDeathFaceGround01 = 0;

	// Field : MeleeFlinchDownToDeathFaceGround02
	MeleeFlinchDownToDeathFaceGround02 = 0;

	// Field : MeleeFlinchDownToDeathFaceSky01
	MeleeFlinchDownToDeathFaceSky01 = 0;

	// Field : MeleeFlinchDownToDeathFaceSky02
	MeleeFlinchDownToDeathFaceSky02 = 0;

	// Field : MeleeFlinchFlyinGroundKick
	MeleeFlinchFlyinGroundKick = 0;

	// Field : MeleeFlinchHookDownLeft
	MeleeFlinchHookDownLeft = 0;

	// Field : MeleeFlinchHookDownRight
	MeleeFlinchHookDownRight = 0;

	// Field : MeleeFlinchHookUpLeft
	MeleeFlinchHookUpLeft = 0;

	// Field : MeleeFlinchHookUpRight
	MeleeFlinchHookUpRight = 0;

	// Field : MeleeFlinchJabDownLeft
	MeleeFlinchJabDownLeft = 0;

	// Field : MeleeFlinchJabDownRight
	MeleeFlinchJabDownRight = 0;

	// Field : MeleeFlinchJabUpLeft
	MeleeFlinchJabUpLeft = 0;

	// Field : MeleeFlinchJabUpRight
	MeleeFlinchJabUpRight = 0;

	// Field : MeleeFlinchKickLeft
	MeleeFlinchKickLeft = 0;

	// Field : MeleeFlinchKickRight
	MeleeFlinchKickRight = 0;

	// Field : MeleeFlinchKneeKickLeft
	MeleeFlinchKneeKickLeft = 0;

	// Field : MeleeFlinchKneeKickRight
	MeleeFlinchKneeKickRight = 0;

	// Field : MeleeFlinchRoundHookPunch
	MeleeFlinchRoundHookPunch = 0;

	// Field : MeleeFlinchRoundKickLeft
	MeleeFlinchRoundKickLeft = 0;

	// Field : MeleeFlinchSideKickRight
	MeleeFlinchSideKickRight = 0;

	// Field : MeleeFlinchSupermanPunch
	MeleeFlinchSupermanPunch = 0;

	// Field : MeleeFlinchUppercutDown
	MeleeFlinchUppercutDown = 0;

	// Field : MeleeFlinchUppercutUp
	MeleeFlinchUppercutUp = 0;

	// Field : MeleeFlinchSupermanJab
	MeleeFlinchSupermanJab = 0;

	// Field : MeleeFlinchUpToDeathFaceground
	MeleeFlinchUpToDeathFaceground = 0;

	// Field : MeleeFlinchUpToDeathFacesky
	MeleeFlinchUpToDeathFacesky = 0;

	// Field : MeleeBlockUpRight
	MeleeBlockUpRight = 0;

	// Field : MeleeBlockUpLeft
	MeleeBlockUpLeft = 0;

	// Field : MeleeBlockDownRight
	MeleeBlockDownRight = 0;

	// Field : MeleeBlockDownLeft
	MeleeBlockDownLeft = 0;

	// Field : MeleeBlockLegKick
	MeleeBlockLegKick = 0;

	// Field : MeleeGroundAttackGroundPounch
	MeleeGroundAttackGroundPounch = 0;

	// Field : MeleeGroundAttackKickStumpHead
	MeleeGroundAttackKickStumpHead = 0;

	// Field : MeleeGroundAttackSoccerKick
	MeleeGroundAttackSoccerKick = 0;

	// Field : MeleeIdle
	MeleeIdle = 0;

	// Field : MeleeIdleToStunt
	MeleeIdleToStunt = 0;

	// Field : MeleeIdleToStuntHigh
	MeleeIdleToStuntHigh = 0;

	// Field : MeleeStuntHighIdle
	MeleeStuntHighIdle = 0;

	// Field : MeleeStuntHighToMeleeIdle
	MeleeStuntHighToMeleeIdle = 0;

	// Field : MeleeStuntIdle
	MeleeStuntIdle = 0;

	// Field : MeleeStuntToDeathFaceGround
	MeleeStuntToDeathFaceGround = 0;

	// Field : MeleeStuntToDeathFaceSky
	MeleeStuntToDeathFaceSky = 0;

	// Field : MeleeStuntToMeleeIdle
	MeleeStuntToMeleeIdle = 0;

	// Field : MeleeStuntWalk
	MeleeStuntWalk = 0;

	// Field : MeleeWalkStrafeBack
	MeleeWalkStrafeBack = 0;
	MeleeWalkStrafeBack_hash = 0;

	// Field : MeleeWalkStrafeFront
	MeleeWalkStrafeFront = 0;
	MeleeWalkStrafeFront_hash = 0;

	// Field : MeleeWalkStrafeLeft
	MeleeWalkStrafeLeft = 0;
	MeleeWalkStrafeLeft_hash = 0;

	// Field : MeleeWalkStrafeRight
	MeleeWalkStrafeRight = 0;
	MeleeWalkStrafeRight_hash = 0;

	// Field : MeleeWeaponGroundAttack
	MeleeWeaponGroundAttack = 0;

	// Field : MeleeWeaponAttack
	MeleeWeaponAttack = 0;

	// Field : MeleeWeaponAttackReturn
	MeleeWeaponAttackReturn = 0;

	// Field : MeleeWeaponComboAttack
	MeleeWeaponComboAttack = 0;

	// Field : MeleeWeaponFierceAttack
	MeleeWeaponFierceAttack = 0;

	// Field : MeleeWeaponFlinchGroundAttack
	MeleeWeaponFlinchGroundAttack = 0;

	// Field : MeleeWeaponFlinchAttack
	MeleeWeaponFlinchAttack = 0;

	// Field : MeleeWeaponFlinchComboAttack
	MeleeWeaponFlinchComboAttack = 0;

	// Field : MeleeWeaponFlinchFierceAttack
	MeleeWeaponFlinchFierceAttack = 0;

	// Field : MeleeWeaponBlockAttack
	MeleeWeaponBlockAttack = 0;

	// Field : MeleeWeaponBlockComboAttack
	MeleeWeaponBlockComboAttack = 0;

	// Field : MeleeWeaponBlockFierceAttack
	MeleeWeaponBlockFierceAttack = 0;

	// Field : CrowdPushFront
	CrowdPushFront = 0;

	// Field : CrowdPushLeft
	CrowdPushLeft = 0;

	// Field : CrowdPushRight
	CrowdPushRight = 0;

	// Field : CrowdAimPushLeft
	CrowdAimPushLeft = 0;

	// Field : CrowdAimPushRight
	CrowdAimPushRight = 0;

	// Field : BeingPushedLeft
	BeingPushedLeft = 0;

	// Field : BeingPushedRight
	BeingPushedRight = 0;

	// Field : StriperPole_01
	StriperPole_01 = 0;
	StriperPole_01_hash = 0;

	// Field : StriperPole_02
	StriperPole_02 = 0;
	StriperPole_02_hash = 0;

	// Field : StriperPole_03
	StriperPole_03 = 0;
	StriperPole_03_hash = 0;

	// Field : StriperDance
	StriperDance = 0;
	StriperDance_hash = 0;

	// Field : StriperSitting_01
	StriperSitting_01 = 0;
	StriperSitting_01_hash = 0;

	// Field : StriperSitting_02
	StriperSitting_02 = 0;
	StriperSitting_02_hash = 0;

	// Field : StriperSitting_03
	StriperSitting_03 = 0;
	StriperSitting_03_hash = 0;

	// Field : StriperStanding_01
	StriperStanding_01 = 0;
	StriperStanding_01_hash = 0;

	// Field : StriperStanding_02
	StriperStanding_02 = 0;
	StriperStanding_02_hash = 0;

	// Field : StriperStanding_03
	StriperStanding_03 = 0;
	StriperStanding_03_hash = 0;

	// Field : Bouncer_Idle
	Bouncer_Idle = 0;

	// Field : Bouncer_Observing
	Bouncer_Observing = 0;

	// Field : BarSitting_01
	BarSitting_01 = 0;

	// Field : BarSitting_01_a
	BarSitting_01_a = 0;

	// Field : BarSitting_01_b
	BarSitting_01_b = 0;

	// Field : BarSitting_02
	BarSitting_02 = 0;

	// Field : BarSitting_02_a
	BarSitting_02_a = 0;

	// Field : BarSitting_02_b
	BarSitting_02_b = 0;

	// Field : BarSitting_03
	BarSitting_03 = 0;

	// Field : BarSitting_03_a
	BarSitting_03_a = 0;

	// Field : BarSitting_03_b
	BarSitting_03_b = 0;

	// Field : BarSitting_04
	BarSitting_04 = 0;

	// Field : BarSitting_04_a
	BarSitting_04_a = 0;

	// Field : BarSitting_04_b
	BarSitting_04_b = 0;

	// Field : WalkLeft
	WalkLeft = 0;

	// Field : WalkRight
	WalkRight = 0;

	// Field : IdleLeft
	IdleLeft = 0;

	// Field : IdleRight
	IdleRight = 0;

	// Field : ReloadLeft
	ReloadLeft = 0;

	// Field : ReloadRight
	ReloadRight = 0;

	// Field : IdleLeftToShoot
	IdleLeftToShoot = 0;

	// Field : IdleRightToShoot
	IdleRightToShoot = 0;

	// Field : LeaveCoverLeft
	LeaveCoverLeft = 0;

	// Field : LeaveCoverRight
	LeaveCoverRight = 0;

	// Field : TakeCoverLeft
	TakeCoverLeft = 0;

	// Field : TakeCoverRight
	TakeCoverRight = 0;

	// Field : ShootLeft
	ShootLeft = 0;

	// Field : ShootRight
	ShootRight = 0;

	// Field : ShootLeftStandUp
	ShootLeftStandUp = 0;

	// Field : ShootRightStandUp
	ShootRightStandUp = 0;

	// Field : ShootUpLeft
	ShootUpLeft = 0;

	// Field : ShootUpRight
	ShootUpRight = 0;

	// Field : IdleLeftToShootUp
	IdleLeftToShootUp = 0;

	// Field : IdleRightToShootUp
	IdleRightToShootUp = 0;

	// Field : WalkLeftStandUp
	WalkLeftStandUp = 0;

	// Field : WalkRightStandUp
	WalkRightStandUp = 0;

	// Field : IdleLeftStandUp
	IdleLeftStandUp = 0;

	// Field : IdleRightStandUp
	IdleRightStandUp = 0;

	// Field : ReloadLeftStandUp
	ReloadLeftStandUp = 0;

	// Field : ReloadRightStandUp
	ReloadRightStandUp = 0;

	// Field : IdleLeftToShootStandUp
	IdleLeftToShootStandUp = 0;

	// Field : IdleRightToShootStandUp
	IdleRightToShootStandUp = 0;

	// Field : LeaveCoverLeftStandUp
	LeaveCoverLeftStandUp = 0;

	// Field : LeaveCoverRightStandUp
	LeaveCoverRightStandUp = 0;

	// Field : TakeCoverLeftStandUp
	TakeCoverLeftStandUp = 0;

	// Field : TakeCoverRightStandUp
	TakeCoverRightStandUp = 0;

	// Field : AngryTalk_menu
	AngryTalk_menu = 0;

	// Field : AngryTalk
	AngryTalk = 0;

	// Field : AngryTalk01
	AngryTalk01 = 0;

	// Field : AngryTalk02
	AngryTalk02 = 0;

	// Field : AngryListen
	AngryListen = 0;

	// Field : AngryListen01
	AngryListen01 = 0;

	// Field : AngryListen02
	AngryListen02 = 0;

	// Field : HappyTalk
	HappyTalk = 0;

	// Field : HappyTalk01
	HappyTalk01 = 0;

	// Field : HappyTalk02
	HappyTalk02 = 0;

	// Field : HappyListen
	HappyListen = 0;

	// Field : HappyListen01
	HappyListen01 = 0;

	// Field : HappyListen02
	HappyListen02 = 0;

	// Field : StressedTalk
	StressedTalk = 0;
	StressedTalk_hash = 0;

	// Field : StressedTalk01
	StressedTalk01 = 0;
	StressedTalk01_hash = 0;

	// Field : StressedListen
	StressedListen = 0;
	StressedListen_hash = 0;

	// Field : StressedListen01
	StressedListen01 = 0;
	StressedListen01_hash = 0;

	// Field : CoverCrouchThrowGrenadeOverRight
	CoverCrouchThrowGrenadeOverRight = 0;

	// Field : CoverCrouchThrowGrenadeOverLeft
	CoverCrouchThrowGrenadeOverLeft = 0;

	// Field : CoverStandUpThrowGrenadeRight
	CoverStandUpThrowGrenadeRight = 0;

	// Field : CoverStandUpThrowGrenadeLeft
	CoverStandUpThrowGrenadeLeft = 0;

	// Field : CoverCrouchThrowGrenadeRight
	CoverCrouchThrowGrenadeRight = 0;

	// Field : CoverCrouchThrowGrenadeLeft
	CoverCrouchThrowGrenadeLeft = 0;

	// Field : CoverHurdleLeft
	CoverHurdleLeft = 0;

	// Field : HurdleLeftToIdle
	HurdleLeftToIdle = 0;

	// Field : CoverHurdleRight
	CoverHurdleRight = 0;

	// Field : HurdleRightToIdle
	HurdleRightToIdle = 0;

	// Field : ClimbFromHurdleLeftToIdle
	ClimbFromHurdleLeftToIdle = 0;

	// Field : ClimbFromHurdleRightToIdle
	ClimbFromHurdleRightToIdle = 0;

	// Field : LeftToRight
	LeftToRight = 0;

	// Field : RightToLeft
	RightToLeft = 0;

	// Field : LeftToRightStandUp
	LeftToRightStandUp = 0;

	// Field : RightToLeftStandUp
	RightToLeftStandUp = 0;

	// Field : FlinchLeft
	FlinchLeft = 0;

	// Field : FlinchRight
	FlinchRight = 0;

	// Field : FlinchFrontLeft
	FlinchFrontLeft = 0;

	// Field : FlinchFrontRight
	FlinchFrontRight = 0;

	// Field : FlinchBack
	FlinchBack = 0;

	// Field : FallDownFaceGround01
	FallDownFaceGround01 = 0;

	// Field : FallDownFaceGround02
	FallDownFaceGround02 = 0;

	// Field : FallDownFaceSky01
	FallDownFaceSky01 = 0;

	// Field : FallDownFaceSky02
	FallDownFaceSky02 = 0;

	// Field : GetUpFaceGround
	GetUpFaceGround = 0;

	// Field : GetUpFaceSky
	GetUpFaceSky = 0;

	// Field : GetUpFaceSkyRagdoll
	GetUpFaceSkyRagdoll = 0;

	// Field : UseComputer
	UseComputer = 0;

	// Field : AvoidCar
	AvoidCar = 0;

	// Field : AvoidCarLeft01
	AvoidCarLeft01 = 0;

	// Field : AvoidCarLeft02
	AvoidCarLeft02 = 0;

	// Field : AvoidCarLeft03
	AvoidCarLeft03 = 0;

	// Field : AvoidCarLeft04
	AvoidCarLeft04 = 0;

	// Field : AvoidCarRight01
	AvoidCarRight01 = 0;

	// Field : AvoidCarRight02
	AvoidCarRight02 = 0;

	// Field : AvoidCarRight03
	AvoidCarRight03 = 0;

	// Field : AvoidCarRight04
	AvoidCarRight04 = 0;

	// Field : AvoidCarJumpLeft01
	AvoidCarJumpLeft01 = 0;

	// Field : AvoidCarJumpLeft02
	AvoidCarJumpLeft02 = 0;

	// Field : AvoidCarJumpRight01
	AvoidCarJumpRight01 = 0;

	// Field : AvoidCarJumpRight02
	AvoidCarJumpRight02 = 0;

	// Field : Choose_FistsWeakStriking
	Choose_FistsWeakStriking = 0;
	Choose_FistsWeakStriking_hash = 0;

	// Field : Choose_FistsStrongStriking
	Choose_FistsStrongStriking = 0;
	Choose_FistsStrongStriking_hash = 0;

	// Field : Choose_MeleeWeakCombo
	Choose_MeleeWeakCombo = 0;

	// Field : Choose_MeleeWeakStriking
	Choose_MeleeWeakStriking = 0;
	Choose_MeleeWeakStriking_hash = 0;

	// Field : Choose_MeleeWeakReturn
	Choose_MeleeWeakReturn = 0;

	// Field : Choose_MeleeStrongStriking
	Choose_MeleeStrongStriking = 0;
	Choose_MeleeStrongStriking_hash = 0;

	// Field : Choose_MeleeIdle
	Choose_MeleeIdle = 0;

	// Field : Choose_Run
	Choose_Run = 0;

	// Field : Choose_Reload
	Choose_Reload = 0;

	// Field : Choose_Walk
	Choose_Walk = 0;

	// Field : Choose_1handed
	Choose_1handed = 0;

	// Field : Choose_1handed_02
	Choose_1handed_02 = 0;

	// Field : Choose_2handed
	Choose_2handed = 0;

	// Field : Choose_2handed_02
	Choose_2handed_02 = 0;

	// Field : Choose_dual_02
	Choose_dual_02 = 0;

	// Field : Choose_head
	Choose_head = 0;

	// Field : Choose_head_02
	Choose_head_02 = 0;

	// Field : Choose_leg
	Choose_leg = 0;

	// Field : Choose_leg_02
	Choose_leg_02 = 0;

	// Field : Choose_torso
	Choose_torso = 0;

	// Field : Choose_torso_02
	Choose_torso_02 = 0;

	// Field : Choose_polishes_2handed
	Choose_polishes_2handed = 0;

	// Field : Choose_aim_Sniper
	Choose_aim_Sniper = 0;

	// Field : Choose_flexing
	Choose_flexing = 0;

	// Field : Choose_flexing_armor
	Choose_flexing_armor = 0;

	// Field : Choose_juggling_grenade
	Choose_juggling_grenade = 0;

	// Field : Choose_pickpocket
	Choose_pickpocket = 0;

	// Field : Choose_running_breath
	Choose_running_breath = 0;

	// Field : Choose_standing_holding_grenade
	Choose_standing_holding_grenade = 0;

	// Field : Choose_takes_aim_1handed
	Choose_takes_aim_1handed = 0;

	// Field : Choose_takes_aim_2handed
	Choose_takes_aim_2handed = 0;

	// Field : Choose_throw_grenade
	Choose_throw_grenade = 0;

	// Field : Choose_cover_crouch
	Choose_cover_crouch = 0;

	// Field : Choose_1handedRecoil
	Choose_1handedRecoil = 0;

	// Field : Choose_1handedReload
	Choose_1handedReload = 0;

	// Field : Choose_1handedRecoilRevolver
	Choose_1handedRecoilRevolver = 0;

	// Field : Choose_1handedReloadRevolver
	Choose_1handedReloadRevolver = 0;

	// Field : Choose_1handedRecoilSMG
	Choose_1handedRecoilSMG = 0;

	// Field : Choose_1handedReloadSMG
	Choose_1handedReloadSMG = 0;

	// Field : Choose_2handedRecoil
	Choose_2handedRecoil = 0;

	// Field : Choose_2handedReload
	Choose_2handedReload = 0;

	// Field : Choose_2handedRecoilShotgun
	Choose_2handedRecoilShotgun = 0;

	// Field : Choose_2handedReloadShotgun
	Choose_2handedReloadShotgun = 0;

	// Field : Choose_sprint
	Choose_sprint = 0;

	// Field : Choose_freerun
	Choose_freerun = 0;

	// Field : CheeringIdle01
	CheeringIdle01 = 0;

	// Field : CheeringIdle02
	CheeringIdle02 = 0;

	// Field : CheeringWalk01
	CheeringWalk01 = 0;

	// Field : CheeringWalk02
	CheeringWalk02 = 0;

	// Field : PhoneWalk
	PhoneWalk = 0;

	// Field : Walk01
	Walk01 = 0;

	// Field : Walk02
	Walk02 = 0;

	// Field : AngryWalk01
	AngryWalk01 = 0;

	// Field : HappyWalk01
	HappyWalk01 = 0;

	// Field : HappyWalk02
	HappyWalk02 = 0;

	// Field : FlipBird
	FlipBird = 0;

	// Field : GiveObject
	GiveObject = 0;

	// Field : WavingArms01
	WavingArms01 = 0;

	// Field : WavingArms02
	WavingArms02 = 0;

	// Field : Chuckle01
	Chuckle01 = 0;

	// Field : Chuckle02
	Chuckle02 = 0;

	// Field : JogIdle
	JogIdle = 0;

	// Field : JogRun
	JogRun = 0;

	// Field : ShakeFist
	ShakeFist = 0;

	// Field : SmokingIdle
	SmokingIdle = 0;

	// Field : Cine_turn90Left
	Cine_turn90Left = 0;

	// Field : Cine_turn90Right
	Cine_turn90Right = 0;

	// Field : Cine_turn180Left
	Cine_turn180Left = 0;

	// Field : Cine_turn180Right
	Cine_turn180Right = 0;

	// Field : BluetoothCompose
	BluetoothCompose_f = 0.0f;

	// Field : BluetoothAnswer
	BluetoothAnswer = 0;

	// Field : BluetoothHangUp
	BluetoothHangUp = 0;

	// Field : RacerChickStart
	RacerChickStart = 0;

	// Field : SitAnchored_front_01
	SitAnchored_front_01 = 0;

	// Field : SitAnchored_left_01
	SitAnchored_left_01 = 0;

	// Field : SitAnchored_right_01
	SitAnchored_right_01 = 0;

	// Field : SitAnchored_front_02
	SitAnchored_front_02 = 0;

	// Field : SitAnchored_left_02
	SitAnchored_left_02 = 0;

	// Field : SitAnchored_right_02
	SitAnchored_right_02 = 0;

	// Field : CasinoDealerIdle
	CasinoDealerIdle = 0;

	// Field : CasinoDealerGiveCards
	CasinoDealerGiveCards = 0;

	// Field : CasinoGamblerIdle
	CasinoGamblerIdle = 0;

	// Field : CasinoGamblerLose
	CasinoGamblerLose = 0;

	// Field : CasinoGamblerWin
	CasinoGamblerWin = 0;

	// Field : CasinoGamblerCheck
	CasinoGamblerCheck = 0;

	// Field : CasinoSlotIdle
	CasinoSlotIdle = 0;

	// Field : CasinoSlotIdle2
	CasinoSlotIdle2 = 0;

	// Field : casino_dealer_give_cards
	casino_dealer_give_cards = 0;

	// Field : deviless_finger_call
	deviless_finger_call = 0;

	// Field : deviless_finger_order
	deviless_finger_order = 0;

	// Field : look_around
	look_around = 0;

	// Field : ZzGameLastAnimation
	ZzGameLastAnimation = 0;
	ZzGameLastAnimation_hash = 0;

}

void animation_sets_struct::Load(StreamBase* stream)
{
	base_struct::Load(stream);

	// Field : ID
	stream->ReadAs(ID);

	// Field : type
	stream->ReadAs(type);

	// Field : loop
	stream->ReadAs(loop);

	// Field : interpolation
	stream->ReadAs(interpolation);

	// Field : AaGameFirstAnimation
	stream->ReadString(AaGameFirstAnimation);
	AaGameFirstAnimation_hash = static_cast<uint32>(glitch::core::hashString(AaGameFirstAnimation));

	// Field : Aim
	stream->ReadAs(Aim);

	// Field : Shoot
	stream->ReadAs(Shoot);

	// Field : Throw
	stream->ReadAs(Throw);

	// Field : Melee
	stream->ReadAs(Melee);

	// Field : Flinch
	stream->ReadAs(Flinch);

	// Field : FallDown
	stream->ReadAs(FallDown);

	// Field : GetUp
	stream->ReadAs(GetUp);

	// Field : TakeCover
	stream->ReadAs(TakeCover);

	// Field : LeaveCover
	stream->ReadAs(LeaveCover);

	// Field : Climb
	stream->ReadAs(Climb);

	// Field : Die
	stream->ReadAs(Die);

	// Field : VehicleDriverAim
	stream->ReadAs(VehicleDriverAim);

	// Field : VehicleRightPassengerAim
	stream->ReadAs(VehicleRightPassengerAim);

	// Field : VehicleDriverRecoil
	stream->ReadAs(VehicleDriverRecoil);

	// Field : VehicleDriverLowerWeapon
	stream->ReadAs(VehicleDriverLowerWeapon);

	// Field : VehicleRightPassengerLowerWeapon
	stream->ReadAs(VehicleRightPassengerLowerWeapon);

	// Field : VehicleRightPassengerRecoil
	stream->ReadAs(VehicleRightPassengerRecoil);

	// Field : VehicleMotoRecoil
	stream->ReadAs(VehicleMotoRecoil);

	// Field : VehicleJetpackRecoil
	stream->ReadAs(VehicleJetpackRecoil);

	// Field : VehicleTurnLeft
	stream->ReadAs(VehicleTurnLeft);

	// Field : VehicleTurnRight
	stream->ReadAs(VehicleTurnRight);

	// Field : VehicleReverse
	stream->ReadAs(VehicleReverse);

	// Field : VehicleLeanBack
	stream->ReadAs(VehicleLeanBack);

	// Field : VehicleLeanForward
	stream->ReadAs(VehicleLeanForward);

	// Field : VehicleIdle
	stream->ReadAs(VehicleIdle);

	// Field : VehicleDriver
	stream->ReadAs(VehicleDriver);

	// Field : VehiclePassenger
	stream->ReadAs(VehiclePassenger);

	// Field : VehicleMovingIdle
	stream->ReadAs(VehicleMovingIdle);

	// Field : VehicleFix
	stream->ReadAs(VehicleFix);

	// Field : VehicleEjectLeft
	stream->ReadAs(VehicleEjectLeft);

	// Field : VehicleEjectRight
	stream->ReadAs(VehicleEjectRight);

	// Field : VehicleEnterLeft
	stream->ReadAs(VehicleEnterLeft);

	// Field : VehicleEnterRight
	stream->ReadAs(VehicleEnterRight);

	// Field : VehicleExitLeft
	stream->ReadAs(VehicleExitLeft);

	// Field : VehicleExitRight
	stream->ReadAs(VehicleExitRight);

	// Field : VehicleExitLeftRoof
	stream->ReadAs(VehicleExitLeftRoof);

	// Field : VehicleExitRightRoof
	stream->ReadAs(VehicleExitRightRoof);

	// Field : VehicleEnter
	stream->ReadAs(VehicleEnter);

	// Field : VehicleExit
	stream->ReadAs(VehicleExit);

	// Field : VehicleEject
	stream->ReadAs(VehicleEject);

	// Field : VehicleUseDoor
	stream->ReadAs(VehicleUseDoor);

	// Field : VehicleThrowDriverOut
	stream->ReadAs(VehicleThrowDriverOut);

	// Field : VehicleCloseDoorFromInside
	stream->ReadAs(VehicleCloseDoorFromInside);

	// Field : VehicleThrowDriverOutLeft
	stream->ReadAs(VehicleThrowDriverOutLeft);

	// Field : VehicleDriverThrownOutLeft
	stream->ReadAs(VehicleDriverThrownOutLeft);

	// Field : VehicleThrowDriverOutRight
	stream->ReadAs(VehicleThrowDriverOutRight);

	// Field : VehicleDriverThrownOutRight
	stream->ReadAs(VehicleDriverThrownOutRight);

	// Field : VehiclePushOutLeft
	stream->ReadAs(VehiclePushOutLeft);

	// Field : VehiclePushedOutLeft
	stream->ReadAs(VehiclePushedOutLeft);

	// Field : VehiclePushOutRight
	stream->ReadAs(VehiclePushOutRight);

	// Field : VehiclePushedOutRight
	stream->ReadAs(VehiclePushedOutRight);

	// Field : VehicleCloseDoorFromInsideLeft
	stream->ReadAs(VehicleCloseDoorFromInsideLeft);

	// Field : VehicleCloseDoorFromInsideRight
	stream->ReadAs(VehicleCloseDoorFromInsideRight);

	// Field : VehicleOpenDoorFromInsideLeft
	stream->ReadAs(VehicleOpenDoorFromInsideLeft);

	// Field : VehicleOpenDoorFromInsideRight
	stream->ReadAs(VehicleOpenDoorFromInsideRight);

	// Field : BikeHarleyStandIdle
	stream->ReadAs(BikeHarleyStandIdle);

	// Field : Burnout
	stream->ReadAs(Burnout);

	// Field : AimSub
	stream->ReadAs(AimSub);

	// Field : AimIdle
	stream->ReadAs(AimIdle);

	// Field : AimRun
	stream->ReadAs(AimRun);

	// Field : AimWalk
	stream->ReadAs(AimWalk);

	// Field : AimBackRun
	stream->ReadAs(AimBackRun);

	// Field : AimBackWalk
	stream->ReadAs(AimBackWalk);

	// Field : KneelingBegin
	stream->ReadAs(KneelingBegin);

	// Field : KneelingEnd
	stream->ReadAs(KneelingEnd);

	// Field : ShootIdle
	stream->ReadAs(ShootIdle);

	// Field : ShootRun
	stream->ReadAs(ShootRun);

	// Field : ShootWalk
	stream->ReadAs(ShootWalk);

	// Field : ShootBackRun
	stream->ReadAs(ShootBackRun);

	// Field : ShootBackWalk
	stream->ReadAs(ShootBackWalk);

	// Field : Bumped
	stream->ReadAs(Bumped);

	// Field : BumpedFront
	stream->ReadAs(BumpedFront);

	// Field : BumpedBack
	stream->ReadAs(BumpedBack);

	// Field : BumpedLeft
	stream->ReadAs(BumpedLeft);

	// Field : BumpedRight
	stream->ReadAs(BumpedRight);

	// Field : Backrun
	stream->ReadAs(Backrun);

	// Field : Backwalk_Sub
	stream->ReadAs(Backwalk_Sub);

	// Field : Backrun_Sub
	stream->ReadAs(Backrun_Sub);

	// Field : Reload
	stream->ReadAs(Reload);

	// Field : Prostrate
	stream->ReadAs(Prostrate);

	// Field : IdleToProne
	stream->ReadAs(IdleToProne);

	// Field : ProneToIdle
	stream->ReadAs(ProneToIdle);

	// Field : ProneIdle01
	stream->ReadAs(ProneIdle01);

	// Field : ProneIdle02
	stream->ReadAs(ProneIdle02);

	// Field : ProneFlinch01
	stream->ReadAs(ProneFlinch01);

	// Field : ProneFlinch02
	stream->ReadAs(ProneFlinch02);

	// Field : ProneDeathFaceGround
	stream->ReadAs(ProneDeathFaceGround);

	// Field : ProneDeathFaceSky
	stream->ReadAs(ProneDeathFaceSky);

	// Field : PhoneTalkListen
	stream->ReadAs(PhoneTalkListen);

	// Field : PhoneTalk
	stream->ReadAs(PhoneTalk);

	// Field : PhoneTalk01
	stream->ReadAs(PhoneTalk01);

	// Field : PhoneTalk02
	stream->ReadAs(PhoneTalk02);

	// Field : PhoneTalk03
	stream->ReadAs(PhoneTalk03);

	// Field : PhoneAnswer
	stream->ReadAs(PhoneAnswer);

	// Field : PhoneHangup
	stream->ReadAs(PhoneHangup);

	// Field : BeggingSit
	stream->ReadAs(BeggingSit);

	// Field : BeggingSitReceive
	stream->ReadAs(BeggingSitReceive);

	// Field : BeggingStand
	stream->ReadAs(BeggingStand);

	// Field : BeggingStandReceive
	stream->ReadAs(BeggingStandReceive);

	// Field : Kneeling
	stream->ReadAs(Kneeling);

	// Field : CoupleSit
	stream->ReadAs(CoupleSit);

	// Field : CoupleSit01
	stream->ReadAs(CoupleSit01);

	// Field : DeadIdle
	stream->ReadAs(DeadIdle);

	// Field : DeadIdleWater
	stream->ReadAs(DeadIdleWater);

	// Field : Outofbreath
	stream->ReadAs(Outofbreath);

	// Field : Swim
	stream->ReadAs(Swim);

	// Field : SwimIdle
	stream->ReadAs(SwimIdle);

	// Field : SwimSprint
	stream->ReadAs(SwimSprint);

	// Field : Sprint
	stream->ReadAs(Sprint);

	// Field : JumpWalk
	stream->ReadAs(JumpWalk);

	// Field : JumpRun
	stream->ReadAs(JumpRun);

	// Field : JumpRunLand
	stream->ReadAs(JumpRunLand);

	// Field : JumpRunGrabPart1
	stream->ReadAs(JumpRunGrabPart1);

	// Field : JumpRunGrabPart2
	stream->ReadAs(JumpRunGrabPart2);

	// Field : JumpRunGrabClimb
	stream->ReadAs(JumpRunGrabClimb);

	// Field : Jogging
	stream->ReadAs(Jogging);

	// Field : JoggingIdle
	stream->ReadAs(JoggingIdle);

	// Field : Fall
	stream->ReadAs(Fall);

	// Field : Land01
	stream->ReadAs(Land01);

	// Field : Land02
	stream->ReadAs(Land02);

	// Field : Land03
	stream->ReadAs(Land03);

	// Field : LandHit
	stream->ReadAs(LandHit);

	// Field : CarHitBack01
	stream->ReadAs(CarHitBack01);

	// Field : CarHitBack02
	stream->ReadAs(CarHitBack02);

	// Field : CarHitFront
	stream->ReadAs(CarHitFront);

	// Field : CarHitLeft
	stream->ReadAs(CarHitLeft);

	// Field : CarHitRight
	stream->ReadAs(CarHitRight);

	// Field : CarHitBackIdle01
	stream->ReadAs(CarHitBackIdle01);

	// Field : CarHitBackIdle02
	stream->ReadAs(CarHitBackIdle02);

	// Field : CarHitFrontIdle
	stream->ReadAs(CarHitFrontIdle);

	// Field : CarHitLeftIdle
	stream->ReadAs(CarHitLeftIdle);

	// Field : CarHitRightIdle
	stream->ReadAs(CarHitRightIdle);

	// Field : CarHitBackGetUp01
	stream->ReadAs(CarHitBackGetUp01);

	// Field : CarHitBackGetUp02
	stream->ReadAs(CarHitBackGetUp02);

	// Field : CarHitFrontGetUp
	stream->ReadAs(CarHitFrontGetUp);

	// Field : CarHitLeftGetUp
	stream->ReadAs(CarHitLeftGetUp);

	// Field : CarHitRightGetUp
	stream->ReadAs(CarHitRightGetUp);

	// Field : RunPanic
	stream->ReadAs(RunPanic);

	// Field : RunFall
	stream->ReadAs(RunFall);

	// Field : RollDown
	stream->ReadAs(RollDown_f);

	// Field : ExtinguishFire
	stream->ReadAs(ExtinguishFire);

	// Field : WalkInDaShit
	stream->ReadAs(WalkInDaShit);

	// Field : BikeMountLeft
	stream->ReadAs(BikeMountLeft);

	// Field : BikeMountRight
	stream->ReadAs(BikeMountRight);

	// Field : BikeStandIdle
	stream->ReadAs(BikeStandIdle);

	// Field : VehicleCloseDoorLeft
	stream->ReadAs(VehicleCloseDoorLeft);

	// Field : VehicleCloseDoorRight
	stream->ReadAs(VehicleCloseDoorRight);

	// Field : VehicleOpenDoorLeft
	stream->ReadAs(VehicleOpenDoorLeft);

	// Field : VehicleOpenDoorRight
	stream->ReadAs(VehicleOpenDoorRight);

	// Field : DownIdle
	stream->ReadAs(DownIdle);

	// Field : DownKicked
	stream->ReadAs(DownKicked);

	// Field : DownToIdle
	stream->ReadAs(DownToIdle);

	// Field : IdleToDead01
	stream->ReadAs(IdleToDead01);

	// Field : IdleToDead02
	stream->ReadAs(IdleToDead02);

	// Field : Backwalk
	stream->ReadAs(Backwalk);

	// Field : Idle
	stream->ReadAs(Idle);

	// Field : Idle_Sub
	stream->ReadAs(Idle_Sub);

	// Field : Idle2
	stream->ReadAs(Idle2);

	// Field : Idle2_Sub
	stream->ReadAs(Idle2_Sub);

	// Field : SprintToIdle
	stream->ReadAs(SprintToIdle);

	// Field : Walk
	stream->ReadAs(Walk);

	// Field : Walk_Sub
	stream->ReadAs(Walk_Sub);

	// Field : ForceDoor
	stream->ReadAs(ForceDoor_f);

	// Field : Turn
	stream->ReadAs(Turn);

	// Field : Taunt
	stream->ReadAs(Taunt);

	// Field : TauntIdle
	stream->ReadAs(TauntIdle);

	// Field : Hurdle
	stream->ReadAs(Hurdle);

	// Field : HurdleIdle
	stream->ReadAs(HurdleIdle);

	// Field : HurdleSprint
	stream->ReadAs(HurdleSprint);

	// Field : Hurdle2m
	stream->ReadAs(Hurdle2m);

	// Field : Hurdle2mLand
	stream->ReadAs(Hurdle2mLand);

	// Field : ClimbWater
	stream->ReadAs(ClimbWater);

	// Field : Climb30cmL
	stream->ReadAs(Climb30cmL);

	// Field : Climb30cmR
	stream->ReadAs(Climb30cmR);

	// Field : Climb100cmPart1L
	stream->ReadAs(Climb100cmPart1L);

	// Field : Climb100cmPart2L
	stream->ReadAs(Climb100cmPart2L);

	// Field : Climb100cmPart1R
	stream->ReadAs(Climb100cmPart1R);

	// Field : Climb100cmPart2R
	stream->ReadAs(Climb100cmPart2R);

	// Field : Climb200cmPart1
	stream->ReadAs(Climb200cmPart1);

	// Field : Climb200cmPart2
	stream->ReadAs(Climb200cmPart2);

	// Field : Climb200cmPart3
	stream->ReadAs(Climb200cmPart3);

	// Field : FreefallIdle
	stream->ReadAs(FreefallIdle);

	// Field : ParachuteOpen
	stream->ReadAs(ParachuteOpen);

	// Field : ParachuteIdle
	stream->ReadAs(ParachuteIdle);

	// Field : ParachuteIdleForward
	stream->ReadAs(ParachuteIdleForward);

	// Field : ParachuteIdleBackward
	stream->ReadAs(ParachuteIdleBackward);

	// Field : ParachuteLanding
	stream->ReadAs(ParachuteLanding);

	// Field : ParachuteTurnLeft
	stream->ReadAs(ParachuteTurnLeft);

	// Field : ParachuteTurnRight
	stream->ReadAs(ParachuteTurnRight);

	// Field : JetpackLanding
	stream->ReadAs(JetpackLanding);

	// Field : JetpackTakeOff
	stream->ReadAs(JetpackTakeOff);

	// Field : HandsUp
	stream->ReadAs(HandsUp);

	// Field : Talk
	stream->ReadAs(Talk);

	// Field : Talk01
	stream->ReadAs(Talk01);

	// Field : Talk02
	stream->ReadAs(Talk02);

	// Field : Listen
	stream->ReadAs(Listen);

	// Field : Listen01
	stream->ReadAs(Listen01);

	// Field : Listen02
	stream->ReadAs(Listen02);

	// Field : Run_Sub
	stream->ReadAs(Run_Sub);

	// Field : Sneeze
	stream->ReadAs(Sneeze);

	// Field : WalkPutHairInPlace
	stream->ReadAs(WalkPutHairInPlace);

	// Field : WalkDrunkMale
	stream->ReadAs(WalkDrunkMale);

	// Field : WalkDrunkTripMale
	stream->ReadAs(WalkDrunkTripMale);

	// Field : Pose
	stream->ReadAs(Pose_f);

	// Field : GunFlinch
	stream->ReadAs(GunFlinch);

	// Field : WaterFlinch
	stream->ReadAs(WaterFlinch);

	// Field : IdleSit
	stream->ReadAs(IdleSit);

	// Field : WaveHand
	stream->ReadAs(WaveHand);

	// Field : CheckHead
	stream->ReadAs(CheckHead);

	// Field : CheckTorso
	stream->ReadAs(CheckTorso);

	// Field : CheckLegs
	stream->ReadAs(CheckLegs);

	// Field : MakeOutMale
	stream->ReadAs(MakeOutMale);

	// Field : MakeOutFemale
	stream->ReadAs(MakeOutFemale);

	// Field : PlantBomb
	stream->ReadAs(PlantBomb);

	// Field : MaleSit
	stream->ReadAs(MaleSit);

	// Field : WeaponDeathHeavy01
	stream->ReadAs(WeaponDeathHeavy01);

	// Field : WeaponDeathHeavy02
	stream->ReadAs(WeaponDeathHeavy02);

	// Field : WeaponDeathHeavy03
	stream->ReadAs(WeaponDeathHeavy03);

	// Field : WeaponDeathLight01
	stream->ReadAs(WeaponDeathLight01);

	// Field : WeaponDeathLight02
	stream->ReadAs(WeaponDeathLight02);

	// Field : WeaponDeathLight03
	stream->ReadAs(WeaponDeathLight03);

	// Field : WeaponDeathSniper01
	stream->ReadAs(WeaponDeathSniper01);

	// Field : WeaponDeathSniper02
	stream->ReadAs(WeaponDeathSniper02);

	// Field : WeaponDeathSniper03
	stream->ReadAs(WeaponDeathSniper03);

	// Field : WeaponDeathExplosive01
	stream->ReadAs(WeaponDeathExplosive01);

	// Field : WeaponDeathExplosive02
	stream->ReadAs(WeaponDeathExplosive02);

	// Field : WeaponDeathExplosive03
	stream->ReadAs(WeaponDeathExplosive03);

	// Field : WeaponDeathShotgunBack
	stream->ReadAs(WeaponDeathShotgunBack);

	// Field : DanceCapoeira
	stream->ReadAs(DanceCapoeira);

	// Field : DanceBreakdance
	stream->ReadAs(DanceBreakdance);

	// Field : DanceMichaeljackson
	stream->ReadAs(DanceMichaeljackson);

	// Field : DanceRobot
	stream->ReadAs(DanceRobot);

	// Field : DanceStrip
	stream->ReadString(DanceStrip);
	DanceStrip_hash = static_cast<uint32>(glitch::core::hashString(DanceStrip));

	// Field : DanceBootyshake
	stream->ReadAs(DanceBootyshake);

	// Field : Dance01
	stream->ReadAs(Dance01);

	// Field : Dance02
	stream->ReadAs(Dance02);

	// Field : Dance03
	stream->ReadAs(Dance03);

	// Field : Dance04
	stream->ReadAs(Dance04);

	// Field : HandgunFront
	stream->ReadAs(HandgunFront);

	// Field : GrenadeFront
	stream->ReadAs(GrenadeFront);

	// Field : IdleToWalk
	stream->ReadAs(IdleToWalk);

	// Field : RunToIdleR
	stream->ReadAs(RunToIdleR);

	// Field : RunToIdleL
	stream->ReadAs(RunToIdleL);

	// Field : SprintToIdleR
	stream->ReadAs(SprintToIdleR);

	// Field : SprintToIdleL
	stream->ReadAs(SprintToIdleL);

	// Field : AimRunToIdleR
	stream->ReadAs(AimRunToIdleR);

	// Field : AimRunToIdleL
	stream->ReadAs(AimRunToIdleL);

	// Field : IdleToIdleTurn
	stream->ReadAs(IdleToIdleTurn);

	// Field : IdleToRunTurn
	stream->ReadAs(IdleToRunTurn);

	// Field : IdleToWalkTurn
	stream->ReadAs(IdleToWalkTurn);

	// Field : WalkToWalkTurn
	stream->ReadAs(WalkToWalkTurn);

	// Field : RunToRunTurn
	stream->ReadAs(RunToRunTurn);

	// Field : IdleToIdleStrafeTurn
	stream->ReadAs(IdleToIdleStrafeTurn);

	// Field : IdleToRunStrafeTurn
	stream->ReadAs(IdleToRunStrafeTurn);

	// Field : IdleToWalkStrafeTurn
	stream->ReadAs(IdleToWalkStrafeTurn);

	// Field : WalkToWalkStrafeTurn
	stream->ReadString(WalkToWalkStrafeTurn);
	WalkToWalkStrafeTurn_hash = static_cast<uint32>(glitch::core::hashString(WalkToWalkStrafeTurn));

	// Field : RunToRunStrafeTurn
	stream->ReadString(RunToRunStrafeTurn);
	RunToRunStrafeTurn_hash = static_cast<uint32>(glitch::core::hashString(RunToRunStrafeTurn));

	// Field : RaiseWeaponIdle
	stream->ReadAs(RaiseWeaponIdle);

	// Field : RaiseWeaponWalk
	stream->ReadAs(RaiseWeaponWalk);

	// Field : RaiseWeaponRun
	stream->ReadAs(RaiseWeaponRun);

	// Field : MeleeSupermanPunchRun
	stream->ReadAs(MeleeSupermanPunchRun);

	// Field : MeleeKneeKickRun
	stream->ReadAs(MeleeKneeKickRun);

	// Field : MeleeAliveFaceGroundToGetUp
	stream->ReadAs(MeleeAliveFaceGroundToGetUp);

	// Field : MeleeAlivefaceSkyToGetup
	stream->ReadAs(MeleeAlivefaceSkyToGetup);

	// Field : MeleeAttackFlyinGroundKick
	stream->ReadAs(MeleeAttackFlyinGroundKick);

	// Field : MeleeAttackHookDownLeft
	stream->ReadAs(MeleeAttackHookDownLeft);

	// Field : MeleeAttackHookDownRight
	stream->ReadAs(MeleeAttackHookDownRight);

	// Field : MeleeAttackHookUpLeft
	stream->ReadAs(MeleeAttackHookUpLeft);

	// Field : MeleeAttackHookUpRight
	stream->ReadAs(MeleeAttackHookUpRight);

	// Field : MeleeAttackJabDownLeft
	stream->ReadAs(MeleeAttackJabDownLeft);

	// Field : MeleeAttackJabDownRight
	stream->ReadAs(MeleeAttackJabDownRight);

	// Field : MeleeAttackJabUpLeft
	stream->ReadAs(MeleeAttackJabUpLeft);

	// Field : MeleeAttackJabUpRight
	stream->ReadAs(MeleeAttackJabUpRight);

	// Field : MeleeAttackKickLeft
	stream->ReadAs(MeleeAttackKickLeft);

	// Field : MeleeAttackKickRight
	stream->ReadAs(MeleeAttackKickRight);

	// Field : MeleeAttackKneeKickLeft
	stream->ReadAs(MeleeAttackKneeKickLeft);

	// Field : MeleeAttackKneeKickRight
	stream->ReadAs(MeleeAttackKneeKickRight);

	// Field : MeleeAttackRoundHookPunch
	stream->ReadAs(MeleeAttackRoundHookPunch);

	// Field : MeleeAttackRoundKickLeft
	stream->ReadAs(MeleeAttackRoundKickLeft);

	// Field : MeleeAttackSideKickRight
	stream->ReadAs(MeleeAttackSideKickRight);

	// Field : MeleeAttackSupermanPunch
	stream->ReadAs(MeleeAttackSupermanPunch);

	// Field : MeleeAttackUppercutDown
	stream->ReadAs(MeleeAttackUppercutDown);

	// Field : MeleeAttackUppercutUp
	stream->ReadAs(MeleeAttackUppercutUp);

	// Field : MeleeAttackSupermanjab
	stream->ReadAs(MeleeAttackSupermanjab);

	// Field : MeleeDeathFaceGroundFlinchBack
	stream->ReadAs(MeleeDeathFaceGroundFlinchBack);

	// Field : MeleeDeathFaceGroundFlinchFront
	stream->ReadAs(MeleeDeathFaceGroundFlinchFront);

	// Field : MeleeDeathFaceGroundFlinchLeft
	stream->ReadAs(MeleeDeathFaceGroundFlinchLeft);

	// Field : MeleeDeathFaceGroundFlinchRight
	stream->ReadAs(MeleeDeathFaceGroundFlinchRight);

	// Field : MeleeDeathFaceGroundIdle
	stream->ReadAs(MeleeDeathFaceGroundIdle);

	// Field : MeleeDeathFaceSkyFlinchBack
	stream->ReadAs(MeleeDeathFaceSkyFlinchBack);

	// Field : MeleeDeathFaceSkyFlinchFront
	stream->ReadAs(MeleeDeathFaceSkyFlinchFront);

	// Field : MeleeDeathFaceSkyFlinchLeft
	stream->ReadAs(MeleeDeathFaceSkyFlinchLeft);

	// Field : MeleeDeathFaceSkyFlinchRight
	stream->ReadAs(MeleeDeathFaceSkyFlinchRight);

	// Field : MeleeDeathFaceSkyIdle01
	stream->ReadAs(MeleeDeathFaceSkyIdle01);

	// Field : MeleeDeathFaceSkyIdle02
	stream->ReadAs(MeleeDeathFaceSkyIdle02);

	// Field : MeleeFlinchDownToDeathFaceGround01
	stream->ReadAs(MeleeFlinchDownToDeathFaceGround01);

	// Field : MeleeFlinchDownToDeathFaceGround02
	stream->ReadAs(MeleeFlinchDownToDeathFaceGround02);

	// Field : MeleeFlinchDownToDeathFaceSky01
	stream->ReadAs(MeleeFlinchDownToDeathFaceSky01);

	// Field : MeleeFlinchDownToDeathFaceSky02
	stream->ReadAs(MeleeFlinchDownToDeathFaceSky02);

	// Field : MeleeFlinchFlyinGroundKick
	stream->ReadAs(MeleeFlinchFlyinGroundKick);

	// Field : MeleeFlinchHookDownLeft
	stream->ReadAs(MeleeFlinchHookDownLeft);

	// Field : MeleeFlinchHookDownRight
	stream->ReadAs(MeleeFlinchHookDownRight);

	// Field : MeleeFlinchHookUpLeft
	stream->ReadAs(MeleeFlinchHookUpLeft);

	// Field : MeleeFlinchHookUpRight
	stream->ReadAs(MeleeFlinchHookUpRight);

	// Field : MeleeFlinchJabDownLeft
	stream->ReadAs(MeleeFlinchJabDownLeft);

	// Field : MeleeFlinchJabDownRight
	stream->ReadAs(MeleeFlinchJabDownRight);

	// Field : MeleeFlinchJabUpLeft
	stream->ReadAs(MeleeFlinchJabUpLeft);

	// Field : MeleeFlinchJabUpRight
	stream->ReadAs(MeleeFlinchJabUpRight);

	// Field : MeleeFlinchKickLeft
	stream->ReadAs(MeleeFlinchKickLeft);

	// Field : MeleeFlinchKickRight
	stream->ReadAs(MeleeFlinchKickRight);

	// Field : MeleeFlinchKneeKickLeft
	stream->ReadAs(MeleeFlinchKneeKickLeft);

	// Field : MeleeFlinchKneeKickRight
	stream->ReadAs(MeleeFlinchKneeKickRight);

	// Field : MeleeFlinchRoundHookPunch
	stream->ReadAs(MeleeFlinchRoundHookPunch);

	// Field : MeleeFlinchRoundKickLeft
	stream->ReadAs(MeleeFlinchRoundKickLeft);

	// Field : MeleeFlinchSideKickRight
	stream->ReadAs(MeleeFlinchSideKickRight);

	// Field : MeleeFlinchSupermanPunch
	stream->ReadAs(MeleeFlinchSupermanPunch);

	// Field : MeleeFlinchUppercutDown
	stream->ReadAs(MeleeFlinchUppercutDown);

	// Field : MeleeFlinchUppercutUp
	stream->ReadAs(MeleeFlinchUppercutUp);

	// Field : MeleeFlinchSupermanJab
	stream->ReadAs(MeleeFlinchSupermanJab);

	// Field : MeleeFlinchUpToDeathFaceground
	stream->ReadAs(MeleeFlinchUpToDeathFaceground);

	// Field : MeleeFlinchUpToDeathFacesky
	stream->ReadAs(MeleeFlinchUpToDeathFacesky);

	// Field : MeleeBlockUpRight
	stream->ReadAs(MeleeBlockUpRight);

	// Field : MeleeBlockUpLeft
	stream->ReadAs(MeleeBlockUpLeft);

	// Field : MeleeBlockDownRight
	stream->ReadAs(MeleeBlockDownRight);

	// Field : MeleeBlockDownLeft
	stream->ReadAs(MeleeBlockDownLeft);

	// Field : MeleeBlockLegKick
	stream->ReadAs(MeleeBlockLegKick);

	// Field : MeleeGroundAttackGroundPounch
	stream->ReadAs(MeleeGroundAttackGroundPounch);

	// Field : MeleeGroundAttackKickStumpHead
	stream->ReadAs(MeleeGroundAttackKickStumpHead);

	// Field : MeleeGroundAttackSoccerKick
	stream->ReadAs(MeleeGroundAttackSoccerKick);

	// Field : MeleeIdle
	stream->ReadAs(MeleeIdle);

	// Field : MeleeIdleToStunt
	stream->ReadAs(MeleeIdleToStunt);

	// Field : MeleeIdleToStuntHigh
	stream->ReadAs(MeleeIdleToStuntHigh);

	// Field : MeleeStuntHighIdle
	stream->ReadAs(MeleeStuntHighIdle);

	// Field : MeleeStuntHighToMeleeIdle
	stream->ReadAs(MeleeStuntHighToMeleeIdle);

	// Field : MeleeStuntIdle
	stream->ReadAs(MeleeStuntIdle);

	// Field : MeleeStuntToDeathFaceGround
	stream->ReadAs(MeleeStuntToDeathFaceGround);

	// Field : MeleeStuntToDeathFaceSky
	stream->ReadAs(MeleeStuntToDeathFaceSky);

	// Field : MeleeStuntToMeleeIdle
	stream->ReadAs(MeleeStuntToMeleeIdle);

	// Field : MeleeStuntWalk
	stream->ReadAs(MeleeStuntWalk);

	// Field : MeleeWalkStrafeBack
	stream->ReadString(MeleeWalkStrafeBack);
	MeleeWalkStrafeBack_hash = static_cast<uint32>(glitch::core::hashString(MeleeWalkStrafeBack));

	// Field : MeleeWalkStrafeFront
	stream->ReadString(MeleeWalkStrafeFront);
	MeleeWalkStrafeFront_hash = static_cast<uint32>(glitch::core::hashString(MeleeWalkStrafeFront));

	// Field : MeleeWalkStrafeLeft
	stream->ReadString(MeleeWalkStrafeLeft);
	MeleeWalkStrafeLeft_hash = static_cast<uint32>(glitch::core::hashString(MeleeWalkStrafeLeft));

	// Field : MeleeWalkStrafeRight
	stream->ReadString(MeleeWalkStrafeRight);
	MeleeWalkStrafeRight_hash = static_cast<uint32>(glitch::core::hashString(MeleeWalkStrafeRight));

	// Field : MeleeWeaponGroundAttack
	stream->ReadAs(MeleeWeaponGroundAttack);

	// Field : MeleeWeaponAttack
	stream->ReadAs(MeleeWeaponAttack);

	// Field : MeleeWeaponAttackReturn
	stream->ReadAs(MeleeWeaponAttackReturn);

	// Field : MeleeWeaponComboAttack
	stream->ReadAs(MeleeWeaponComboAttack);

	// Field : MeleeWeaponFierceAttack
	stream->ReadAs(MeleeWeaponFierceAttack);

	// Field : MeleeWeaponFlinchGroundAttack
	stream->ReadAs(MeleeWeaponFlinchGroundAttack);

	// Field : MeleeWeaponFlinchAttack
	stream->ReadAs(MeleeWeaponFlinchAttack);

	// Field : MeleeWeaponFlinchComboAttack
	stream->ReadAs(MeleeWeaponFlinchComboAttack);

	// Field : MeleeWeaponFlinchFierceAttack
	stream->ReadAs(MeleeWeaponFlinchFierceAttack);

	// Field : MeleeWeaponBlockAttack
	stream->ReadAs(MeleeWeaponBlockAttack);

	// Field : MeleeWeaponBlockComboAttack
	stream->ReadAs(MeleeWeaponBlockComboAttack);

	// Field : MeleeWeaponBlockFierceAttack
	stream->ReadAs(MeleeWeaponBlockFierceAttack);

	// Field : CrowdPushFront
	stream->ReadAs(CrowdPushFront);

	// Field : CrowdPushLeft
	stream->ReadAs(CrowdPushLeft);

	// Field : CrowdPushRight
	stream->ReadAs(CrowdPushRight);

	// Field : CrowdAimPushLeft
	stream->ReadAs(CrowdAimPushLeft);

	// Field : CrowdAimPushRight
	stream->ReadAs(CrowdAimPushRight);

	// Field : BeingPushedLeft
	stream->ReadAs(BeingPushedLeft);

	// Field : BeingPushedRight
	stream->ReadAs(BeingPushedRight);

	// Field : StriperPole_01
	stream->ReadString(StriperPole_01);
	StriperPole_01_hash = static_cast<uint32>(glitch::core::hashString(StriperPole_01));

	// Field : StriperPole_02
	stream->ReadString(StriperPole_02);
	StriperPole_02_hash = static_cast<uint32>(glitch::core::hashString(StriperPole_02));

	// Field : StriperPole_03
	stream->ReadString(StriperPole_03);
	StriperPole_03_hash = static_cast<uint32>(glitch::core::hashString(StriperPole_03));

	// Field : StriperDance
	stream->ReadString(StriperDance);
	StriperDance_hash = static_cast<uint32>(glitch::core::hashString(StriperDance));

	// Field : StriperSitting_01
	stream->ReadString(StriperSitting_01);
	StriperSitting_01_hash = static_cast<uint32>(glitch::core::hashString(StriperSitting_01));

	// Field : StriperSitting_02
	stream->ReadString(StriperSitting_02);
	StriperSitting_02_hash = static_cast<uint32>(glitch::core::hashString(StriperSitting_02));

	// Field : StriperSitting_03
	stream->ReadString(StriperSitting_03);
	StriperSitting_03_hash = static_cast<uint32>(glitch::core::hashString(StriperSitting_03));

	// Field : StriperStanding_01
	stream->ReadString(StriperStanding_01);
	StriperStanding_01_hash = static_cast<uint32>(glitch::core::hashString(StriperStanding_01));

	// Field : StriperStanding_02
	stream->ReadString(StriperStanding_02);
	StriperStanding_02_hash = static_cast<uint32>(glitch::core::hashString(StriperStanding_02));

	// Field : StriperStanding_03
	stream->ReadString(StriperStanding_03);
	StriperStanding_03_hash = static_cast<uint32>(glitch::core::hashString(StriperStanding_03));

	// Field : Bouncer_Idle
	stream->ReadAs(Bouncer_Idle);

	// Field : Bouncer_Observing
	stream->ReadAs(Bouncer_Observing);

	// Field : BarSitting_01
	stream->ReadAs(BarSitting_01);

	// Field : BarSitting_01_a
	stream->ReadAs(BarSitting_01_a);

	// Field : BarSitting_01_b
	stream->ReadAs(BarSitting_01_b);

	// Field : BarSitting_02
	stream->ReadAs(BarSitting_02);

	// Field : BarSitting_02_a
	stream->ReadAs(BarSitting_02_a);

	// Field : BarSitting_02_b
	stream->ReadAs(BarSitting_02_b);

	// Field : BarSitting_03
	stream->ReadAs(BarSitting_03);

	// Field : BarSitting_03_a
	stream->ReadAs(BarSitting_03_a);

	// Field : BarSitting_03_b
	stream->ReadAs(BarSitting_03_b);

	// Field : BarSitting_04
	stream->ReadAs(BarSitting_04);

	// Field : BarSitting_04_a
	stream->ReadAs(BarSitting_04_a);

	// Field : BarSitting_04_b
	stream->ReadAs(BarSitting_04_b);

	// Field : WalkLeft
	stream->ReadAs(WalkLeft);

	// Field : WalkRight
	stream->ReadAs(WalkRight);

	// Field : IdleLeft
	stream->ReadAs(IdleLeft);

	// Field : IdleRight
	stream->ReadAs(IdleRight);

	// Field : ReloadLeft
	stream->ReadAs(ReloadLeft);

	// Field : ReloadRight
	stream->ReadAs(ReloadRight);

	// Field : IdleLeftToShoot
	stream->ReadAs(IdleLeftToShoot);

	// Field : IdleRightToShoot
	stream->ReadAs(IdleRightToShoot);

	// Field : LeaveCoverLeft
	stream->ReadAs(LeaveCoverLeft);

	// Field : LeaveCoverRight
	stream->ReadAs(LeaveCoverRight);

	// Field : TakeCoverLeft
	stream->ReadAs(TakeCoverLeft);

	// Field : TakeCoverRight
	stream->ReadAs(TakeCoverRight);

	// Field : ShootLeft
	stream->ReadAs(ShootLeft);

	// Field : ShootRight
	stream->ReadAs(ShootRight);

	// Field : ShootLeftStandUp
	stream->ReadAs(ShootLeftStandUp);

	// Field : ShootRightStandUp
	stream->ReadAs(ShootRightStandUp);

	// Field : ShootUpLeft
	stream->ReadAs(ShootUpLeft);

	// Field : ShootUpRight
	stream->ReadAs(ShootUpRight);

	// Field : IdleLeftToShootUp
	stream->ReadAs(IdleLeftToShootUp);

	// Field : IdleRightToShootUp
	stream->ReadAs(IdleRightToShootUp);

	// Field : WalkLeftStandUp
	stream->ReadAs(WalkLeftStandUp);

	// Field : WalkRightStandUp
	stream->ReadAs(WalkRightStandUp);

	// Field : IdleLeftStandUp
	stream->ReadAs(IdleLeftStandUp);

	// Field : IdleRightStandUp
	stream->ReadAs(IdleRightStandUp);

	// Field : ReloadLeftStandUp
	stream->ReadAs(ReloadLeftStandUp);

	// Field : ReloadRightStandUp
	stream->ReadAs(ReloadRightStandUp);

	// Field : IdleLeftToShootStandUp
	stream->ReadAs(IdleLeftToShootStandUp);

	// Field : IdleRightToShootStandUp
	stream->ReadAs(IdleRightToShootStandUp);

	// Field : LeaveCoverLeftStandUp
	stream->ReadAs(LeaveCoverLeftStandUp);

	// Field : LeaveCoverRightStandUp
	stream->ReadAs(LeaveCoverRightStandUp);

	// Field : TakeCoverLeftStandUp
	stream->ReadAs(TakeCoverLeftStandUp);

	// Field : TakeCoverRightStandUp
	stream->ReadAs(TakeCoverRightStandUp);

	// Field : AngryTalk_menu
	stream->ReadAs(AngryTalk_menu);

	// Field : AngryTalk
	stream->ReadAs(AngryTalk);

	// Field : AngryTalk01
	stream->ReadAs(AngryTalk01);

	// Field : AngryTalk02
	stream->ReadAs(AngryTalk02);

	// Field : AngryListen
	stream->ReadAs(AngryListen);

	// Field : AngryListen01
	stream->ReadAs(AngryListen01);

	// Field : AngryListen02
	stream->ReadAs(AngryListen02);

	// Field : HappyTalk
	stream->ReadAs(HappyTalk);

	// Field : HappyTalk01
	stream->ReadAs(HappyTalk01);

	// Field : HappyTalk02
	stream->ReadAs(HappyTalk02);

	// Field : HappyListen
	stream->ReadAs(HappyListen);

	// Field : HappyListen01
	stream->ReadAs(HappyListen01);

	// Field : HappyListen02
	stream->ReadAs(HappyListen02);

	// Field : StressedTalk
	stream->ReadString(StressedTalk);
	StressedTalk_hash = static_cast<uint32>(glitch::core::hashString(StressedTalk));

	// Field : StressedTalk01
	stream->ReadString(StressedTalk01);
	StressedTalk01_hash = static_cast<uint32>(glitch::core::hashString(StressedTalk01));

	// Field : StressedListen
	stream->ReadString(StressedListen);
	StressedListen_hash = static_cast<uint32>(glitch::core::hashString(StressedListen));

	// Field : StressedListen01
	stream->ReadString(StressedListen01);
	StressedListen01_hash = static_cast<uint32>(glitch::core::hashString(StressedListen01));

	// Field : CoverCrouchThrowGrenadeOverRight
	stream->ReadAs(CoverCrouchThrowGrenadeOverRight);

	// Field : CoverCrouchThrowGrenadeOverLeft
	stream->ReadAs(CoverCrouchThrowGrenadeOverLeft);

	// Field : CoverStandUpThrowGrenadeRight
	stream->ReadAs(CoverStandUpThrowGrenadeRight);

	// Field : CoverStandUpThrowGrenadeLeft
	stream->ReadAs(CoverStandUpThrowGrenadeLeft);

	// Field : CoverCrouchThrowGrenadeRight
	stream->ReadAs(CoverCrouchThrowGrenadeRight);

	// Field : CoverCrouchThrowGrenadeLeft
	stream->ReadAs(CoverCrouchThrowGrenadeLeft);

	// Field : CoverHurdleLeft
	stream->ReadAs(CoverHurdleLeft);

	// Field : HurdleLeftToIdle
	stream->ReadAs(HurdleLeftToIdle);

	// Field : CoverHurdleRight
	stream->ReadAs(CoverHurdleRight);

	// Field : HurdleRightToIdle
	stream->ReadAs(HurdleRightToIdle);

	// Field : ClimbFromHurdleLeftToIdle
	stream->ReadAs(ClimbFromHurdleLeftToIdle);

	// Field : ClimbFromHurdleRightToIdle
	stream->ReadAs(ClimbFromHurdleRightToIdle);

	// Field : LeftToRight
	stream->ReadAs(LeftToRight);

	// Field : RightToLeft
	stream->ReadAs(RightToLeft);

	// Field : LeftToRightStandUp
	stream->ReadAs(LeftToRightStandUp);

	// Field : RightToLeftStandUp
	stream->ReadAs(RightToLeftStandUp);

	// Field : FlinchLeft
	stream->ReadAs(FlinchLeft);

	// Field : FlinchRight
	stream->ReadAs(FlinchRight);

	// Field : FlinchFrontLeft
	stream->ReadAs(FlinchFrontLeft);

	// Field : FlinchFrontRight
	stream->ReadAs(FlinchFrontRight);

	// Field : FlinchBack
	stream->ReadAs(FlinchBack);

	// Field : FallDownFaceGround01
	stream->ReadAs(FallDownFaceGround01);

	// Field : FallDownFaceGround02
	stream->ReadAs(FallDownFaceGround02);

	// Field : FallDownFaceSky01
	stream->ReadAs(FallDownFaceSky01);

	// Field : FallDownFaceSky02
	stream->ReadAs(FallDownFaceSky02);

	// Field : GetUpFaceGround
	stream->ReadAs(GetUpFaceGround);

	// Field : GetUpFaceSky
	stream->ReadAs(GetUpFaceSky);

	// Field : GetUpFaceSkyRagdoll
	stream->ReadAs(GetUpFaceSkyRagdoll);

	// Field : UseComputer
	stream->ReadAs(UseComputer);

	// Field : AvoidCar
	stream->ReadAs(AvoidCar);

	// Field : AvoidCarLeft01
	stream->ReadAs(AvoidCarLeft01);

	// Field : AvoidCarLeft02
	stream->ReadAs(AvoidCarLeft02);

	// Field : AvoidCarLeft03
	stream->ReadAs(AvoidCarLeft03);

	// Field : AvoidCarLeft04
	stream->ReadAs(AvoidCarLeft04);

	// Field : AvoidCarRight01
	stream->ReadAs(AvoidCarRight01);

	// Field : AvoidCarRight02
	stream->ReadAs(AvoidCarRight02);

	// Field : AvoidCarRight03
	stream->ReadAs(AvoidCarRight03);

	// Field : AvoidCarRight04
	stream->ReadAs(AvoidCarRight04);

	// Field : AvoidCarJumpLeft01
	stream->ReadAs(AvoidCarJumpLeft01);

	// Field : AvoidCarJumpLeft02
	stream->ReadAs(AvoidCarJumpLeft02);

	// Field : AvoidCarJumpRight01
	stream->ReadAs(AvoidCarJumpRight01);

	// Field : AvoidCarJumpRight02
	stream->ReadAs(AvoidCarJumpRight02);

	// Field : Choose_FistsWeakStriking
	stream->ReadString(Choose_FistsWeakStriking);
	Choose_FistsWeakStriking_hash = static_cast<uint32>(glitch::core::hashString(Choose_FistsWeakStriking));

	// Field : Choose_FistsStrongStriking
	stream->ReadString(Choose_FistsStrongStriking);
	Choose_FistsStrongStriking_hash = static_cast<uint32>(glitch::core::hashString(Choose_FistsStrongStriking));

	// Field : Choose_MeleeWeakCombo
	stream->ReadAs(Choose_MeleeWeakCombo);

	// Field : Choose_MeleeWeakStriking
	stream->ReadString(Choose_MeleeWeakStriking);
	Choose_MeleeWeakStriking_hash = static_cast<uint32>(glitch::core::hashString(Choose_MeleeWeakStriking));

	// Field : Choose_MeleeWeakReturn
	stream->ReadAs(Choose_MeleeWeakReturn);

	// Field : Choose_MeleeStrongStriking
	stream->ReadString(Choose_MeleeStrongStriking);
	Choose_MeleeStrongStriking_hash = static_cast<uint32>(glitch::core::hashString(Choose_MeleeStrongStriking));

	// Field : Choose_MeleeIdle
	stream->ReadAs(Choose_MeleeIdle);

	// Field : Choose_Run
	stream->ReadAs(Choose_Run);

	// Field : Choose_Reload
	stream->ReadAs(Choose_Reload);

	// Field : Choose_Walk
	stream->ReadAs(Choose_Walk);

	// Field : Choose_1handed
	stream->ReadAs(Choose_1handed);

	// Field : Choose_1handed_02
	stream->ReadAs(Choose_1handed_02);

	// Field : Choose_2handed
	stream->ReadAs(Choose_2handed);

	// Field : Choose_2handed_02
	stream->ReadAs(Choose_2handed_02);

	// Field : Choose_dual_02
	stream->ReadAs(Choose_dual_02);

	// Field : Choose_head
	stream->ReadAs(Choose_head);

	// Field : Choose_head_02
	stream->ReadAs(Choose_head_02);

	// Field : Choose_leg
	stream->ReadAs(Choose_leg);

	// Field : Choose_leg_02
	stream->ReadAs(Choose_leg_02);

	// Field : Choose_torso
	stream->ReadAs(Choose_torso);

	// Field : Choose_torso_02
	stream->ReadAs(Choose_torso_02);

	// Field : Choose_polishes_2handed
	stream->ReadAs(Choose_polishes_2handed);

	// Field : Choose_aim_Sniper
	stream->ReadAs(Choose_aim_Sniper);

	// Field : Choose_flexing
	stream->ReadAs(Choose_flexing);

	// Field : Choose_flexing_armor
	stream->ReadAs(Choose_flexing_armor);

	// Field : Choose_juggling_grenade
	stream->ReadAs(Choose_juggling_grenade);

	// Field : Choose_pickpocket
	stream->ReadAs(Choose_pickpocket);

	// Field : Choose_running_breath
	stream->ReadAs(Choose_running_breath);

	// Field : Choose_standing_holding_grenade
	stream->ReadAs(Choose_standing_holding_grenade);

	// Field : Choose_takes_aim_1handed
	stream->ReadAs(Choose_takes_aim_1handed);

	// Field : Choose_takes_aim_2handed
	stream->ReadAs(Choose_takes_aim_2handed);

	// Field : Choose_throw_grenade
	stream->ReadAs(Choose_throw_grenade);

	// Field : Choose_cover_crouch
	stream->ReadAs(Choose_cover_crouch);

	// Field : Choose_1handedRecoil
	stream->ReadAs(Choose_1handedRecoil);

	// Field : Choose_1handedReload
	stream->ReadAs(Choose_1handedReload);

	// Field : Choose_1handedRecoilRevolver
	stream->ReadAs(Choose_1handedRecoilRevolver);

	// Field : Choose_1handedReloadRevolver
	stream->ReadAs(Choose_1handedReloadRevolver);

	// Field : Choose_1handedRecoilSMG
	stream->ReadAs(Choose_1handedRecoilSMG);

	// Field : Choose_1handedReloadSMG
	stream->ReadAs(Choose_1handedReloadSMG);

	// Field : Choose_2handedRecoil
	stream->ReadAs(Choose_2handedRecoil);

	// Field : Choose_2handedReload
	stream->ReadAs(Choose_2handedReload);

	// Field : Choose_2handedRecoilShotgun
	stream->ReadAs(Choose_2handedRecoilShotgun);

	// Field : Choose_2handedReloadShotgun
	stream->ReadAs(Choose_2handedReloadShotgun);

	// Field : Choose_sprint
	stream->ReadAs(Choose_sprint);

	// Field : Choose_freerun
	stream->ReadAs(Choose_freerun);

	// Field : CheeringIdle01
	stream->ReadAs(CheeringIdle01);

	// Field : CheeringIdle02
	stream->ReadAs(CheeringIdle02);

	// Field : CheeringWalk01
	stream->ReadAs(CheeringWalk01);

	// Field : CheeringWalk02
	stream->ReadAs(CheeringWalk02);

	// Field : PhoneWalk
	stream->ReadAs(PhoneWalk);

	// Field : Walk01
	stream->ReadAs(Walk01);

	// Field : Walk02
	stream->ReadAs(Walk02);

	// Field : AngryWalk01
	stream->ReadAs(AngryWalk01);

	// Field : HappyWalk01
	stream->ReadAs(HappyWalk01);

	// Field : HappyWalk02
	stream->ReadAs(HappyWalk02);

	// Field : FlipBird
	stream->ReadAs(FlipBird);

	// Field : GiveObject
	stream->ReadAs(GiveObject);

	// Field : WavingArms01
	stream->ReadAs(WavingArms01);

	// Field : WavingArms02
	stream->ReadAs(WavingArms02);

	// Field : Chuckle01
	stream->ReadAs(Chuckle01);

	// Field : Chuckle02
	stream->ReadAs(Chuckle02);

	// Field : JogIdle
	stream->ReadAs(JogIdle);

	// Field : JogRun
	stream->ReadAs(JogRun);

	// Field : ShakeFist
	stream->ReadAs(ShakeFist);

	// Field : SmokingIdle
	stream->ReadAs(SmokingIdle);

	// Field : Cine_turn90Left
	stream->ReadAs(Cine_turn90Left);

	// Field : Cine_turn90Right
	stream->ReadAs(Cine_turn90Right);

	// Field : Cine_turn180Left
	stream->ReadAs(Cine_turn180Left);

	// Field : Cine_turn180Right
	stream->ReadAs(Cine_turn180Right);

	// Field : BluetoothCompose
	stream->ReadAs(BluetoothCompose_f);

	// Field : BluetoothAnswer
	stream->ReadAs(BluetoothAnswer);

	// Field : BluetoothHangUp
	stream->ReadAs(BluetoothHangUp);

	// Field : RacerChickStart
	stream->ReadAs(RacerChickStart);

	// Field : SitAnchored_front_01
	stream->ReadAs(SitAnchored_front_01);

	// Field : SitAnchored_left_01
	stream->ReadAs(SitAnchored_left_01);

	// Field : SitAnchored_right_01
	stream->ReadAs(SitAnchored_right_01);

	// Field : SitAnchored_front_02
	stream->ReadAs(SitAnchored_front_02);

	// Field : SitAnchored_left_02
	stream->ReadAs(SitAnchored_left_02);

	// Field : SitAnchored_right_02
	stream->ReadAs(SitAnchored_right_02);

	// Field : CasinoDealerIdle
	stream->ReadAs(CasinoDealerIdle);

	// Field : CasinoDealerGiveCards
	stream->ReadAs(CasinoDealerGiveCards);

	// Field : CasinoGamblerIdle
	stream->ReadAs(CasinoGamblerIdle);

	// Field : CasinoGamblerLose
	stream->ReadAs(CasinoGamblerLose);

	// Field : CasinoGamblerWin
	stream->ReadAs(CasinoGamblerWin);

	// Field : CasinoGamblerCheck
	stream->ReadAs(CasinoGamblerCheck);

	// Field : CasinoSlotIdle
	stream->ReadAs(CasinoSlotIdle);

	// Field : CasinoSlotIdle2
	stream->ReadAs(CasinoSlotIdle2);

	// Field : casino_dealer_give_cards
	stream->ReadAs(casino_dealer_give_cards);

	// Field : deviless_finger_call
	stream->ReadAs(deviless_finger_call);

	// Field : deviless_finger_order
	stream->ReadAs(deviless_finger_order);

	// Field : look_around
	stream->ReadAs(look_around);

	// Field : ZzGameLastAnimation
	stream->ReadString(ZzGameLastAnimation);
	ZzGameLastAnimation_hash = static_cast<uint32>(glitch::core::hashString(ZzGameLastAnimation));

}

void animation_sets_struct::Unload()
{
	if(!IsLoaded())
		return;
	base_struct::Unload();

	// Field : AaGameFirstAnimation
	if (AaGameFirstAnimation && AaGameFirstAnimation[0] != '\0') gll_delete[] AaGameFirstAnimation;
	AaGameFirstAnimation = 0;

	// Field : DanceStrip
	if (DanceStrip && DanceStrip[0] != '\0') gll_delete[] DanceStrip;
	DanceStrip = 0;

	// Field : WalkToWalkStrafeTurn
	if (WalkToWalkStrafeTurn && WalkToWalkStrafeTurn[0] != '\0') gll_delete[] WalkToWalkStrafeTurn;
	WalkToWalkStrafeTurn = 0;

	// Field : RunToRunStrafeTurn
	if (RunToRunStrafeTurn && RunToRunStrafeTurn[0] != '\0') gll_delete[] RunToRunStrafeTurn;
	RunToRunStrafeTurn = 0;

	// Field : MeleeWalkStrafeBack
	if (MeleeWalkStrafeBack && MeleeWalkStrafeBack[0] != '\0') gll_delete[] MeleeWalkStrafeBack;
	MeleeWalkStrafeBack = 0;

	// Field : MeleeWalkStrafeFront
	if (MeleeWalkStrafeFront && MeleeWalkStrafeFront[0] != '\0') gll_delete[] MeleeWalkStrafeFront;
	MeleeWalkStrafeFront = 0;

	// Field : MeleeWalkStrafeLeft
	if (MeleeWalkStrafeLeft && MeleeWalkStrafeLeft[0] != '\0') gll_delete[] MeleeWalkStrafeLeft;
	MeleeWalkStrafeLeft = 0;

	// Field : MeleeWalkStrafeRight
	if (MeleeWalkStrafeRight && MeleeWalkStrafeRight[0] != '\0') gll_delete[] MeleeWalkStrafeRight;
	MeleeWalkStrafeRight = 0;

	// Field : StriperPole_01
	if (StriperPole_01 && StriperPole_01[0] != '\0') gll_delete[] StriperPole_01;
	StriperPole_01 = 0;

	// Field : StriperPole_02
	if (StriperPole_02 && StriperPole_02[0] != '\0') gll_delete[] StriperPole_02;
	StriperPole_02 = 0;

	// Field : StriperPole_03
	if (StriperPole_03 && StriperPole_03[0] != '\0') gll_delete[] StriperPole_03;
	StriperPole_03 = 0;

	// Field : StriperDance
	if (StriperDance && StriperDance[0] != '\0') gll_delete[] StriperDance;
	StriperDance = 0;

	// Field : StriperSitting_01
	if (StriperSitting_01 && StriperSitting_01[0] != '\0') gll_delete[] StriperSitting_01;
	StriperSitting_01 = 0;

	// Field : StriperSitting_02
	if (StriperSitting_02 && StriperSitting_02[0] != '\0') gll_delete[] StriperSitting_02;
	StriperSitting_02 = 0;

	// Field : StriperSitting_03
	if (StriperSitting_03 && StriperSitting_03[0] != '\0') gll_delete[] StriperSitting_03;
	StriperSitting_03 = 0;

	// Field : StriperStanding_01
	if (StriperStanding_01 && StriperStanding_01[0] != '\0') gll_delete[] StriperStanding_01;
	StriperStanding_01 = 0;

	// Field : StriperStanding_02
	if (StriperStanding_02 && StriperStanding_02[0] != '\0') gll_delete[] StriperStanding_02;
	StriperStanding_02 = 0;

	// Field : StriperStanding_03
	if (StriperStanding_03 && StriperStanding_03[0] != '\0') gll_delete[] StriperStanding_03;
	StriperStanding_03 = 0;

	// Field : StressedTalk
	if (StressedTalk && StressedTalk[0] != '\0') gll_delete[] StressedTalk;
	StressedTalk = 0;

	// Field : StressedTalk01
	if (StressedTalk01 && StressedTalk01[0] != '\0') gll_delete[] StressedTalk01;
	StressedTalk01 = 0;

	// Field : StressedListen
	if (StressedListen && StressedListen[0] != '\0') gll_delete[] StressedListen;
	StressedListen = 0;

	// Field : StressedListen01
	if (StressedListen01 && StressedListen01[0] != '\0') gll_delete[] StressedListen01;
	StressedListen01 = 0;

	// Field : Choose_FistsWeakStriking
	if (Choose_FistsWeakStriking && Choose_FistsWeakStriking[0] != '\0') gll_delete[] Choose_FistsWeakStriking;
	Choose_FistsWeakStriking = 0;

	// Field : Choose_FistsStrongStriking
	if (Choose_FistsStrongStriking && Choose_FistsStrongStriking[0] != '\0') gll_delete[] Choose_FistsStrongStriking;
	Choose_FistsStrongStriking = 0;

	// Field : Choose_MeleeWeakStriking
	if (Choose_MeleeWeakStriking && Choose_MeleeWeakStriking[0] != '\0') gll_delete[] Choose_MeleeWeakStriking;
	Choose_MeleeWeakStriking = 0;

	// Field : Choose_MeleeStrongStriking
	if (Choose_MeleeStrongStriking && Choose_MeleeStrongStriking[0] != '\0') gll_delete[] Choose_MeleeStrongStriking;
	Choose_MeleeStrongStriking = 0;

	// Field : ZzGameLastAnimation
	if (ZzGameLastAnimation && ZzGameLastAnimation[0] != '\0') gll_delete[] ZzGameLastAnimation;
	ZzGameLastAnimation = 0;

	// ALL
	Init();
}

}; // namespace structures
namespace arrays {
// Array : animation_sets
size_t animation_sets::size = 0;
animation_sets::struct_type* animation_sets::entries = 0;

void animation_sets::Load(StreamBase* stream)
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

void animation_sets::Unload()
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

int *sub_B0E610(unsigned int a1);
// ============================================================================
// Schema Descriptor Registration Helper (0xb0e860) in libGangstar4.so
// ============================================================================
int sub_B0E860(int a1)
{
  int v1; // esi

  v1 = (int)(uintptr_t)(sub_B0E610(a1));
  sub_AFC3F0(v1, "AaGameFirstAnimation");
  sub_AFC3F0(v1, "Aim");
  sub_AFC3F0(v1, "Shoot");
  sub_AFC3F0(v1, "Throw");
  sub_AFC3F0(v1, "Melee");
  sub_AFC3F0(v1, "Flinch");
  sub_AFC3F0(v1, "FallDown");
  sub_AFC3F0(v1, "GetUp");
  sub_AFC3F0(v1, "TakeCover");
  sub_AFC3F0(v1, "LeaveCover");
  sub_AFC3F0(v1, "Climb");
  sub_AFC3F0(v1, "Die");
  sub_AFC3F0(v1, "VehicleDriverAim");
  sub_AFC3F0(v1, "VehicleRightPassengerAim");
  sub_AFC3F0(v1, "VehicleDriverRecoil");
  sub_AFC3F0(v1, "VehicleDriverLowerWeapon");
  sub_AFC3F0(v1, "VehicleRightPassengerLowerWeapon");
  sub_AFC3F0(v1, "VehicleRightPassengerRecoil");
  sub_AFC3F0(v1, "VehicleMotoRecoil");
  sub_AFC3F0(v1, "VehicleJetpackRecoil");
  sub_AFC3F0(v1, "VehicleTurnLeft");
  sub_AFC3F0(v1, "VehicleTurnRight");
  sub_AFC3F0(v1, "VehicleReverse");
  sub_AFC3F0(v1, "VehicleLeanBack");
  sub_AFC3F0(v1, "VehicleLeanForward");
  sub_AFC3F0(v1, "VehicleIdle");
  sub_AFC3F0(v1, "VehicleDriver");
  sub_AFC3F0(v1, "VehiclePassenger");
  sub_AFC3F0(v1, "VehicleMovingIdle");
  sub_AFC3F0(v1, "VehicleFix");
  sub_AFC3F0(v1, "VehicleEjectLeft");
  sub_AFC3F0(v1, "VehicleEjectRight");
  sub_AFC3F0(v1, "VehicleEnterLeft");
  sub_AFC3F0(v1, "VehicleEnterRight");
  sub_AFC3F0(v1, "VehicleExitLeft");
  sub_AFC3F0(v1, "VehicleExitRight");
  sub_AFC3F0(v1, "VehicleExitLeftRoof");
  sub_AFC3F0(v1, "VehicleExitRightRoof");
  sub_AFC3F0(v1, "VehicleEnter");
  sub_AFC3F0(v1, "VehicleExit");
  sub_AFC3F0(v1, "VehicleEject");
  sub_AFC3F0(v1, "VehicleUseDoor");
  sub_AFC3F0(v1, "VehicleThrowDriverOut");
  sub_AFC3F0(v1, "VehicleCloseDoorFromInside");
  sub_AFC3F0(v1, "VehicleThrowDriverOutLeft");
  sub_AFC3F0(v1, "VehicleDriverThrownOutLeft");
  sub_AFC3F0(v1, "VehicleThrowDriverOutRight");
  sub_AFC3F0(v1, "VehicleDriverThrownOutRight");
  sub_AFC3F0(v1, "VehiclePushOutLeft");
  sub_AFC3F0(v1, "VehiclePushedOutLeft");
  sub_AFC3F0(v1, "VehiclePushOutRight");
  sub_AFC3F0(v1, "VehiclePushedOutRight");
  sub_AFC3F0(v1, "VehicleCloseDoorFromInsideLeft");
  sub_AFC3F0(v1, "VehicleCloseDoorFromInsideRight");
  sub_AFC3F0(v1, "VehicleOpenDoorFromInsideLeft");
  sub_AFC3F0(v1, "VehicleOpenDoorFromInsideRight");
  sub_AFC3F0(v1, "BikeHarleyStandIdle");
  sub_AFC3F0(v1, "Burnout");
  sub_AFC3F0(v1, "AimSub");
  sub_AFC3F0(v1, "AimIdle");
  sub_AFC3F0(v1, "AimRun");
  sub_AFC3F0(v1, "AimWalk");
  sub_AFC3F0(v1, "AimBackRun");
  sub_AFC3F0(v1, "AimBackWalk");
  sub_AFC3F0(v1, "KneelingBegin");
  sub_AFC3F0(v1, "KneelingEnd");
  sub_AFC3F0(v1, "ShootIdle");
  sub_AFC3F0(v1, "ShootRun");
  sub_AFC3F0(v1, "ShootWalk");
  sub_AFC3F0(v1, "ShootBackRun");
  sub_AFC3F0(v1, "ShootBackWalk");
  sub_AFC3F0(v1, "Bumped");
  sub_AFC3F0(v1, "BumpedFront");
  sub_AFC3F0(v1, "BumpedBack");
  sub_AFC3F0(v1, "BumpedLeft");
  sub_AFC3F0(v1, "BumpedRight");
  sub_AFC3F0(v1, "Backrun");
  sub_AFC3F0(v1, "Backwalk_Sub");
  sub_AFC3F0(v1, "Backrun_Sub");
  sub_AFC3F0(v1, "Reload");
  sub_AFC3F0(v1, "Prostrate");
  sub_AFC3F0(v1, "IdleToProne");
  sub_AFC3F0(v1, "ProneToIdle");
  sub_AFC3F0(v1, "ProneIdle01");
  sub_AFC3F0(v1, "ProneIdle02");
  sub_AFC3F0(v1, "ProneFlinch01");
  sub_AFC3F0(v1, "ProneFlinch02");
  sub_AFC3F0(v1, "ProneDeathFaceGround");
  sub_AFC3F0(v1, "ProneDeathFaceSky");
  sub_AFC3F0(v1, "PhoneTalkListen");
  sub_AFC3F0(v1, "PhoneTalk");
  sub_AFC3F0(v1, "PhoneTalk01");
  sub_AFC3F0(v1, "PhoneTalk02");
  sub_AFC3F0(v1, "PhoneTalk03");
  sub_AFC3F0(v1, "PhoneAnswer");
  sub_AFC3F0(v1, "PhoneHangup");
  sub_AFC3F0(v1, "BeggingSit");
  sub_AFC3F0(v1, "BeggingSitReceive");
  sub_AFC3F0(v1, "BeggingStand");
  sub_AFC3F0(v1, "BeggingStandReceive");
  sub_AFC3F0(v1, "Kneeling");
  sub_AFC3F0(v1, "CoupleSit");
  sub_AFC3F0(v1, "CoupleSit01");
  sub_AFC3F0(v1, "DeadIdle");
  sub_AFC3F0(v1, "DeadIdleWater");
  sub_AFC3F0(v1, "Outofbreath");
  sub_AFC3F0(v1, "Swim");
  sub_AFC3F0(v1, "SwimIdle");
  sub_AFC3F0(v1, "SwimSprint");
  sub_AFC3F0(v1, "Sprint");
  sub_AFC3F0(v1, "JumpWalk");
  sub_AFC3F0(v1, "JumpRun");
  sub_AFC3F0(v1, "JumpRunLand");
  sub_AFC3F0(v1, "JumpRunGrabPart1");
  sub_AFC3F0(v1, "JumpRunGrabPart2");
  sub_AFC3F0(v1, "JumpRunGrabClimb");
  sub_AFC3F0(v1, "Jogging");
  sub_AFC3F0(v1, "JoggingIdle");
  sub_AFC3F0(v1, "Fall");
  sub_AFC3F0(v1, "Land01");
  sub_AFC3F0(v1, "Land02");
  sub_AFC3F0(v1, "Land03");
  sub_AFC3F0(v1, "LandHit");
  sub_AFC3F0(v1, "CarHitBack01");
  sub_AFC3F0(v1, "CarHitBack02");
  sub_AFC3F0(v1, "CarHitFront");
  sub_AFC3F0(v1, "CarHitLeft");
  sub_AFC3F0(v1, "CarHitRight");
  sub_AFC3F0(v1, "CarHitBackIdle01");
  sub_AFC3F0(v1, "CarHitBackIdle02");
  sub_AFC3F0(v1, "CarHitFrontIdle");
  sub_AFC3F0(v1, "CarHitLeftIdle");
  sub_AFC3F0(v1, "CarHitRightIdle");
  sub_AFC3F0(v1, "CarHitBackGetUp01");
  sub_AFC3F0(v1, "CarHitBackGetUp02");
  sub_AFC3F0(v1, "CarHitFrontGetUp");
  sub_AFC3F0(v1, "CarHitLeftGetUp");
  sub_AFC3F0(v1, "CarHitRightGetUp");
  sub_AFC3F0(v1, "RunPanic");
  sub_AFC3F0(v1, "RunFall");
  sub_AFC3F0(v1, "RollDown");
  sub_AFC3F0(v1, "ExtinguishFire");
  sub_AFC3F0(v1, "WalkInDaShit");
  sub_AFC3F0(v1, "BikeMountLeft");
  sub_AFC3F0(v1, "BikeMountRight");
  sub_AFC3F0(v1, "BikeStandIdle");
  sub_AFC3F0(v1, "VehicleCloseDoorLeft");
  sub_AFC3F0(v1, "VehicleCloseDoorRight");
  sub_AFC3F0(v1, "VehicleOpenDoorLeft");
  sub_AFC3F0(v1, "VehicleOpenDoorRight");
  sub_AFC3F0(v1, "DownIdle");
  sub_AFC3F0(v1, "DownKicked");
  sub_AFC3F0(v1, "DownToIdle");
  sub_AFC3F0(v1, "IdleToDead01");
  sub_AFC3F0(v1, "IdleToDead02");
  sub_AFC3F0(v1, "Backwalk");
  sub_AFC3F0(v1, "Idle");
  sub_AFC3F0(v1, "Idle_Sub");
  sub_AFC3F0(v1, "Idle2");
  sub_AFC3F0(v1, "Idle2_Sub");
  sub_AFC3F0(v1, (char *)&off_1B36EC5);
  sub_AFC3F0(v1, "SprintToIdle");
  sub_AFC3F0(v1, "Walk");
  sub_AFC3F0(v1, "Walk_Sub");
  sub_AFC3F0(v1, "ForceDoor");
  sub_AFC3F0(v1, "Turn");
  sub_AFC3F0(v1, "Taunt");
  sub_AFC3F0(v1, "TauntIdle");
  sub_AFC3F0(v1, "Hurdle");
  sub_AFC3F0(v1, "HurdleIdle");
  sub_AFC3F0(v1, "HurdleSprint");
  sub_AFC3F0(v1, "Hurdle2m");
  sub_AFC3F0(v1, "Hurdle2mLand");
  sub_AFC3F0(v1, "ClimbWater");
  sub_AFC3F0(v1, "Climb30cmL");
  sub_AFC3F0(v1, "Climb30cmR");
  sub_AFC3F0(v1, "Climb100cmPart1L");
  sub_AFC3F0(v1, "Climb100cmPart2L");
  sub_AFC3F0(v1, "Climb100cmPart1R");
  sub_AFC3F0(v1, "Climb100cmPart2R");
  sub_AFC3F0(v1, "Climb200cmPart1");
  sub_AFC3F0(v1, "Climb200cmPart2");
  sub_AFC3F0(v1, "Climb200cmPart3");
  sub_AFC3F0(v1, "FreefallIdle");
  sub_AFC3F0(v1, "ParachuteOpen");
  sub_AFC3F0(v1, "ParachuteIdle");
  sub_AFC3F0(v1, "ParachuteIdleForward");
  sub_AFC3F0(v1, "ParachuteIdleBackward");
  sub_AFC3F0(v1, "ParachuteLanding");
  sub_AFC3F0(v1, "ParachuteTurnLeft");
  sub_AFC3F0(v1, "ParachuteTurnRight");
  sub_AFC3F0(v1, "JetpackLanding");
  sub_AFC3F0(v1, "JetpackTakeOff");
  sub_AFC3F0(v1, "HandsUp");
  sub_AFC3F0(v1, "Talk");
  sub_AFC3F0(v1, "Talk01");
  sub_AFC3F0(v1, "Talk02");
  sub_AFC3F0(v1, "Listen");
  sub_AFC3F0(v1, "Listen01");
  sub_AFC3F0(v1, "Listen02");
  sub_AFC3F0(v1, "Run_Sub");
  sub_AFC3F0(v1, "Sneeze");
  sub_AFC3F0(v1, "WalkPutHairInPlace");
  sub_AFC3F0(v1, "WalkDrunkMale");
  sub_AFC3F0(v1, "WalkDrunkTripMale");
  sub_AFC3F0(v1, "Pose");
  sub_AFC3F0(v1, "GunFlinch");
  sub_AFC3F0(v1, "WaterFlinch");
  sub_AFC3F0(v1, "IdleSit");
  sub_AFC3F0(v1, "WaveHand");
  sub_AFC3F0(v1, "CheckHead");
  sub_AFC3F0(v1, "CheckTorso");
  sub_AFC3F0(v1, "CheckLegs");
  sub_AFC3F0(v1, "MakeOutMale");
  sub_AFC3F0(v1, "MakeOutFemale");
  sub_AFC3F0(v1, "PlantBomb");
  sub_AFC3F0(v1, "MaleSit");
  sub_AFC3F0(v1, "WeaponDeathHeavy01");
  sub_AFC3F0(v1, "WeaponDeathHeavy02");
  sub_AFC3F0(v1, "WeaponDeathHeavy03");
  sub_AFC3F0(v1, "WeaponDeathLight01");
  sub_AFC3F0(v1, "WeaponDeathLight02");
  sub_AFC3F0(v1, "WeaponDeathLight03");
  sub_AFC3F0(v1, "WeaponDeathSniper01");
  sub_AFC3F0(v1, "WeaponDeathSniper02");
  sub_AFC3F0(v1, "WeaponDeathSniper03");
  sub_AFC3F0(v1, "WeaponDeathExplosive01");
  sub_AFC3F0(v1, "WeaponDeathExplosive02");
  sub_AFC3F0(v1, "WeaponDeathExplosive03");
  sub_AFC3F0(v1, "WeaponDeathShotgunBack");
  sub_AFC3F0(v1, "DanceCapoeira");
  sub_AFC3F0(v1, "DanceBreakdance");
  sub_AFC3F0(v1, "DanceMichaeljackson");
  sub_AFC3F0(v1, "DanceRobot");
  sub_AFC3F0(v1, "DanceStrip");
  sub_AFC3F0(v1, "DanceBootyshake");
  sub_AFC3F0(v1, "Dance01");
  sub_AFC3F0(v1, "Dance02");
  sub_AFC3F0(v1, "Dance03");
  sub_AFC3F0(v1, "Dance04");
  sub_AFC3F0(v1, "HandgunFront");
  sub_AFC3F0(v1, "GrenadeFront");
  sub_AFC3F0(v1, "IdleToWalk");
  sub_AFC3F0(v1, "RunToIdleR");
  sub_AFC3F0(v1, "RunToIdleL");
  sub_AFC3F0(v1, "SprintToIdleR");
  sub_AFC3F0(v1, "SprintToIdleL");
  sub_AFC3F0(v1, "AimRunToIdleR");
  sub_AFC3F0(v1, "AimRunToIdleL");
  sub_AFC3F0(v1, "IdleToIdleTurn");
  sub_AFC3F0(v1, "IdleToRunTurn");
  sub_AFC3F0(v1, "IdleToWalkTurn");
  sub_AFC3F0(v1, "WalkToWalkTurn");
  sub_AFC3F0(v1, "RunToRunTurn");
  sub_AFC3F0(v1, "IdleToIdleStrafeTurn");
  sub_AFC3F0(v1, "IdleToRunStrafeTurn");
  sub_AFC3F0(v1, "IdleToWalkStrafeTurn");
  sub_AFC3F0(v1, "WalkToWalkStrafeTurn");
  sub_AFC3F0(v1, "RunToRunStrafeTurn");
  sub_AFC3F0(v1, "RaiseWeaponIdle");
  sub_AFC3F0(v1, "RaiseWeaponWalk");
  sub_AFC3F0(v1, "RaiseWeaponRun");
  sub_AFC3F0(v1, "MeleeSupermanPunchRun");
  sub_AFC3F0(v1, "MeleeKneeKickRun");
  sub_AFC3F0(v1, "MeleeAliveFaceGroundToGetUp");
  sub_AFC3F0(v1, "MeleeAlivefaceSkyToGetup");
  sub_AFC3F0(v1, "MeleeAttackFlyinGroundKick");
  sub_AFC3F0(v1, "MeleeAttackHookDownLeft");
  sub_AFC3F0(v1, "MeleeAttackHookDownRight");
  sub_AFC3F0(v1, "MeleeAttackHookUpLeft");
  sub_AFC3F0(v1, "MeleeAttackHookUpRight");
  sub_AFC3F0(v1, "MeleeAttackJabDownLeft");
  sub_AFC3F0(v1, "MeleeAttackJabDownRight");
  sub_AFC3F0(v1, "MeleeAttackJabUpLeft");
  sub_AFC3F0(v1, "MeleeAttackJabUpRight");
  sub_AFC3F0(v1, "MeleeAttackKickLeft");
  sub_AFC3F0(v1, "MeleeAttackKickRight");
  sub_AFC3F0(v1, "MeleeAttackKneeKickLeft");
  sub_AFC3F0(v1, "MeleeAttackKneeKickRight");
  sub_AFC3F0(v1, "MeleeAttackRoundHookPunch");
  sub_AFC3F0(v1, "MeleeAttackRoundKickLeft");
  sub_AFC3F0(v1, "MeleeAttackSideKickRight");
  sub_AFC3F0(v1, "MeleeAttackSupermanPunch");
  sub_AFC3F0(v1, "MeleeAttackUppercutDown");
  sub_AFC3F0(v1, "MeleeAttackUppercutUp");
  sub_AFC3F0(v1, "MeleeAttackSupermanjab");
  sub_AFC3F0(v1, "MeleeDeathFaceGroundFlinchBack");
  sub_AFC3F0(v1, "MeleeDeathFaceGroundFlinchFront");
  sub_AFC3F0(v1, "MeleeDeathFaceGroundFlinchLeft");
  sub_AFC3F0(v1, "MeleeDeathFaceGroundFlinchRight");
  sub_AFC3F0(v1, "MeleeDeathFaceGroundIdle");
  sub_AFC3F0(v1, "MeleeDeathFaceSkyFlinchBack");
  sub_AFC3F0(v1, "MeleeDeathFaceSkyFlinchFront");
  sub_AFC3F0(v1, "MeleeDeathFaceSkyFlinchLeft");
  sub_AFC3F0(v1, "MeleeDeathFaceSkyFlinchRight");
  sub_AFC3F0(v1, "MeleeDeathFaceSkyIdle01");
  sub_AFC3F0(v1, "MeleeDeathFaceSkyIdle02");
  sub_AFC3F0(v1, "MeleeFlinchDownToDeathFaceGround01");
  sub_AFC3F0(v1, "MeleeFlinchDownToDeathFaceGround02");
  sub_AFC3F0(v1, "MeleeFlinchDownToDeathFaceSky01");
  sub_AFC3F0(v1, "MeleeFlinchDownToDeathFaceSky02");
  sub_AFC3F0(v1, "MeleeFlinchFlyinGroundKick");
  sub_AFC3F0(v1, "MeleeFlinchHookDownLeft");
  sub_AFC3F0(v1, "MeleeFlinchHookDownRight");
  sub_AFC3F0(v1, "MeleeFlinchHookUpLeft");
  sub_AFC3F0(v1, "MeleeFlinchHookUpRight");
  sub_AFC3F0(v1, "MeleeFlinchJabDownLeft");
  sub_AFC3F0(v1, "MeleeFlinchJabDownRight");
  sub_AFC3F0(v1, "MeleeFlinchJabUpLeft");
  sub_AFC3F0(v1, "MeleeFlinchJabUpRight");
  sub_AFC3F0(v1, "MeleeFlinchKickLeft");
  sub_AFC3F0(v1, "MeleeFlinchKickRight");
  sub_AFC3F0(v1, "MeleeFlinchKneeKickLeft");
  sub_AFC3F0(v1, "MeleeFlinchKneeKickRight");
  sub_AFC3F0(v1, "MeleeFlinchRoundHookPunch");
  sub_AFC3F0(v1, "MeleeFlinchRoundKickLeft");
  sub_AFC3F0(v1, "MeleeFlinchSideKickRight");
  sub_AFC3F0(v1, "MeleeFlinchSupermanPunch");
  sub_AFC3F0(v1, "MeleeFlinchUppercutDown");
  sub_AFC3F0(v1, "MeleeFlinchUppercutUp");
  sub_AFC3F0(v1, "MeleeFlinchSupermanJab");
  sub_AFC3F0(v1, "MeleeFlinchUpToDeathFaceground");
  sub_AFC3F0(v1, "MeleeFlinchUpToDeathFacesky");
  sub_AFC3F0(v1, "MeleeBlockUpRight");
  sub_AFC3F0(v1, "MeleeBlockUpLeft");
  sub_AFC3F0(v1, "MeleeBlockDownRight");
  sub_AFC3F0(v1, "MeleeBlockDownLeft");
  sub_AFC3F0(v1, "MeleeBlockLegKick");
  sub_AFC3F0(v1, "MeleeGroundAttackGroundPounch");
  sub_AFC3F0(v1, "MeleeGroundAttackKickStumpHead");
  sub_AFC3F0(v1, "MeleeGroundAttackSoccerKick");
  sub_AFC3F0(v1, "MeleeIdle");
  sub_AFC3F0(v1, "MeleeIdleToStunt");
  sub_AFC3F0(v1, "MeleeIdleToStuntHigh");
  sub_AFC3F0(v1, "MeleeStuntHighIdle");
  sub_AFC3F0(v1, "MeleeStuntHighToMeleeIdle");
  sub_AFC3F0(v1, "MeleeStuntIdle");
  sub_AFC3F0(v1, "MeleeStuntToDeathFaceGround");
  sub_AFC3F0(v1, "MeleeStuntToDeathFaceSky");
  sub_AFC3F0(v1, "MeleeStuntToMeleeIdle");
  sub_AFC3F0(v1, "MeleeStuntWalk");
  sub_AFC3F0(v1, "MeleeWalkStrafeBack");
  sub_AFC3F0(v1, "MeleeWalkStrafeFront");
  sub_AFC3F0(v1, "MeleeWalkStrafeLeft");
  sub_AFC3F0(v1, "MeleeWalkStrafeRight");
  sub_AFC3F0(v1, "MeleeWeaponGroundAttack");
  sub_AFC3F0(v1, "MeleeWeaponAttack");
  sub_AFC3F0(v1, "MeleeWeaponAttackReturn");
  sub_AFC3F0(v1, "MeleeWeaponComboAttack");
  sub_AFC3F0(v1, "MeleeWeaponFierceAttack");
  sub_AFC3F0(v1, "MeleeWeaponFlinchGroundAttack");
  sub_AFC3F0(v1, "MeleeWeaponFlinchAttack");
  sub_AFC3F0(v1, "MeleeWeaponFlinchComboAttack");
  sub_AFC3F0(v1, "MeleeWeaponFlinchFierceAttack");
  sub_AFC3F0(v1, "MeleeWeaponBlockAttack");
  sub_AFC3F0(v1, "MeleeWeaponBlockComboAttack");
  sub_AFC3F0(v1, "MeleeWeaponBlockFierceAttack");
  sub_AFC3F0(v1, "CrowdPushFront");
  sub_AFC3F0(v1, "CrowdPushLeft");
  sub_AFC3F0(v1, "CrowdPushRight");
  sub_AFC3F0(v1, "CrowdAimPushLeft");
  sub_AFC3F0(v1, "CrowdAimPushRight");
  sub_AFC3F0(v1, "BeingPushedLeft");
  sub_AFC3F0(v1, "BeingPushedRight");
  sub_AFC3F0(v1, "StriperPole_01");
  sub_AFC3F0(v1, "StriperPole_02");
  sub_AFC3F0(v1, "StriperPole_03");
  sub_AFC3F0(v1, "StriperDance");
  sub_AFC3F0(v1, "StriperSitting_01");
  sub_AFC3F0(v1, "StriperSitting_02");
  sub_AFC3F0(v1, "StriperSitting_03");
  sub_AFC3F0(v1, "StriperStanding_01");
  sub_AFC3F0(v1, "StriperStanding_02");
  sub_AFC3F0(v1, "StriperStanding_03");
  sub_AFC3F0(v1, "Bouncer_Idle");
  sub_AFC3F0(v1, "Bouncer_Observing");
  sub_AFC3F0(v1, "BarSitting_01");
  sub_AFC3F0(v1, "BarSitting_01_a");
  sub_AFC3F0(v1, "BarSitting_01_b");
  sub_AFC3F0(v1, "BarSitting_02");
  sub_AFC3F0(v1, "BarSitting_02_a");
  sub_AFC3F0(v1, "BarSitting_02_b");
  sub_AFC3F0(v1, "BarSitting_03");
  sub_AFC3F0(v1, "BarSitting_03_a");
  sub_AFC3F0(v1, "BarSitting_03_b");
  sub_AFC3F0(v1, "BarSitting_04");
  sub_AFC3F0(v1, "BarSitting_04_a");
  sub_AFC3F0(v1, "BarSitting_04_b");
  sub_AFC3F0(v1, "WalkLeft");
  sub_AFC3F0(v1, "WalkRight");
  sub_AFC3F0(v1, "IdleLeft");
  sub_AFC3F0(v1, "IdleRight");
  sub_AFC3F0(v1, "ReloadLeft");
  sub_AFC3F0(v1, "ReloadRight");
  sub_AFC3F0(v1, "IdleLeftToShoot");
  sub_AFC3F0(v1, "IdleRightToShoot");
  sub_AFC3F0(v1, "LeaveCoverLeft");
  sub_AFC3F0(v1, "LeaveCoverRight");
  sub_AFC3F0(v1, "TakeCoverLeft");
  sub_AFC3F0(v1, "TakeCoverRight");
  sub_AFC3F0(v1, "ShootLeft");
  sub_AFC3F0(v1, "ShootRight");
  sub_AFC3F0(v1, "ShootLeftStandUp");
  sub_AFC3F0(v1, "ShootRightStandUp");
  sub_AFC3F0(v1, "ShootUpLeft");
  sub_AFC3F0(v1, "ShootUpRight");
  sub_AFC3F0(v1, "IdleLeftToShootUp");
  sub_AFC3F0(v1, "IdleRightToShootUp");
  sub_AFC3F0(v1, "WalkLeftStandUp");
  sub_AFC3F0(v1, "WalkRightStandUp");
  sub_AFC3F0(v1, "IdleLeftStandUp");
  sub_AFC3F0(v1, "IdleRightStandUp");
  sub_AFC3F0(v1, "ReloadLeftStandUp");
  sub_AFC3F0(v1, "ReloadRightStandUp");
  sub_AFC3F0(v1, "IdleLeftToShootStandUp");
  sub_AFC3F0(v1, "IdleRightToShootStandUp");
  sub_AFC3F0(v1, "LeaveCoverLeftStandUp");
  sub_AFC3F0(v1, "LeaveCoverRightStandUp");
  sub_AFC3F0(v1, "TakeCoverLeftStandUp");
  sub_AFC3F0(v1, "TakeCoverRightStandUp");
  sub_AFC3F0(v1, "AngryTalk_menu");
  sub_AFC3F0(v1, "AngryTalk");
  sub_AFC3F0(v1, "AngryTalk01");
  sub_AFC3F0(v1, "AngryTalk02");
  sub_AFC3F0(v1, "AngryListen");
  sub_AFC3F0(v1, "AngryListen01");
  sub_AFC3F0(v1, "AngryListen02");
  sub_AFC3F0(v1, "HappyTalk");
  sub_AFC3F0(v1, "HappyTalk01");
  sub_AFC3F0(v1, "HappyTalk02");
  sub_AFC3F0(v1, "HappyListen");
  sub_AFC3F0(v1, "HappyListen01");
  sub_AFC3F0(v1, "HappyListen02");
  sub_AFC3F0(v1, "StressedTalk");
  sub_AFC3F0(v1, "StressedTalk01");
  sub_AFC3F0(v1, "StressedListen");
  sub_AFC3F0(v1, "StressedListen01");
  sub_AFC3F0(v1, "CoverCrouchThrowGrenadeOverRight");
  sub_AFC3F0(v1, "CoverCrouchThrowGrenadeOverLeft");
  sub_AFC3F0(v1, "CoverStandUpThrowGrenadeRight");
  sub_AFC3F0(v1, "CoverStandUpThrowGrenadeLeft");
  sub_AFC3F0(v1, "CoverCrouchThrowGrenadeRight");
  sub_AFC3F0(v1, "CoverCrouchThrowGrenadeLeft");
  sub_AFC3F0(v1, "CoverHurdleLeft");
  sub_AFC3F0(v1, "HurdleLeftToIdle");
  sub_AFC3F0(v1, "CoverHurdleRight");
  sub_AFC3F0(v1, "HurdleRightToIdle");
  sub_AFC3F0(v1, "ClimbFromHurdleLeftToIdle");
  sub_AFC3F0(v1, "ClimbFromHurdleRightToIdle");
  sub_AFC3F0(v1, "LeftToRight");
  sub_AFC3F0(v1, "RightToLeft");
  sub_AFC3F0(v1, "LeftToRightStandUp");
  sub_AFC3F0(v1, "RightToLeftStandUp");
  sub_AFC3F0(v1, "FlinchLeft");
  sub_AFC3F0(v1, "FlinchRight");
  sub_AFC3F0(v1, "FlinchFrontLeft");
  sub_AFC3F0(v1, "FlinchFrontRight");
  sub_AFC3F0(v1, "FlinchBack");
  sub_AFC3F0(v1, "FallDownFaceGround01");
  sub_AFC3F0(v1, "FallDownFaceGround02");
  sub_AFC3F0(v1, "FallDownFaceSky01");
  sub_AFC3F0(v1, "FallDownFaceSky02");
  sub_AFC3F0(v1, "GetUpFaceGround");
  sub_AFC3F0(v1, "GetUpFaceSky");
  sub_AFC3F0(v1, "GetUpFaceSkyRagdoll");
  sub_AFC3F0(v1, "UseComputer");
  sub_AFC3F0(v1, "AvoidCar");
  sub_AFC3F0(v1, "AvoidCarLeft01");
  sub_AFC3F0(v1, "AvoidCarLeft02");
  sub_AFC3F0(v1, "AvoidCarLeft03");
  sub_AFC3F0(v1, "AvoidCarLeft04");
  sub_AFC3F0(v1, "AvoidCarRight01");
  sub_AFC3F0(v1, "AvoidCarRight02");
  sub_AFC3F0(v1, "AvoidCarRight03");
  sub_AFC3F0(v1, "AvoidCarRight04");
  sub_AFC3F0(v1, "AvoidCarJumpLeft01");
  sub_AFC3F0(v1, "AvoidCarJumpLeft02");
  sub_AFC3F0(v1, "AvoidCarJumpRight01");
  sub_AFC3F0(v1, "AvoidCarJumpRight02");
  sub_AFC3F0(v1, "Choose_FistsWeakStriking");
  sub_AFC3F0(v1, "Choose_FistsStrongStriking");
  sub_AFC3F0(v1, "Choose_MeleeWeakCombo");
  sub_AFC3F0(v1, "Choose_MeleeWeakStriking");
  sub_AFC3F0(v1, "Choose_MeleeWeakReturn");
  sub_AFC3F0(v1, "Choose_MeleeStrongStriking");
  sub_AFC3F0(v1, "Choose_MeleeIdle");
  sub_AFC3F0(v1, "Choose_Run");
  sub_AFC3F0(v1, "Choose_Reload");
  sub_AFC3F0(v1, "Choose_Walk");
  sub_AFC3F0(v1, "Choose_1handed");
  sub_AFC3F0(v1, "Choose_1handed_02");
  sub_AFC3F0(v1, "Choose_2handed");
  sub_AFC3F0(v1, "Choose_2handed_02");
  sub_AFC3F0(v1, "Choose_dual_02");
  sub_AFC3F0(v1, "Choose_head");
  sub_AFC3F0(v1, "Choose_head_02");
  sub_AFC3F0(v1, "Choose_leg");
  sub_AFC3F0(v1, "Choose_leg_02");
  sub_AFC3F0(v1, "Choose_torso");
  sub_AFC3F0(v1, "Choose_torso_02");
  sub_AFC3F0(v1, "Choose_polishes_2handed");
  sub_AFC3F0(v1, "Choose_aim_Sniper");
  sub_AFC3F0(v1, "Choose_flexing");
  sub_AFC3F0(v1, "Choose_flexing_armor");
  sub_AFC3F0(v1, "Choose_juggling_grenade");
  sub_AFC3F0(v1, "Choose_pickpocket");
  sub_AFC3F0(v1, "Choose_running_breath");
  sub_AFC3F0(v1, "Choose_standing_holding_grenade");
  sub_AFC3F0(v1, "Choose_takes_aim_1handed");
  sub_AFC3F0(v1, "Choose_takes_aim_2handed");
  sub_AFC3F0(v1, "Choose_throw_grenade");
  sub_AFC3F0(v1, "Choose_cover_crouch");
  sub_AFC3F0(v1, "Choose_1handedRecoil");
  sub_AFC3F0(v1, "Choose_1handedReload");
  sub_AFC3F0(v1, "Choose_1handedRecoilRevolver");
  sub_AFC3F0(v1, "Choose_1handedReloadRevolver");
  sub_AFC3F0(v1, "Choose_1handedRecoilSMG");
  sub_AFC3F0(v1, "Choose_1handedReloadSMG");
  sub_AFC3F0(v1, "Choose_2handedRecoil");
  sub_AFC3F0(v1, "Choose_2handedReload");
  sub_AFC3F0(v1, "Choose_2handedRecoilShotgun");
  sub_AFC3F0(v1, "Choose_2handedReloadShotgun");
  sub_AFC3F0(v1, "Choose_sprint");
  sub_AFC3F0(v1, "Choose_freerun");
  sub_AFC3F0(v1, "CheeringIdle01");
  sub_AFC3F0(v1, "CheeringIdle02");
  sub_AFC3F0(v1, "CheeringWalk01");
  sub_AFC3F0(v1, "CheeringWalk02");
  sub_AFC3F0(v1, "PhoneWalk");
  sub_AFC3F0(v1, "Walk01");
  sub_AFC3F0(v1, "Walk02");
  sub_AFC3F0(v1, "AngryWalk01");
  sub_AFC3F0(v1, "HappyWalk01");
  sub_AFC3F0(v1, "HappyWalk02");
  sub_AFC3F0(v1, "FlipBird");
  sub_AFC3F0(v1, "GiveObject");
  sub_AFC3F0(v1, "WavingArms01");
  sub_AFC3F0(v1, "WavingArms02");
  sub_AFC3F0(v1, "Chuckle01");
  sub_AFC3F0(v1, "Chuckle02");
  sub_AFC3F0(v1, "JogIdle");
  sub_AFC3F0(v1, "JogRun");
  sub_AFC3F0(v1, "ShakeFist");
  sub_AFC3F0(v1, "SmokingIdle");
  sub_AFC3F0(v1, "Cine_turn90Left");
  sub_AFC3F0(v1, "Cine_turn90Right");
  sub_AFC3F0(v1, "Cine_turn180Left");
  sub_AFC3F0(v1, "Cine_turn180Right");
  sub_AFC3F0(v1, "BluetoothCompose");
  sub_AFC3F0(v1, "BluetoothAnswer");
  sub_AFC3F0(v1, "BluetoothHangUp");
  sub_AFC3F0(v1, "RacerChickStart");
  sub_AFC3F0(v1, "SitAnchored_front_01");
  sub_AFC3F0(v1, "SitAnchored_left_01");
  sub_AFC3F0(v1, "SitAnchored_right_01");
  sub_AFC3F0(v1, "SitAnchored_front_02");
  sub_AFC3F0(v1, "SitAnchored_left_02");
  sub_AFC3F0(v1, "SitAnchored_right_02");
  sub_AFC3F0(v1, "CasinoDealerIdle");
  sub_AFC3F0(v1, "CasinoDealerGiveCards");
  sub_AFC3F0(v1, "CasinoGamblerIdle");
  sub_AFC3F0(v1, "CasinoGamblerLose");
  sub_AFC3F0(v1, "CasinoGamblerWin");
  sub_AFC3F0(v1, "CasinoGamblerCheck");
  sub_AFC3F0(v1, "CasinoSlotIdle");
  sub_AFC3F0(v1, "CasinoSlotIdle2");
  sub_AFC3F0(v1, "casino_dealer_give_cards");
  sub_AFC3F0(v1, "deviless_finger_call");
  sub_AFC3F0(v1, "deviless_finger_order");
  sub_AFC3F0(v1, "look_around");
  return sub_AFC3F0(v1, "ZzGameLastAnimation");
}


